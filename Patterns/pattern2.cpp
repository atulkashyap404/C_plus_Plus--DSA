#include<iostream>
using namespace std;

int main()
{

    int n;
    int i=1;
    cout<<"Enter the limit number"<<endl;
    cin>>n;
    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
    
}