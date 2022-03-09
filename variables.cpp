# include <iostream>
using namespace std;
int main()
{

    // Integer occupies 4 bytes which is 32 bits in memory
    // short occupies 2 bytes which is 16 bits in memory 
    // long occupies 4 or 8 bytes which is 32 or 64 bits in memory 
    // long long occupies 8 bytes which is 64 bits in memory 

    // Functional initialization
    int apple_count(200);
    unsigned int apple_countII{23};
    signed int apple_countI{-4430};

    // Information lost. less safe than brace initializers
    int narrowing_conversion_function(34.09);
    double decimal{34.221};

    cout << apple_count << "\n" << apple_countI << "\n" << apple_countII<<
    narrowing_conversion_function << "\n" << decimal << endl;

    // Check the size of your variables in memory with sizeof function
    cout << "size of int: " << sizeof(int) << endl;


    string myFirstName = "Elijah";
    string myLastName = "Boahen";
    int age = 29;
    cout << "Hello " << myFirstName<<"." << " You're " << age <<" years old."<<endl;
   
   
    cout << "       /|" << endl;
    cout << "      / |" << endl;
    cout << "     /  | " << endl;
    cout << "    /   |" <<endl;
    cout << "   /    |" <<endl;
    cout << "  /     |" <<endl;
    cout << " /      |" <<endl;
    cout << "/_______|" <<endl;


    return 0;
   
}

