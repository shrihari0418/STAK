float Temp()
{
  
  DHT.read(DHT11_PIN);
  Serial.print("temp:");
  Serial.print((float)DHT.temperature);
  
  delay(800);

  return (float)DHT.temperature;
  
}

float Humi(){
  
  DHT.read(DHT11_PIN);
  Serial.print("temp:");
  Serial.print((float)DHT.humidity);
  
  delay(800);

  return (float)DHT.humidity;

}