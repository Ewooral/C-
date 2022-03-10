#include <iostream>
using namespace std;
int main()
{
    int Nums[30]; // specified the number of items the array should hold
    Nums[2] = 15; // at position 2, insert 15
    cout << Nums[2] << endl; // print out the number 15 at position 2
    Nums[23] = 455;
    cout << Nums[23] << endl;

    int A[5] = {0};
    cout << A[3] << endl;


    // ways of accessing elements in an array.
    int B[] = {2, 4, 5, 2, 3};
    cout << *(B +2) << endl; // 5
    cout << *(B + 1) << endl; // 4
    
    cout << ("%u", &A[2]) << endl; // 2
    cout << 4[B] << endl; // 3
}