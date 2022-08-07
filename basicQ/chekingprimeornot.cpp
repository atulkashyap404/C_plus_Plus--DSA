#include<iostream>
using namespace std;

int main()
{

    int n;
    cout<<"Enter ther number"<<endl;
    cin>>n;
    int i = 2;
    while (i<n)
    {
        if(n%i == 0)
        {
            cout<<"Not prime"<<endl;
        }
        i++;
    }
    
}