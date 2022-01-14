#include <iostream>
using namespace std;

// A class is the specification, template or blueprint of a datatype
class Student
{
public:
    string name;
    string major;
    double gpa;
    int age;
    // creating a contructor function
    Student(string Name, string Major, double Gpa, int Age)
    {
        name = Name;
        major = Major;
        gpa = Gpa;
        age = Age;
    }

    // lets include our object function
    string isSenior()
    {
        if (age <= 30)
        {
            cout << "You're a Junior" << endl;
        }
        else
        {
            cout << "You're a Senior" << endl;
        }
        return 0;
    }

    double isLazy()
    {
        if (gpa < 3.5)
        {
            cout << name << " is a lazy student" << endl;
        }
        else
        {
            cout << name << " is a serious student" << endl;
        }
        return 0;
    }
};

int main()
{

    Student presec_student("John Oduro Boateng", "General Art", 3.7, 17); // 1st instaqnce of the class

    Student knust_student("Moses Boahen", "Meteorology", 3.3, 34); // 2nd instance of the same class

    // KNUST STUDENT
    cout << knust_student.name << endl;
    cout << knust_student.isLazy() << endl;
    cout << knust_student.isSenior() << endl;

    // PRESEC STUDENTS
    cout << presec_student.name << endl;
    cout << presec_student.isSenior() << endl;
    cout << presec_student.isLazy() << endl;

    return 0;
}