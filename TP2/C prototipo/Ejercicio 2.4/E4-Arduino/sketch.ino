const int potPin = 34;    
const int ledPin = 2;     
const int pwmChannel = 0; 

void setup() {
  ledcSetup(pwmChannel, 5000, 8); // Canal, Frecuencia (Hz), Resolución (8 bits)
  ledcAttachPin(ledPin, pwmChannel); 
}

void loop() {
  // Leer el valor del potenciómetro (0-4095)
  int potValue = analogRead(potPin);
  Serial.print("el valor del potenciomentro es: ");
  Serial.println(potValue);

  // Mapear el valor del potenciómetro (0-4095) al rango de PWM (0-255)
  int pwmValue = map(potValue, 0, 4095, 0, 255);

  // Establecer el valor PWM del LED
  ledcWrite(pwmChannel, pwmValue);

  delay(20); 
}