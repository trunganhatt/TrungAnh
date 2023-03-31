  #if defined(Baud_Rate_230400)
      Serial.begin (230400);
  #elif defined(Baud_Rate_19200)
      Serial.begin (19200);
  #elif defined(Baud_Rate_9600)
      Serial.begin (9600);
  #endif


  if(digitalRead(CT) == LOW){
     while (digitalRead(CT) == LOW){delay(1);}                //NUT NHAN      
    delay(80); 
    digitalWrite(GND_DO, HIGH);
  }

  if(anh!=mai){}
  else if(cun>nghe){}
  else
