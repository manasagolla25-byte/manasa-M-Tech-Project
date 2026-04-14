/*
  LM35 Temperature Sensor Example
  Reads temperature from LM35 and prints in Celsius and Fahrenheit
*/

const int sensorPin = A0;  // LM35 connected to A0

void setup() {
  Serial.begin(9600);
  Serial.println("LM35 Temperature Sensor Test");
}

void loop() {
  int reading = analogRead(sensorPin);   // Read analog value

  // Convert reading to voltage
  float voltage = reading * (5.0 / 1023.0);

  // Convert voltage to temperature in Celsius
  float temperatureC = voltage * 100.0;

  // Convert Celsius to Fahrenheit
  float temperatureF = (temperatureC * 9.0 / 5.0) + 32.0;

  // Print values
  Serial.print("Voltage: ");
  Serial.print(voltage);
  Serial.print(" V | ");

  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.print(" °C | ");

  Serial.print(temperatureF);
  Serial.println(" °F");

  delay(1000);
}
