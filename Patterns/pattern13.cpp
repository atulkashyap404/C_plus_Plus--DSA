#include<iostream>
using namespace std;
int main()
{

    int n;
    int row =1;
    cout<<"Enter the limit number"<<endl;
    cin>>n;
    char ch = 'A';
    while (row<=n)
    {
        int col = 1;
        
        while (col<=n)
        {
            
            cout<<ch<<" ";
            ch = ch + 1;
            col++;
        }
        cout<<endl;
        row++;
    }
    
}