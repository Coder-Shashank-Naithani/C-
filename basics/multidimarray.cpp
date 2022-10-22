#include<iostream>
using namespace std;

int main()
{
    /*
    * Declaring syntax
    * datatype variablename[x][y]
    * x = no of element in the main array
    * y = no of elements in the sub-array
    * */

   string student[2][2] = {
    {"shashank","Naithani"},
    {"Rahul","Negi"}
   };
//    cout<< sizeof(student)/sizeof(string);
//    cout<< student[0][0]<<"\t";
//     cout<< student[0][1];

    int numbers[3][3][4] = 
    {
        { 
            {5,3,8,7},
            {1,2,3,4},
            {8,9,10,11} 
        },
        {
            {12,13,14,15},
            {16,17,18,19},
            {20,21,22,23}
        },
        {
            {121,131,141,151},
            {161,171,181,119},
            {210,211,212,213}
        }
    };
    int i,j,k;
    // int arraylength = sizeof(numbers)/sizeof(int);
    // cout<<arraylength;
    for(i=0;i<3;i++){
            for(j=0;j<3;j++){
             for(k=0;k<4;k++){
                cout<<numbers[i][j][k];
                }
                cout<<endl;
            }
        }
   return 0;
}