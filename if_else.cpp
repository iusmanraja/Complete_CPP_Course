#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter Your Age : ";
    cin>> age;

    if(age<=0 or age>100){
        cout<<"Invalid Age";
    }

    else if(age>= 18){
        cout<< "Your age is Valid For This Event ";
    }

    else{
        cout<< "Your age is Invalid For This Event ";
    }

}