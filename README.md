# Timer Interrupt and LED Scanning
Practice Lab 2 of MCP-MCU course

### Exercise 3
 Implement a function named update7SEG(intindex). An array of 4 integer numbers are
 declared in this case. The code skeleton in this exercise is presented as following:
 
<img width="692" height="489" alt="3" src="https://github.com/user-attachments/assets/c4c365e1-fac6-4e31-8a53-bcfe40c2332d" />


 This function should be invoked in the timer interrupt, e.g update7SEG(index_led++). The variable index_led is updated to stay in a valid range, which is from 0 to 3.
 
 Report 1: Present the source code of the update7SEG function.
 
 Report 2: Present the source code in the HAL_TIM_PeriodElapsedCallback.
 
 Students are proposed to change the values in the led_buffer array for unit test this function, which is used afterward.
