#include <iostream>
using namespace std;


int main(){
    int a = 35;
    int* ptra;
    ptra = &a;
    cout<<"The Value Of a Is : "<<a<<endl;
    cout<<"The Value Of a Is : "<<*ptra<<endl;
    cout<<"The Value Address Of a Is : "<<&a<<endl;
    cout<<"The Value Address Of a Is : "<<ptra<<endl;
}