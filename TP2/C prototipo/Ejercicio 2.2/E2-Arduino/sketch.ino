const int sensorPin = 15; 

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(sensorPin);

  // Convertir el valor leído a temperatura en grados Celsius
  float temperatura = sensorValue * (5.0 / 4095.0) * 100.0; // Para ESP32 el rango es de 0 a 4095


  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.println(" °C");

  // Esperar un breve período de tiempo antes de tomar otra lectura
  delay(100);
}