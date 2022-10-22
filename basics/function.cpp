#include<iostream>
using namespace std;

void greeting(string name); //declaration

int main (){
    //user code
    greeting("Developer Shank");// function call
    return 0;
}

void greeting(string name) //defination
{
    cout<<"Hello & welcome "<< name;
}
