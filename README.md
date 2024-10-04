# Dynamic String Manipulation in C

## Overview
This project implements a simple dynamic string manipulation library in C. It allows users to create, modify, and concatenate strings at runtime without specifying their size in advance. The program reads user input, appends it to an existing string, and displays the updated result until the user chooses to exit.

## Features
- **Dynamic Memory Management**: Allocate and resize memory as needed for string manipulation.
- **String Operations**: Functions for appending strings, comparing strings, and finding characters in strings.
- **User Interaction**: A command-line interface that prompts the user for input and displays the current state of the string.

## Functions Implemented
1. **`size_t strlen(char* str)`**: Returns the length of the string.
2. **`int strcmp(char* c1, char* c2)`**: Compares two strings and returns `0` if they are equal, or a non-zero value if they are not.
3. **`int strindex(char* String, char character)`**: Returns the index of the first occurrence of a character in a string or the length of the string if not found.
4. **`char* strappend(char* str1, char* str2)`**: Appends `str2` to `str1` and returns the concatenated string.

## Getting Started

### Prerequisites
- A C compiler (e.g., GCC)
- Basic knowledge of C programming

### Installation
1. Clone the repository:
   ```bash
   git clone https://github.com/rafailsialakis/DynamicString
   cd DynamicString
Compile the code:

bash
Copy code
gcc -o main main.c DynamicString.c
Run the program:

bash
Copy code

./main
Usage
Upon running the program, you will be prompted to enter a string to append to the current string.
Type "exit" to quit the program.
The program will display the current string after each input.
