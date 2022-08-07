#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter the charector"<<endl;
    cin>>ch;

    if (int(ch)>=97 && int(ch)<=122)
    {
        cout<<"This is Lower case"<<endl;
    }
    else if (int(ch)>=65 && int(ch)<=90)
    {
        cout<<"This is Upper case"<<endl;
    }
    else if (int(ch)>=48 && int(ch)<=57)
    {
        cout<<"This is Numeric"<<endl;
    }
    else
    {
        cout<<"Invalide input!...Please enter right charactor";
    }
    
    
}