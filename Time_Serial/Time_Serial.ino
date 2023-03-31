uint8_t abc=0;
uint8_t def=15;
void setup() {
  Serial.begin (4800);
  pinMode(5, OUTPUT);
}

void loop() {


USART_Tx ('A');
USART_Tx ('1');
USART_Tx ('4');
USART_Tx ('5');
USART_Tx (';');












  //UDR0 = 'P';
  
   //Serial.write("P");
   //Serial.print(def);
   //Serial.write(";");
   //PORTD = PORTD & 0xDF; // Pin5 =0
   //Serial.write("P");
   //Serial.print(def);
   //Serial.write(";");
   //PORTD = PORTD | 0x20; // Pin5 =1
  //abc++;
  //if(abc=200){
     //abc=0;
  //}
  //PORTD = PORTD & 0xDF; // Pin5 =0
  //delay(100);
  PORTD=PORTD ^ 0x20; // Toggle Pin5  
}// void lood


void USART_Tx(unsigned char data)
{
	while(!(UCSR0A&(1<<UDRE0)));
	UDR0=data;
}
