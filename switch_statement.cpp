#include <iostream>
using namespace std;

int main(){
    int age;
    cout<< "Enter Your Age : ";
    cin>> age;

    switch (age)
    {
    case 12:
        cout<< "You are 12 Years Old";
        break;

    case 18:
        cout<< "You are 18 Years Old";
        break;
    
    default:
    cout<< "You are Neither 12 nor 18 Years Old";
        break;
    }
}