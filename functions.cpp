#include <iostream>
using namespace std;

int add(int a, int b){
    int c;
     c = a+b;
     return c;
}


int main(){
    int a,b;
    cout<<"Enter First Number : ";
    cin>> a;

    cout<<"Enter Second Number : ";
    cin>> b;

    cout<<"The Function Returned : "<< add(a,b);
    return 0;

}