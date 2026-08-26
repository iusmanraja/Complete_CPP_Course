#include <iostream>
using namespace std;

class Employee{
    public:
    string name;
    int salary;
};


int main(){
    Employee ur;
    ur.name = "Usman";
    ur.salary = 100000;

    cout<<"The Name Of Our First Employee is "<<ur.name<<" and His Salary is "<< ur.salary<<endl;

}
