#include <iostream>
using namespace std;
int main()
{
    string day = "Monday";
    string weekend = (day=="Sunday") ? "Hurray You have Weekend\n Enjoy Today." : "Go to work and earn some money.";
    cout<<weekend;
    return 0;
}