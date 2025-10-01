# Timer Interrupt and LED Scanning
Practice Lab 2 of MCP-MCU course

### Exercise 2
 Extend to 4 seven segment LEDs and two LEDs (connected to PA4, labeled as DOT) in the
 middle as following:
 
<img width="935" height="468" alt="2" src="https://github.com/user-attachments/assets/1d18add4-538e-4478-b2f0-11d46552ddfb" />

Blink the two LEDs every second. Meanwhile, number 3 is displayed on the third seven
 segment and number 0 is displayed on the last one (to present 12 hour and a half). The
 switching time for each seven segment LED is also a half of second (500ms). Implement
 your code in the timer interrupt function.

 Report 1: Capture your schematic from Proteus and show in the report.
 
 Report 2: Present your source code in the HAL_TIM_PeriodElapsedCallback function.
 
 Short question: What is the frequency of the scanning process?
