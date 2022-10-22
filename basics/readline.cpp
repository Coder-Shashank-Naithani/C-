#include<iostream>
using namespace std;
int main()
{   string sentence;
    string greet = "Hello Enter Your Sentence!\n";
    cout<<greet;
    getline(cin,sentence);
    cout<<":::::::You Entered:::::::\n";
    cout<<sentence;
    return 0;
}