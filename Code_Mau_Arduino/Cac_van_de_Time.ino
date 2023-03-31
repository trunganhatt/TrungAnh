if ((PINB&0b00010000) == 0) Pin12=0, Thoi gian dap ung 1uS nhung phai giu =0 2uS moi phat hien
if(!(PINB&(1<<4))) //Nhu tren
if ((PINB & 0x10)==0) //Nhu tren  

if(PINB&(1<<4)){ // Neu chan 12 ==1   Chan_PB4 cua Atmega328P  OK
                 // Phat hien 312nS
}

digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));        TOGGLE CHAM 9.6uS
digitalWrite(5, !digitalRead(5));

PORTD=PORTD ^ 0x20; // Toggle Pin5                           TOGGLE NHANH 436nS
PORTD=PORTD ^ 0x10; // Toggle Pin4                           TOGGLE NHANH 436nS


PORTD = PORTD | 0x10; // Pin4 =1                             BAT NHANH 126nS
PORTD = PORTD & 0xEF; // Pin4 =0                             TAT BINH THUONG 376nS  Cai nao truoc thi nhanh
PORTD = PORTD | 0x20; // Pin5 =1                                                    Cai nao sau thi cham hon
PORTD = PORTD & 0xDF; // Pin5 =0
PORTD &= ~_BV(PORTD5);  // Pin5 =0                             TAT NHANH 126nS
PORTD |= _BV(PORTD5);   // Pin5 =1

PORTB = PORTB | 0x02; // Pin9 =1
PORTB = PORTB & 0xFD; // Pin9 =0

PORTB = PORTB | 0x10; // Pin12 =1
PORTB = PORTB & 0xEF; // Pin12 =0

PORTB = PORTB | 0x20; // Pin13 =1
PORTB = PORTB & 0xDF; // Pin13 =0

PORTC = PORTC | 0x10; // A4 =1
