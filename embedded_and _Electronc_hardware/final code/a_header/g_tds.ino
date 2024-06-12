
float TDS_() {
  float analogValue = analogRead(TDS);
  float voltage = analogValue * (5.0 / 1023.0); // Vref = 5V
  float compensationCoefficient = 1.0 + 0.02 * (temperature - 25.0);
  float ecValue = voltage / (compensationCoefficient * scaleFactor) ;
  float tdsValue = ecValue * ecConversionFactor * 640;
  
  Serial.print("TDS Value: ");
  Serial.print(tdsValue);
  Serial.print(" ppm");

  

  //Serial.println(analogValue);
  //Serial.println(voltage);

  delay(800);

  return tdsValue;
}

float EC_(float tds){

  float ecValue = tds/640;

  Serial.print(" | EC Value: ");
  Serial.print(ecValue);
  Serial.println(" mS/cm");

  delay(800);

  return ecValue;

}


