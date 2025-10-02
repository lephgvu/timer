# Timer Interrupt and LED Scanning
Practice Lab 2 of MCP-MCU course

### Exercise 9
This is an extra works for this lab. A LED Matrix is added to the system. A reference design is shown in figure bellow:

<img width="775" height="409" alt="9" src="https://github.com/user-attachments/assets/d90c2d03-55de-4831-8dbd-05c995b0a0db" />

In this schematic, two new components are added, including the MATRIX-8X8-RED and ULN2803, which is an NPN transistor array to enable the power supply for a column of the LED matrix. Students can change the enable signal (from ENM0 to  ENM7) if needed. Finally, the data signal (from ROW0 to ROW7) is connected to PB8 to PB15. 

Report 1: Present the schematic of your system by capturing the screen in Proteus.

Report 2: Implement the function, updateLEDMatrix(int index), which is similarly  to 4 seven led segments.

Student are free to choose the invoking frequency of this function. However, this function is supposed to invoked in main function. Finally, please update the matrix_buffer to display character "A".

========================================================
### Exercise 10 
Create an animation on LED matrix, for example, the character is shifted to the left. 

Report 1: Briefly describe your solution and present your source code in the report.
