#include <iostream>
using namespace std;

// A class is the specification, template or blueprint of a datatype
class Car{
   public:
      string carName;
      string carType;
      string carRegistryNumber;
      string dateManufactured;
};

int main()
{
    Car italianCars; // 1st instaqnce of the class

    string carname = italianCars.carName = "Lamboghini";
    string datemanufactured = italianCars.dateManufactured = "27th of September 2022";
    // italianCars.dateModified = "1st of January 2022"; //'class Car' has no member named 'dateModified
    string number = italianCars.carRegistryNumber =" AABDD23432";
    string model = italianCars.carType = "C-class";

    Car americanCars; // 2nd instance of the same class

    string carname1 = americanCars.carName = "G-Wagon";
    string datemanufactured1 = americanCars.dateManufactured = "1954-02-12";
    string model1 = americanCars.carType = "F - Wagon III";


    cout << "-------------1st instance of the class---------" << endl;
    cout << carname << endl;
    cout << datemanufactured << endl;
    
    cout << "-------------2nd instance of the class---------" << endl;
    cout << carname1 << endl;
    cout << model1 << endl;
    cout << datemanufactured1 << endl;

    return 0;
}