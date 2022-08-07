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
        //int val = row;
        while (col<=row)
        {
            cout<<row+col+1<<" ";
         //  val = val+1;
            col++;
        }
        cout<<endl;
        row++;
    }
    
}