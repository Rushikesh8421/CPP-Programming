#include <iostream>
using std::string;
using namespace std;

class AbstractEmployee
{
    virtual void askForPromotion() = 0;
};

class Employee : AbstractEmployee
{
public:
    string Name;
    string Company;
    int Age;

    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }

    void askForPromotion()
    {
        if (Age > 30)
        {
            cout << Name << " got promoted!" << endl;
        }
        else
        {
            cout << Name << " not got promoted!" << endl;
        }
    }
};

int main()
{
    Employee emp1 = Employee("John", "Google", 25);
    Employee emp2 = Employee("Wick", "Microsoft", 35);

    emp1.askForPromotion();
    emp2.askForPromotion();
}