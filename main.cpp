// #include<iostream>

// int main()
// {
    // std::cout<<"Hello World\n";
    // return 0;
// }

// OR

#include<iostream>
using namespace std;

int G = 1002;

class Employee{
    public:
        string name;
        int salary;
        void printDetails(){
            cout<<"The name of our employee is "<<this->name<<" and salary is "<<this->salary<<endl;
        }
};

int main()
{
    int sum = 3, to, G = 2001;
    cout<<"Hello Rushikesh! "<<sum<<"\n";
    cin>>to;
    cout<<"The formated output is "<<to<<" and the sum is "<<sum<<"\n";
    // how to access for global variable and local variable in cpp 
    cout<<"The local variable is: "<<G<<" and the global variable is: "<<::G<<endl;
    cout<<"Ended!"<<endl;

// OOPS in C++
    Employee em;
    em.name = "Rushikesh Patil";
    em.salary = 1000000;
    em.printDetails();   

    return 0;
}