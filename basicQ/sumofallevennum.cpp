#include<iostream>
using namespace std;

int main()
{
    int n,sum = 0;
    int i = 1;
    cout<<"Enter the number"<<endl;
    cin>>n;
    while (i<=n)
    {
        if(n%i == 0)
        {
            sum = sum+i;
        }
        i++;
        

    }
   cout<<"Sum of all even num is : "<<sum<<endl;
    
}