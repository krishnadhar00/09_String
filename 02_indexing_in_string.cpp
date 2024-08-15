#include<iostream>
using namespace std;
int main()
{
    string str = "Krishnadhar pandey";
    cout<<str<<endl;
    str[0]='M';      // update the string
    cout<<str<<endl;
    cout<<str[5]<<endl;  // accesing the character from the string.
    cout<<str.length()<<endl; // giving teh length of the srring. size is 18 but actual size is 19 bcoz at the me dit takes the null character at the last. os actual size is 19 but it gives the output s 18.
    cout<<str.size(); // it also giving the same output as length. alternate way to use this.
}