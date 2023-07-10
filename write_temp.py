import serial

files = 'tempserial.txt'

serialcom = serial.Serial('/dev/ttyUSB0', 9600)
while True:
    line = serialcom.readline()
    line = line.decode('utf-8')
    print(line)
    with open(files, 'w') as file:
        file.write(line)
