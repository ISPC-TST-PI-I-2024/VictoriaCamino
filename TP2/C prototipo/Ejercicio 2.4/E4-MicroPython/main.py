from machine import Pin, ADC, PWM
import time

potPin = 34
ledPin = 2
pwmChannel = 0

# Configurar el canal PWM
led = PWM(Pin(ledPin), freq=5000, duty=0)

# Configurar el pin del potenciómetro como entrada analógica
pot = ADC(Pin(potPin))


while True:
    # Leer el valor del potenciómetro (0-4095)
    potValue = pot.read()
    print("El valor del potenciómetro es:", potValue)

    # Mapear el valor del potenciómetro (0-4095) al rango de PWM (0-255)
    pwmValue = int(potValue / 16) 

    # Establecer el valor PWM del LED
    led.duty(pwmValue)

    time.sleep_ms(20)  

