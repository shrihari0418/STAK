
float ph (float voltage) {
    return (7+((2.5-voltage)/0.18));
}

float PH()
{
    float measurings = 0;

    for (int i = 0; i < 10; i++) {
        measurings += analogRead(pH);
        delay(10);
    }

    float avg = measurings / 10;
    Serial.println(avg);

    // Adjust the reference voltage from 5V to 3.3V
    float voltage = (avg * 3.3 / 4095);
    voltage = voltage + 0.9;

    float phval = -5.7 * voltage + 21.43;
    
    //Serial.println(voltage);
    Serial.print("pH= ");
    Serial.print(phval);
    //Serial.print(" | ");
    //Serial.println(ph(voltage));
    delay(1000);

    return phval;
}