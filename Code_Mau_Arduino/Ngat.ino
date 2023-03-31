//######################################################################
                             (---NGAT NGOAI Pin2---)
attachInterrupt(digitalPinToInterrupt(interruptPin), Tinh_Xung, RISING);// Rat cham
//Thoi gian dap ung 3.5uS
void Tinh_Xung(){
  SL_Ngat ++;
}

Setup: 
EICRA |= _BV(ISC00); //set INT0 to trigger on Change (thay doi muc la vao Ngat)   
EIMSK |= _BV(INT0); 

EICRA |= _BV(ISC01); EICRA |= _BV(ISC00); //set INT0 to trigger on Rising edge   
EIMSK |= _BV(INT0); 

EICRA |= _BV(ISC01);                      //set INT0 to trigger on Falling       
EIMSK |= _BV(INT0); 

//sei();                    // turn on interrupts

ISR(INT0_vect){// NGAT NGOAI Pin2      
}

ISR(INT1_vect){// NGAT NGOAI Pin3                                               
    digitalWrite(Led_XL, HIGH);
  }


//######################################################################
                             (---Dinh thoi Timer 2---)
  TCCR1A = 0;
  TCCR1B = 0;
  TIMSK1 = 0; //Đây là Reset
  
  TCCR2A = 0; // Tieng << Beep >> phai reset
  TCCR2B |= (1 << CS22); // Prescaler 64
  TCNT2 = 0; //Bat dau den tu 0 
  TIMSK2 = (1 << TOIE2); // Enable Interrupt  (Thoi gian khoang 1ms)
   

  TCCR1B |= (1 << CS10);    //Tần số 16Mhz (không chia)
  TIMSK1 = (1 << TOIE1);   

  TCCR1B |= (1 << CS11);    //Tần số/8
  TIMSK1 = (1 << TOIE1);   

  TCCR1B |= (1 << CS11) | (1 << CS10);  //Tần số/64
  TIMSK1 = (1 << TOIE1);

  TCCR1B |= (1 << CS20) | (1 << CS11) | (1 << CS12);  // Prescaler 1024

  TCNT1 = 100; //Bat dau den tu 100   

                             
ISR(TIMER2_OVF_vect){   
   Time_Toan_Cuc++;
}

//######################################################################
                             (---ADC---)
Read_ADC_Thong_Thuong = analogRead(ADC_1_Pin);

Setup: 
ADCSRA =  bit (ADEN) | bit (ADIE);    // Enable ADC | Cho ngat
ADCSRA |= bit (ADPS0) | bit (ADPS1); // Prescaler of 8
ADCSRA |= bit (ADPS2);  // Prescaler of 16
ADCSRA |= bit (ADPS0) | bit (ADPS2);  // Prescaler of 32
ADCSRA |= bit (ADPS0) |  bit (ADPS1) | bit (ADPS2);  // Prescaler of 128
ADMUX = B01000000;  // A0
ADMUX = B01000001;  // A1

ADCSRA |= bit (ADSC);     //Start ADC

ADCSRA |= bit (ADPS0);                               //   2  
ADCSRA |= bit (ADPS1);                               //   4  
ADCSRA |= bit (ADPS0) | bit (ADPS1);                 //   8  
ADCSRA |= bit (ADPS2);                               //  16 
ADCSRA |= bit (ADPS0) | bit (ADPS2);                 //  32 
ADCSRA |= bit (ADPS1) | bit (ADPS2);                 //  64 
ADCSRA |= bit (ADPS0) | bit (ADPS1) | bit (ADPS2);   // 128
Prescaler
    2    * 13 * 1/16E6  = 0.000001625 (  1.625 µs)
    4    * 13 * 1/16E6  = 0.00000325  (  3.25  µs)
    8    * 13 * 1/16E6  = 0.0000065   (  6.5   µs)
   16    * 13 * 1/16E6  = 0.000013    ( 13     µs)
   32    * 13 * 1/16E6  = 0.000026    ( 26     µs)
   64    * 13 * 1/16E6  = 0.000052    ( 52     µs)
  128    * 13 * 1/16E6  = 0.000104    (104     µs)


ISR(ADC_vect) // Ngat ADC chuyen doi xong        
   {
    if(ADMUX == B01000000){
        BIEN_ADC_1 = ADC;
        ADMUX = B01000001;
        ADCSRA |= bit (ADSC) ;  // Start ADC 
     }     
     else if(ADMUX == B01000001) {
        BIEN_ADC_2 = ADC;
        ADMUX = B01000010;
        ADCSRA |= bit (ADSC) ;  // Start ADC 
     }
     else{
        BIEN_ADC_3 = ADC;
        ADMUX = B01000000;           
     }
   }  
