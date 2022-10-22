#include <iostream>
#include <string>

class Employee{
    public:
    std::string name;
    std::string Department;
    std::string joiningDate;
    void salary(int sal){
        std::cout<<"Employee "<<name<<" salary is $" << sal;
    }
};

int main(){
    Employee shank;
    shank.name = "Shashank Naithani";
    shank.Department = "SEO";
    shank.joiningDate = "22 sept";
    std::cout<<shank.name <<"\n"  <<shank.Department <<"\n"  <<shank.joiningDate << "\n";
    shank.salary(5000);
    std::cout<<"\n";
    return 0;
}