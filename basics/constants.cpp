#include <iostream>
int main(){
    double pie = 3.14;
    pie = 3;

    const double pie1 = 3.14;
    // pie1 = 34;
    //unable to assign or change value, comment because it will show error not the value.
    std::cout<< pie;
    std::cout<<pie1;
}