#include<iostream>
// #include <string>
using namespace std;

int main (){
    string food = "pizza";
    string &meal = food;
    cout<<&food<<endl;//output the variable address
    cout<<"Food is : "<<food<<endl<<"Refrence value is :"<<meal;
    return 0;
}