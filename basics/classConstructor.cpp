#include <iostream>
#include <string>

class Cars{
    public:
    std::string name;
    std::string model;
    Cars(std::string x, std::string y){
        name = x;
        model = y;
    }
};


int main(){
    Cars vehicle("Volswagen", "X587");
    std::cout<< vehicle.name<<vehicle.model;
    return 0;
}