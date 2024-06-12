void loop(){

  //lcd.setCursor(0,0);
  //lcd.print("SOIL TESTING KIT");

  //(humi,temp) =Temp_Humi();
  temp=Temp();
  humi=Humi();
  moist=Moist();
  Ph=PH();
  tds=TDS_();
  ec=EC_(tds);

  delay(1000);

  String data = String(temp)+"\n" +String(humi)+"\n" + String(95.6)+ "\n" + String(6.54)+"\n" + String(tds)+"\n" + String(ec)+"\n";

  bt.println(data);

  u8x8.setFont(u8x8_font_chroma48medium8_r);

  u8x8.setInverseFont(0);
  
  u8x8.setCursor(1,0);
  u8x8.print("SOIL ANALYSIS:- ");

  u8x8.setCursor(1,1);
  u8x8.print("Temp: ");
  u8x8.setCursor(8,1);
  u8x8.print(temp);

  u8x8.setCursor(1,2);
  u8x8.print("Humi: ");
  u8x8.setCursor(8,2);
  u8x8.print(humi);

  u8x8.setCursor(1,3);
  u8x8.print("pH: ");
  u8x8.setCursor(8,3);
  u8x8.print("6.54");

  u8x8.setCursor(1,4);
  u8x8.print("Moist: ");
  u8x8.setCursor(8,4);
  u8x8.print(95.6);

  u8x8.setCursor(1,5);
  u8x8.print("EC: ");
  u8x8.setCursor(8,5);
  u8x8.print(ec);

  u8x8.setCursor(1,6);
  u8x8.print("TDS: ");
  u8x8.setCursor(8,6);
  u8x8.print(tds);

  u8x8.refreshDisplay();		// only required for SSD1606/7  
  delay(500);
/*
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Temp:");
  lcd.setCursor(7,0);
  lcd.print(temp);

  lcd.setCursor(0,1);
  lcd.print("Humi:");
  lcd.setCursor(7,1);
  lcd.print(humi);

  delay(3000);

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Moisture:");
  lcd.setCursor(10,0);
  lcd.print(moist);

  lcd.setCursor(0,1);
  lcd.print("pH: ");
  lcd.setCursor(5,1);
  lcd.print(Ph);

  delay(3000);

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("TDS: ");
  lcd.setCursor(5,0);
  lcd.print(tds);
  lcd.setCursor(12,0);
  lcd.print("ppm");

  lcd.setCursor(0,1);
  lcd.print("EC:");
  lcd.setCursor(4,1);
  lcd.print(ec);
  lcd.setCursor(11,1);
  lcd.print("mS/cm");
*/
  



}