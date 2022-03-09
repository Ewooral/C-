// Two dimensioanl arrays and
// nested for loops
// Two dimensional array is an array where 
// every element in the array is an array
#include <iostream>
using namespace std;

int main()
{
    int numberGrid[5][3] =
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {4, 5, 6},
        {7, 8, 12}
    };
    int firstElem = numberGrid[0][0];
    int secondElem = numberGrid[1][1];
    int thirdElem = numberGrid[2][2];
  
    cout << firstElem + secondElem + thirdElem << endl;

    return 0;
}
 