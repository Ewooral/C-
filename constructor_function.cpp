#include <iostream>
using namespace std;

// A class is the specification, template or blueprint of a datatype
class Car{
   public:
       string carName;
       string carType;
       string carRegistryNumber;
       string dateManufactured;
       // creating a contructor function
       Car(string carname, string cartype, string carregistrynumber)
       {
           carName = carname;
           carType = cartype;
           carRegistryNumber = carregistrynumber;    
      }

};

int main()
{
   

    Car italianCars("Lamborghini", "F-Force Ario", "2022-02-28"); // 1st instaqnce of the class

    Car americanCars("Ferrari", "IO222-Heaven", "2013-20-02"); // 2nd instance of the same class

    cout << "-------------1st instance of the class---------" << endl;
    cout << "the name of my car is " << italianCars.carName << endl;
    cout << "the type of my car is " << italianCars.carType << endl;
    cout << "the car registry number is " << italianCars.carRegistryNumber << endl;


    cout << "-------------2nd instance of the class---------" << endl;
    cout << "the name of my car is " << americanCars.carName << endl;
    cout << "the type of my car is " << americanCars.carType << endl;
    cout << "the car registry number is " << americanCars.carRegistryNumber << endl;


    return 0;
}