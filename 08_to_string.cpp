#include<iostream>
using namespace std;
int main()
{
    int x = 123456789;
    string str = to_string(x); // converting the integer to string.
    str+="hello";
    cout<<str<<endl;
    cout<<str.length()<<endl;
    string str1="123456";
    int z = stoi(str1);  // converting teh string to integer.using stoi
    cout<<z<<" "<<z+1;
}