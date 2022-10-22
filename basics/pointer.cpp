/*
    Pointer is a variable use to store address location of a variable, where the data is stored.
*/
#include<iostream>
using namespace std;
int main (){
    string name = "Shashank";
    string* ptr = &name; // pointer variable is storing name string address
    cout<< name<< endl;
    cout<< ptr<< endl; // print pointer variable address stored
    //derefence
    cout<< *ptr<< endl; // with astrik * operator we can get the pointer variable data.
    *ptr = "Shashank Naithani";
    cout <<  *ptr;
}