#include<iostream>
using namespace std;
int main()
{
    char i;
    for(i=2;i<=25;i+=2)
    {
        if(i%4==0)
        {
            cout<<" "<<(char)(i+63+32);
        }
        else
        {
            cout<<" "<<(char)(i+63);
        }
        cout<<"\n";
    }
}
