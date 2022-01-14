#include <iostream>
using namespace std;

// A class is the specification, template or blueprint of a datatype
class Car{
   public:
      //creating a contructor function 
      Car(string carName, string carType, string carRegistryNumber){
          cout << "the name of my car is " << carName << endl;
          cout << "the type of my car is " << carType << endl;
          cout << "the car registry number is " << carRegistryNumber << endl;
      }

};

int main()
{
    Car italianCars("Lamborghini", "F-Force Ario", "2022-02-28"); // 1st instaqnce of the class

    Car americanCars("Ferrari", "IO222-Heaven", "2013-20-02"); // 2nd instance of the same class

    return 0;
}