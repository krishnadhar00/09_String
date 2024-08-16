#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str = "Raghav";
    // one way to solve this is given below
    // int n = str.length();
    // int i=0;
    // int j=n/2-1;
    // while(i<j)
    // {
    //     char temp = str[i];
    //     str[i]=str[j];
    //     str[j]=temp;
    //     i++;
    //     j--;
    // }
    // cout<<str<<endl;

    // another way is by using builtin function.
    reverse(str.begin(),str.begin()+3); // by using + number we can easily reverse the string upto which we want to reverse.
    cout<<str<<endl;
}