#include <iostream>
using namespace std;

int main(){

    // One Dimentional Array 
    // int arr[5] = {1,2,3,4,5};
    // // cout<< arr[4];

    // int marks[6];

    // for (int i = 1; i <= 8; i++)
    // {
    //     cout<< "Enter The Marks Of "<<i<<"th Student"<<endl;
    //     cin>>marks[i];
    // }

    // for (int i = 1; i <= 8; i++)
    // {
    //     cout<< "Marks Of "<<i<<"th Student is "<<marks[i]<<endl;
    // }
    

    // 2d Array 
    int arr2d[2][3] = {
        {1,2,3},
        {4,5,6}
    };
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"The Value Of "<<i<<","<<j<<" is : "<< arr2d[i][j]<<endl;
        }
        
    }
    


    return 0;

}