#include<iostream>
using std::string;

class Employee {
public:
    string Name;
    string Company;
    int Age;
 
    void introduce() {
        std::cout <<"Name-"<<Name<< std::endl;
        std::cout <<"Company-"<<Company<< std::endl;
        std::cout <<"Age-"<<Age<< std::endl;
    }   
    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;    
    }
};
int main()
{
    Employee employee1=Employee("john","Amazon",22); //var of type Employee , object of class
    employee1.introduce();//invoke the meth

    Employee employee2=Employee("jones","Microsoft",25);
    employee2.introduce();
}