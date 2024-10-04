# Pointer-Basics
# Aim:
To study and implement C++ pointers basics.

# Software Used:
Visual Studio Code.

# Theory:
Pointers are a fundamental concept in C++ that provide powerful capabilities for direct memory manipulation and efficient data handling. A pointer is a variable that stores the memory address of another variable. This allows programmers to work with memory directly, which can be useful for various applications such as dynamic memory allocation, passing large structures or arrays to functions without making copies, and creating complex data structures like linked lists and trees.

<br>Pointers also support arithmetic operations, allowing you to increment or decrement them to point to adjacent memory locations. This feature is particularly useful when working with arrays. For instance, if you have an array of integers, incrementing a pointer to that array will move it to the next integer in the array. This flexibility allows for efficient traversal and manipulation of data structures, enhancing the power and versatility of C++ as a programming language.
# Syntax:
`data_type *pointer_name;`
# Example:
```cpp
#include<iostream>
using namespace std;

int main()
{
    int var = 10;
    int *ptr;

    ptr = &var;

    cout << "Value of var: " << var << endl;
    cout << "Address of var: " << &var << endl;
    cout << "Value stored in ptr: " << ptr << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;

    return 0;
}
```
# Algorithms:
### Displaying Pointer Information:
- Start.
- Declare an integer variable var and initialize it to 10.
- Declare an integer pointer ptr.
- Assign the address of var to ptr using the address-of operator &.
- Display the value of var.
- Display the address of var.
- Display the value stored in ptr (which is the address of var).
- Display the value pointed to by ptr using the dereference operator.
- End.
