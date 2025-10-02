# Timer Interrupt and LED Scanning
Practice Lab 2 of MCP-MCU course

###  Exercise 5
Implement a digital clock with hour and minute information displayed by 2 seven segment LEDs.

The function updateClockBuffer will generate values for the array led_buffer according to the values of hour and minute. In the case these values are 1 digit number, digit 0 is added.
 Report 1: Present the source code in the updateClockBuffer function.

============================================================================================
###  Exercise 6
The main target from this exercise to reduce the complexity (or reduce code processing) in the timer interrupt. The time consumed in the interrupt can lead to the nested interrupt issue, which can crash the whole system. A simple solution can disable the timer whenever the interrupt occurs, the enable it again. However, the real-time processing is not guaranteed anymore.

In this exercise, a software timer is created and its counter is count down every timer interrupt is raised (every 10ms). By using this timer, the Hal_Delay(1000) in the main function is removed. In a MCU system, non-blocking delay is better than blocking delay. The details to create a software timer are presented bellow. The source code is added to your current program, do not delete the source code you have on Exercise 5.

Report 1: if in line 1 of the code above is miss, what happens after that and why?
 
Report 2: if in line 1 of the code above is changed to setTimer0(1), what happens after that and why?
 
Report 3: if in line 1 of the code above is changed to setTimer0(10), what is changed compared to 2 first questions and why?

============================================================================================
###  Exercise 7
Upgrade the source code in Exercise 5 (update values for hour, minute and second) by using the software timer and remove the HAL_Delay function at the end. Moreover, the DOT (connected to PA4) of the digital clock is also moved to main function. 

Report 1: Present your source code in the while loop on main function.

============================================================================================
###  Exercise 8
Move also the update7SEG() function from the interrupt  timer to the main. Finally, the timer interrupt only used to handle  software timers. All processing (or complex computations) is move to an infinite loop on the main function, optimizing the complexity of the interrupt  handler function.

Report 1: Present your source code in the the main function. In the case more extra functions are used (e.g. the second software timer), present them in the report as well.
