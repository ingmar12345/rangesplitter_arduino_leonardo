# rangesplitter_arduino_leonardo
Arduino code used for custom truck shifting knob hardware with Splitter and Range buttons for Euro Truck Simulator 2 and American Truck Simulator

1. Make sure you have an Arduino that can appear as a native keyboard, in my case the Arduino Leonardo (any 32u4 or SAMD based boards should work)

2. Connect the Arduino through a Micro-USB to USB-A cable to your PC

3. Download Arduino IDE (instructions are found at https://www.arduino.cc/en/main/software)

4. Download Truck_Simulator_V1.0.ino from this repository and open it in Arduino IDE

5. Go to the Tools dropdown menu
    - when hovering over "Board", select the option that sais "Arduino Leonardo" (or any other board describred in step 1)
    - set "Port" to whatever option that sais "Arduino Leonardo" between brackets (or any other board described in step 1)

6. You can verify and upload your code to the Arduino (icons found in the green bar at the left side)

7. Now it is time to map to map the buttons in the Truck Simulator games; 
   please note that it is not possible through the ingame menu to map keyboard buttons for the range and splitter functions.
   To map keyboard buttons for the range and splitter functions, please open the file called "controls.sii"; which can be found at:
    - Documents folder -> Euro Truck Simulator 2 (or American Truck Simulator) -> profiles -> select your current profile -> controls.sii
    
8. Truck_Simulator_V1.0.ino assumes that the splitter button is mapped to the "Z" key and the range button is mapped to the "X" key. 
   Make sure no other inputs have the same key mappings!
   
9. 
