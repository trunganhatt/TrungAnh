  Serial.begin (115200);
  Serial1.begin (115200); // Mega 2560
  Serial2.begin (115200); // Mega 2560
  Serial3.begin (115200); // Mega 2560

  Serial.write('A'); = Serial.write(97);     //Gui ky tu
  Serial.print("MNO");
  Serial.write(13);

  Serial.write(TB_ADC_2); 
  Serial.write(TB_ADC_2>> 8); // Gui bien 16bit dang byte
  
  Serial.print(Test);   Gui bien duoi dang ky tu
  
  if(Serial.available() > 0) {
     Doc_Du_Lieu_1 = Serial.read(); 
     Serial1.write(Doc_Du_Lieu_1);
  }

  if(Serial1.available() > 0) {
     Doc_Du_Lieu_2 = Serial1.read(); 
     Serial.write(Doc_Du_Lieu_2);
  }

  void Clear_Serial_Read(){
   while(Serial.available()>0){
      Doc_Du_Lieu = Serial.read();  
   }
   Doc_Du_Lieu=0;
}
