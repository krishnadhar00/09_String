// reverse a string using two pointer method. two pointer means using two variables.
#include<iostream>
using namespace std;
int main()
{
    string str = "Krishnadhar";
    cout<<str<<endl;
    int n = str.length();
    int i=0;
    int j=n-1;
    while(i<j)
    {
        int temp = str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
    cout<<str<<endl;
}