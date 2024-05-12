from machine import Pin
import time

led = Pin(18, Pin.OUT)

boton = Pin(14, Pin.IN) 



while True:
    estado_boton = boton.value()  # Lee el estado del botón (0 o 1)

    if estado_boton == 1:
        led.on()  # Enciende el LED
    else:
        led.off() # Apaga el LED

    time.sleep(0.1)