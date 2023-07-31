#include<iostream>

using namespace std;

class Employee{
// In cpp by default the variables inside class are assigned as private so we make it public
    // This process is also known as encapsulation 
    private:    
    string Name;
    int Weight;
    string Company;

    public:
    // To get access to the private variables we use "getters and setters"
    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
    void setWeight(int weight){
        if (weight>=18)
        {
            Weight = weight;
        }
        
    }
    int getWeight(){
        return Weight;
    }
    void setCompany(string company){
        Company = company;
    }
    string getCompany(){
        return Company;
    }
    void IntroduceYourself(){
        cout<<"Name: "<<Name<<endl;
        cout<<"Company: "<<Company<<endl;
        cout<<"Weight: "<<Weight<<"kg(s)"<<endl;

    }
    // Constructors: constructor method should have the class name only
    Employee(string name, string company, int weight){
        Name = name;
        Company = company;
        Weight = weight;

    }

};

int main()
{
    Employee emp1 = Employee("Jhon", "Microsoft", 65);
    // emp1.name = "Jack";
    // emp1.company = "Microsoft";
    // emp1.weight = 65;

    emp1.IntroduceYourself();
    emp1.setWeight(20);
    cout<<"My name is "<<emp1.getName()<<" and I am "<<emp1.getWeight()<<" kg(s) heavy!"<<endl;
}