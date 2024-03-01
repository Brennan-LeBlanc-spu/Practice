#include <iostream>
#include <string>

// Stack is a set size of memory for our program
// Ask for memory is all

struct Vector3
{
    float x, y, z;
};

int main()
{
    int value = 4;  // Allocated on the stack
    Vector3 vector; // Allocated on the stack

    int arr[5]; // Allocated on the stack
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;

    int *hvalue = new int; // Allocated on the heap

    *hvalue = 5; // 5 is stored in our allocated int from the heap

    int *harr = new int[5]; // Allocated an array on the heap with a size of 5
    harr[0] = 1;
    harr[1] = 2;
    harr[2] = 3;
    harr[3] = 4;
    harr[4] = 5;

    Vector3 *hvec = new Vector3(); // Allocated on the heap

    delete hvalue;
    delete[] harr;
    delete hvec;
    return 0;
}