from machine import ADC
import time

sensor_pin = 0

adc = ADC(0)

while True:
   
    sensor_value = adc.read()

    
    temperatura = (sensor_value / 4095.0) * 100.0  # Para ESP32 el rango es de 0 a 4095

  
    print("Temperatura:", temperatura, "°C")

    # Esperar un  tiempo antes de tomar otra lectura
    time.sleep(3)