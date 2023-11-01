# Microcontroller-Communication-using-CAN-Protocol
The core concept of the project is to communicate between 4 nodes of 
Microcontroller such as Arduino Uno, STM32 F446RE Nucleo Board, ESP32 & 
Raspberry Pi Pico using CAN (Controller Area Network) protocol without any 
host computer. Further we have used CAN Transceiver i.e. MCP 2515 as there is 
no inbuild CAN system in Arduino Uno and Raspberry Pi Pico. The assembly of 
these four microcontrollers is called as CAN Node. We have taken CAN Node 1, 
CAN Node 2, CAN Node 3, CAN & Node 4. These nodes is connected to CAN 
Bus for further communications between nodes. The received data on CAN Bus 
is shown on LCD Display.
