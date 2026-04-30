# CE-ESY Assignments 

## Description
This program implements a Circular Buffer (Ring Buffer) in C.  
It allows storing characters in a fixed-size buffer and retrieving them in a FIFO order (First In First Out) using circular indexing.

## Functionality
- Initialize a circular buffer
- Check if buffer is full or empty
- Insert characters into the buffer (push operation)
- Remove characters from the buffer (pop operation)
- Process user input string
- Append the string "CE-ESY" to the input
- Store the final string in the buffer
- Display the stored characters and clear the buffer

## How it works
1. User enters a name
2. Program appends "CE-ESY" to it
3. Each character is inserted into the circular buffer
4. Characters are read back and displayed in order
5. Buffer is cleared after reading

## File
- `prog.c` → Main source code implementation

## Concept Used
- Circular Buffer (Ring Buffer)
- Modulo arithmetic for circular indexing
- Basic string manipulation in C
