const int led_pins[] = {32, 26, 12};
const int num_leds = sizeof(led_pins) / sizeof(led_pins[0]);

void setup() {
  // Poner los leds como salida
  for (int i = 0; i < num_leds; i++) {
    pinMode(led_pins[i], OUTPUT);
  }
}

void loop() {
  // Encender todos los  leds
  for (int i = 0; i < num_leds; i++) {
    digitalWrite(led_pins[i], HIGH);
  }
  delay(2000); 

  // Apagar todos los leds
  for (int i = 0; i < num_leds; i++) {
    digitalWrite(led_pins[i], LOW);
  }
  delay(1000); 
}
