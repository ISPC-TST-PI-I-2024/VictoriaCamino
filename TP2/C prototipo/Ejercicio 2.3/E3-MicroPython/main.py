import machine
import time

led_pins = [32, 26, 12]

leds = [machine.Pin(pin, machine.Pin.OUT) for pin in led_pins]

# Función para encender todos los LEDs
def encender_leds():
    for led in leds:
        led.value(1)

# Función para apagar todos los LEDs
def apagar_leds():
    for led in leds:
        led.value(0)

# Ejecutar el ciclo de encendido y apagado de los LEDs
while True:
    encender_leds()
    time.sleep(2)  
    apagar_leds()
    time.sleep(1)  