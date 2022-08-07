#include<iostream>
using namespace std;

int main()
{

    int n;
    int i=1;
    cout<<"Enter the limit number"<<endl;
    cin>>n;
    int count = 1;
    while (i<=n)
    {
        int j = 1;

        while (j<=n)
        {
            
            cout<<count<<" ";
            count = count + 1;
            j++;
        }
        cout<<endl;
        i++;
    }
    
}