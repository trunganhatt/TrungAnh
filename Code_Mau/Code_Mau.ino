
void setup() {
    PORTB = PORTB | 0x02; // Ngat IGBT Pin9 = 1

    
    pinMode(Led_XL, OUTPUT);
    pinMode(CT_1,  INPUT_PULLUP);
    pinMode(CT_2,  INPUT);
    pinMode(5, OUTPUT);   // Chan 5

    digitalWrite(Beep_Quat, HIGH);
    digitalWrite(Led_XL, LOW);
    
    digitalWrite(LED_BUILTIN, LOW); 

    digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));
    digitalWrite(Led_XL, !digitalRead(Led_XL));

    analogWrite(Pin_DC_1, PWM_DC);

    Serial.begin (230400);

//#########################################################################################
//                                      Về TIMER
//#########################################################################################





 



    


 




}







void loop() {
  delay(500)
  delayMicroseconds(850);

  tone(Beep_Quat,900);
  delay(200);            //Tieng Bip
  noTone(Beep_Quat);



  PORTD =~PORTD|(PD5); // Toggle ca Port luon
  PORTD=PORTD|(1<<PD5);
  PORTD=PORTD|(0<<PD5);    
  PORTD=B10100100;







}// Void











  






