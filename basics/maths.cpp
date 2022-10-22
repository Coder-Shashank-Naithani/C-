#include <iostream>
#include <cmath>
using namespace std;
int main(){
    //addition
        int x = 3;
        int y = 4;
        cout<<"Addition"<<endl;
        cout<< x << endl << y << endl;
        int z = x+y;
        cout<< z;

    //subtraction
        cout<<"subtraction"<<endl;
        z= x-y;
        cout<<z<<endl;
    //divide
        cout<<"divide"<<endl;
        x= 10;
        y=2;
        z= x/y;
        cout<<z<<endl;
    //modulas
        cout<<"modulas"<<endl;
        z= x%y;
        cout<<z<<endl;

    //multiply
        cout<<"multiply"<<endl;
        z= x*y;
        cout<<z<<endl;
    // increment
        cout<<"increment"<<endl;
        cout<<"Initial Value: x ="<<x<<"\t y ="<<y<<endl;
        x++;y++;
        cout<<x<<"\t"<<y<<endl;
    // decrement 

cout<< "Number functions\n";

cout << "Square of the number 64 is "<<sqrt(64)<<endl; //output the square of the number
cout << "Round of the number 2.6 is "<<round(2.6)<<endl; // round number to the nearest integer - 2
cout << "log of the number 2 is "<<log(2)<<endl;
    return 0;
}