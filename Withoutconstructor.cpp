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
    Employee(string Name, string Company, string Age) {
        Name = name;
        Company = company;
        Age = age;
        
    }
};
int main()
{
    Employee employee1; //var of type Employee , object of class
    employee1.Name="John";
    employee1.Company="Amazon";
    employee1.Age =22;
    employee1.introduce();//invoke the meth

    Employee employee2;
    employee2.Name="Jones";
    employee2.Company="Idea";
    employee2.Age =25;
    employee2.introduce();
} 
