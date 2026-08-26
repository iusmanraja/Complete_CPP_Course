#include <iostream>
using namespace std;

class Employee{
    public:
    string name;
    int salary;

    Employee(string name, int salary){
        this->name = name;
        this->salary = salary;
    }

    void printDetails(){
        cout<<"The Name Of Our First Employee is "<<this->name<<" and His Salary is "<< this->salary<<endl;
    }


};


int main(){
    Employee ur("Usman Constructor", 200000);
    // ur.name = "Usman";
    // ur.salary = 100000;
    ur.printDetails();

    // cout<<"The Name Of Our First Employee is "<<ur.name<<" and His Salary is "<< ur.salary<<endl;

    return 0;

}
