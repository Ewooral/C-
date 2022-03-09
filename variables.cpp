# include <iostream>
using namespace std;
int main()
{

    // Functional initialization
    int apple_count(200);
    int apple_countI{4430};

    //information lost. less safe than brace initializers
    int narrowing_conversion_function(34.09);
    double decimal{34.221};

    cout << apple_count << "\n" << apple_countI << "\n" <<
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

