#include <iostream>

// Include Stack
#include <stack>

// Stack is a type of data collection using LIFO (Last In First Out), like a stack of plates.

void print(std::stack<int> stack)
{
    while (!stack.empty())
    {
        std::cout << stack.top() << std::endl;
        stack.pop();
    }
}

int main()
{

    // 5 most important functions with stack
    /* empty()
        size()
        top()
        push()
        pop()*/

    std::stack<int> numStack;
    numStack.push(1);
    numStack.push(2);
    numStack.push(3);
    if (numStack.empty())
    {
        std::cout << "Stack is Empty" << std::endl;
        std::cout << "Stack size is " << numStack.size() << std::endl;
    }
    else
    {
        std::cout << "Stack is not Empty" << std::endl;
        std::cout << "Stack size is " << numStack.size() << std::endl;
        print(numStack);
    }
}