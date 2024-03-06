#include <iostream>
#include <vector>
#include <utility> // For std::pair!

/*Interval scheduling algorithm
1. Sort the vecotor that is holding the schdules into acending order
2. Create a stack to compare the time schedules
3. Increment through the array with for loop
4. If the two different time intervals work, add them to the stack
5. Return the stack that holds the time intervals that fit together
*/

#include <iostream>
#include <vector>
#include <utility>

std::vector<std::pair<int, int>> testIntervalOne()
{
    return { {1, 2}, {3, 4}, {4, 5}, {1, 3} }; // Corrected vector initialization
}

void printTestVector(const std::vector<std::pair<int, int>>& intervals)
{
    for (const auto& interval : intervals) // Loop through the provided vector
    {
        std::cout << interval.first << " " << interval.second << std::endl; // Access first and second elements of each pair
    }
}

int main() 
{
    std::cout << "Welcome to the Interval Scheduling Algorithm!" << std::endl;
    std::vector<std::pair<int, int>> testVector = testIntervalOne(); // Call once and store the result
    std::cout << "Test Vector:" << std::endl;
    printTestVector(testVector); // Pass the vector to the print function
    return 0;
}
