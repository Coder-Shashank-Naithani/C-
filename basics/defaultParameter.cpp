#include<iostream>
using namespace std;

void geet(string name = "Homie")//default parameter
{
    cout<<"Hello "<< name<<endl;
}

int main (){
    geet();
    geet("shank");
    geet("Yatharth");
    return 0;
}