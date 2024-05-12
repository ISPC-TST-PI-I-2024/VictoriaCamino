const int boton = 13; 
const int led = 33;  

void setup() {
  pinMode(boton, INPUT);  
  pinMode(led, OUTPUT);  
}

void loop() {
  int estadoBoton = digitalRead(boton); 

  if (estadoBoton == LOW) { 
    digitalWrite(led, LOW); 
    delay(1000);
  } else {
    digitalWrite(led, HIGH);  
  }
}
