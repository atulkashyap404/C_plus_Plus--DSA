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
        
        //Star printing

        int col = 1;
        while (col<=row)
        {
            
            cout<<row;
            col++;
        }
        cout<<endl;
        row++;
    }
    
}