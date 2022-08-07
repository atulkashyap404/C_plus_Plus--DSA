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

        int space=row-1;
        while (space){
        cout<<" ";
        space=space-1;
        }

        int col = 1;
        while (col<=(n-row+1))
        { 
            cout<<(col+row-1);
            col++;
        }
        cout<<endl;
        row++;
    }
    
}