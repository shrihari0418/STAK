int Moist(){

  int moist= analogRead(moisture);
  moist = map(  moist,550,0,0,100);
   Serial.print("Mositure : ");
   Serial.print(  moist);
   Serial.println("%");
   delay(800);

   return moist;
}