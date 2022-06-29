#include<iostream>
using namespace std;
class stud
{
    private:
        int m1,m2,m3,p1;
    public:
        void set(int a,int b,int c)
        {
            m1=a;
            m2=b;
            m3=c;
        }
        int sum()
        {
            return m1+m2+m3;
        }
        int p()
        {
            p1=(m1+m2+m3)/3;
            return p1;
            
        }
        int gread()
        {
            if(p()>=90)
            {
                cout<<" A ";
            }
            if(p()<90 && p()>=80)
            {
                cout<<" B ";
            }
            if(p()<80 && p()>=70)
            {
                cout<<" C ";
            }
            if(p()<70 && p()>=60)
            {
                cout<<" D ";
            }
            if(p()<60 && p()>=50)
            {
                cout<<" E ";
            }
            if(p()<=50)
            {
                cout<<" Fail ";
            }
        }
};
int main()
{
    stud s1;
    s1.set(32,12,52);
    cout<<"\n Total : ";
    cout<<s1.sum();
    cout<<"\n Per : ";
    cout<<s1.p();
    cout<<"\n Gread : ";
    s1.gread();
    
}