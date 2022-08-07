#include<iostream>
using namespace std;

int main()
{
    int a = 1; 
    int b = 2;
    
    if(a-- > 0 || ++b > 2)
    {
        cout<<"Stage 1 - inside if"<<endl;
    }
    else
    {
        cout<<"Stage 2 - inside esle"<<endl; 
    }

    cout<<a<<" "<<b<<endl;

   
    
}