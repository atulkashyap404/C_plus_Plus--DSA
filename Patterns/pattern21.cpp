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
        //when we want to print space with this pattern then we use space formula and code;
        int space=row-1;
        while (space){
        cout<<" ";
        space=space-1;
        }
     //when we want print only pattern then use below code with out space code which is above;
        int star = n- row + 1;
        
        while (star)
        {
            cout<<"*";
            star = star -1;
        }
        cout<<endl;
        row++;
    }
    
}