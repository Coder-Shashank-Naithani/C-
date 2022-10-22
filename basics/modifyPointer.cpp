/*
    Pointer is a variable use to store address location of a variable, where the data is stored.
*/
#include<iostream>
using namespace std;
int main ()
{
    string food = "pizza";
    string* ptr = &food;

    cout<<&food<<endl;
    cout<< ptr<<endl;
    *ptr = "Burger";
    cout<<food<<endl;
    return 0;
}