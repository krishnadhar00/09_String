#include<iostream>
using namespace std;
int main()
{
    // string str = "heloo my name is krishandhar pandey";
    // cout<<str<<endl;  // show the whole line whatever is written in str.
    // string str1;
    // cin>>str1;          // input is pandey ji is best
    // cout<<str1<<" ";  // it will show the output in only word whenever there is space it get break.it will only display the pandey and rest part of the string is not visiblke because it doesnot take the multiple input.or more than one word. so to resemble this issue we use getline method.
    string str2;
    getline(cin,str2);
    cout<<str2<<endl;
}