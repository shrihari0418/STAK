void setup(){

  Serial.begin(115200);
  
  pinMode(moisture,INPUT);
  //pinMode(temp,INPUT);
  pinMode(relay,OUTPUT);
  pinMode(pH,INPUT);
  pinMode(TDS,INPUT);
  //pinMode(DHT11_PIN,INPUT);
  u8x8.begin();
  u8x8.setPowerSave(0);

  bt.begin(115200);                  // define communication speed
  bt.begin("SOIL TESTING AND ANALYSIS KIT");
  Serial.println("SOIL TESTING AND ANALYSIS KIT");
}