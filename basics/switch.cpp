#include <iostream>
using namespace std;
int main()
{
    int day = 7;
    // string weekend = (day=="Sunday") ? "Hurray You have Weekend\n Enjoy Today." : "Go to work and earn some money.";
    switch (day) {
        case 1:
            cout<< "Hurray You have Weekend\n Enjoy Today.";
            break;
        default:
            cout<< "Go to your Job";
            break;
    }
    // cout<<weekend;
    return 0;
}