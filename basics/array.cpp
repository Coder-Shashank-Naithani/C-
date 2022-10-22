#include<iostream>
using namespace std;

int main(){
   
    // Get the Size of an Array

    int myNumbers[5] = {10, 20, 30, 40, 50};
    cout << sizeof(myNumbers)<<endl;

    // get array length

    int getArrayLength = sizeof(myNumbers) / sizeof(int);
    cout << getArrayLength<<endl;
     // declare array variable
    string cars[5] = {"Mustang", "Rolls Royce", "Maruti Zen", "Mahindra Thar", "Tata nano"};
    
    int carsArrayLength = sizeof(cars) / sizeof(string);
    // print Array
    for(int i =0; i<carsArrayLength;i++){
        cout<< cars[i]<<endl;       
    }

    return 0;
}