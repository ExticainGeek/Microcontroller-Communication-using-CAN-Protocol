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
CAN is network protocol that enables communication between different electronic control units (ECUs) or devices within a system without the need for a central computer. Overall, the CAN protocol provides a robust, reliable, and flexible communication solution for various applications, particularly in the automotive and industrial domains, where real-time performance and fault tolerance are critical requirements. Therefore in these project we simply demonstrate the working principles, characteristics and operation of CAN protocol using 4 microcontrollers.
