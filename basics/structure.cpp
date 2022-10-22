#include<iostream>
#include <typeinfo>
using namespace std;

int main(){
    
    struct{//structure decleration
        string name; // member variable
        int age;// member variable
        string occupation;// member variable
    } students_info;//strucutre variable

    students_info.name = "Shashank Naithani";
    students_info.age = 32;
    students_info.occupation = "Unemplyed";
   decltype( students_info.name ) f;
   cout<<typeid(f).name()<<endl;
cout << typeid(students_info.age).name() << endl;
    cout<<students_info.name<<endl<<students_info.age<<endl<<students_info.occupation;
    return 0;
}