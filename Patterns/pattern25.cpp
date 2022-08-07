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
        //space printing
        int space = n - row;
        while (space)
        {
            cout<<" ";
            space = space -1;
        }
        
        // this code is for printing the triangel

        int col = 1;
        while (col<=row)
        {
            
            cout<<col;
            col++;
        }

        //pritnting third triangle

        int start = row - 1;
        while (start)
        {
            cout<<start;
            start = start - 1;
        }
        
        cout<<endl;
        row++;
    }
    
}