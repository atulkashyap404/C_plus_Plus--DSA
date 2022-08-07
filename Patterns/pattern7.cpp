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
        while (col<=row)
        {
            //int val= n-j+1;
            cout<<row;
            col++;
        }
        cout<<endl;
        row++;
    }
    
}