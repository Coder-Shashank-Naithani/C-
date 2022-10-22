# include <iostream>
#include <string>

class Cars
{
    public:
    std::string name;
    std::string model;
    std::string color;
    int price; 
};


int main(){

    Cars volvo;
    volvo.name = "Volvo";
    volvo.model = "Bm2";
    volvo.color = "White";
    volvo.price = 5000;


    std::cout<<volvo.name
             << "\n"
             <<volvo.model
             << "\n"
             <<volvo.color
             << "\n"
             <<volvo.price
             << "\n";   

    Cars maruti;
    maruti.name = "maruti";
    maruti.model = "800";
    maruti.color = "White";
    maruti.price = 8000;


    std::cout<<maruti.name
             << "\n"
             <<maruti.model
             << "\n"
             <<maruti.color
             << "\n"
             <<maruti.price
             << "\n";   
}