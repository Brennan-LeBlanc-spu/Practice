#include <iostream>

/* Adjacency Matrix Representation of graph
V-> (0, 1, 2, 3, 4);
E->[{0,1} {1,0} {1,4}, {4,1}, {1,3}, {3,1}, {2,3}, {3,2}]
*/
void printGraph(int arr[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

int main()
{
    // Space Complexity O(m * n)

    int arr[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr[i][j] = 0;
            if (i == j)
            {
                arr[i][j] = 1;
            }
        }
    }

    // Time Complexity = O(1);
    arr[0][1] = 1;
    arr[1][0] = 1;
    arr[1][4] = 1;
    arr[4][1] = 1;
    arr[3][1] = 1;
    arr[2][3] = 1;
    arr[3][2] = 1;

    printGraph(arr);

    /*Removing Edge, Assign in Adj matrix to 0 */
    arr[1][3] = 0; // Time Complexity is O(1);
    arr[3][1] = 0;

    return 0;
}