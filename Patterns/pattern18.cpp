#include<iostream>
using namespace std;
int main()
{

    int n;
    int row =1;
    cout<<"Enter the limit number"<<endl;
    cin>>n;
    while (row<=n)
    {
        int col = 1;
        char start = 'A' + n - row;
        while (col<=row)
        {
            
            cout<<start<<" ";
            start = start + 1;
            col++;
        }
        cout<<endl;
        row++;
    }
    
}