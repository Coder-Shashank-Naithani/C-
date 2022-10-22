 /*
    int - stores integers (whole numbers), without decimals, such as 123 or -123
    double - stores floating point numbers, with decimals, such as 19.99 or -19.99
    char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
    string - stores text, such as "Hello World". String values are surrounded by double quotes
    bool - stores values with two states: true or false 

    ** Declaring (Creating) Variables **
    type variableName = value;

   */
#include <iostream>
using namespace std;
int main()
{ 
    //declare variables
    string fullName = "Shashank Naithani";
    int age = 31;
    bool occupation = false;
    char favAplhabet = '$';
    double averageMonthlySpent = 1499.9;
    //print variable
    cout<< "Your Name is:"
        <<fullName<<". \n And You are "
        <<age<<" old. \n Currently you have "
        <<occupation<<" job. \n Favourite Alphabet is "
        <<favAplhabet<<".\n And your monthly Average spent is "
        <<averageMonthlySpent
        <<".";
    return 0;
}
