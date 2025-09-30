# Timer Interrupt and LED Scanning
Practice Lab 2 of MCP-MCU course

### Exercise 1
The first exercise show how to interface for multiple seven segment LEDs to STM32F103C6
micro-controller (MCU). Seven segment displays are common anode type, meaning that
 the anode of all LEDs are tied together as a single terminal and cathodes are left alone as
 individual pins.

In order to save the resource of the MCU, individual cathode pins from all the seven seg
ment LEDs are connected together, and connect to 7 pins of the MCU. These pins are
 popular known as the signal pins. Mean while,the anode pin of each seven segment LEDs
 are controlled under a power enabling circuit, for instance, an PNP transistor. At a given
 time, only one seven segment LED is turned on. However, if the delay is small enough, it
 seemsthat all LEDs are enabling.

 Implement the circuit simulation in Proteus with two 7-SEGMENT LEDs as following:
 <img width="865" height="514" alt="1" src="https://github.com/user-attachments/assets/d9a58f62-37d6-44c8-b196-289515fb0f43" />

Components used in the schematic are listed bellow:
• 7SEG-COM-ANODE(connected from PB0 to PB6)
• LED-RED
• PNP
• RES
• STM32F103C6
 
 Students are proposed to use the function display7SEG(intnum) in the Lab 1 in this exercise. Implement the source code intheinterrupt callback function to display number "1"
 on the first seven segment and number "2" for second one. The switching time between 2 LEDs is half of second.
 Report 1: Capture your schematic from Proteus and show in the report.
 Report 2: Present your source code in the HAL_TIM_PeriodElapsedCallback function.
 Short question: What is the frequency of the scanning process?
