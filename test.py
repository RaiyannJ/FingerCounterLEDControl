import serial
import time

comport = '/dev/cu.usbmodem101'  
baudrate = 9600

try:
    ser = serial.Serial(comport, baudrate)
    time.sleep(2)  # Wait for the serial connection to initialize
    print("Serial port opened successfully.")
    ser.write(b'Hello Arduino\n')
    time.sleep(4)
    ser.close()
    print("Serial port closed.")
except serial.SerialException as e:
    print(f"Serial port error: {e}")
