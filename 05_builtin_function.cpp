#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string str="Krishnadhar";
    cout<<str<<endl;
    str.push_back('k'); // adding the character at the end.  ut we have to write the character.
    str.push_back('r');
    cout<<str<<endl;
    str.pop_back();   // deleting the character from the end. we don't have to pass the characetr from delting the element from teh end.it will automatically delete the character from the last.
    cout<<str<<endl;

    // using append function we can append or add the whole string at the last. 
    str.append(" pandey");
    cout<<str<<endl;
    // using clear function we can make the string empty.
    str.clear();
    cout<<str<<" "<<str.length()<<endl;
    str= str+"hello"; // other way to add the string into the existing string.alternate way to use so that we don't want to use the append function.
    cout<<str<<endl;
    // builtin function to reverse the string.
    reverse(str.begin(),str.end());
    cout<<str<<endl;

}