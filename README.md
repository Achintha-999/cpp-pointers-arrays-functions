# cpp-pointers-arrays-functions

## Description
This project demonstrates the basics of pointers, arrays, and functions in C++. It includes examples of returning pointers from functions and manipulating static arrays. The code is designed to help beginners understand key concepts in memory management and data handling.

## Features
- Returning pointers from functions.
- Using static arrays within functions.
- Demonstrating how array elements can be modified and accessed through pointers.

## Code Example
The main code snippet in this project:
```cpp
#include <iostream>
using namespace std;

int *function()
{
    static int array[] = {1, 2, 3};
    array[0]++;
    return array;
}

int main()
{
    cout << function()[0];
    cout << function()[0];
}

How It Works

1. A static array is declared inside the function().
2. The first element of the array is incremented each time the function is called.
3. The function returns a pointer to the array, allowing access to its elements in the main() function.

Repository Link
cpp-pointers-arrays-functions

Requirements

- A C++ compiler (e.g., GCC, Clang, or MSVC).
- Basic knowledge of C++ syntax and concepts.
How to Run

1. Clone the repository:
git clone https://github.com/Achintha-999/cpp-pointers-arrays-functions

2. Navigate to the project directory:
cd cpp-pointers-arrays-functions

3. Compile the code:
g++ main.cpp -o main

4. Run the executable:
./main
