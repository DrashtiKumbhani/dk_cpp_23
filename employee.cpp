#include<iostream>
using namespace std;
class Employee
{
    private:
        int id,h,hour,hd,day,salary,s;
        char name[10],add[30],des[10][10]={"Manager","HR","clerk","PA"};
        public:
        void data();
        void showData();
};
void Employee::data()
{
        cout<<"\n Enter Employee Id : ";
        cin>>id;
        cout<<"\n Enter Employee Name : ";
        cin>>name;
        cout<<"\n Enter Employee Address : ";
        cin>>add;            
}
void Employee::showData()
{ 
    cout<<"\n Employee Id : "<<id;
    cout<<"\n Employee Name : "<<name;
    cout<<"\n Employee Address : "<<add; 
    cout<<"\n Employee Designation : "<<des[0];
}
int main()
{
    int n=0,hour,salary,s;
    Employee e1;
    e1.data();    
    cout<<"\n Enter working Hour : ";
    cin>>hour;
    if(hour>=50)
    {
        n = hour - 50;
        hour=50;  
    }
    cout<<"\n Enter case : ";
    cin>>s;
    switch(s)
    {    
        case 0:
            salary = hour * 200;
            salary += n*300;
            break;
        case 1:
            salary = hour * 175;
            salary += n*200;
            break;
        case 2:
            salary = hour * 150;
            salary += n*175;
            break;
        case 3:
            salary = hour * 125;
            salary -= n*100;
            break;
    }
    cout<<"\n ----------------------------------";
    cout<<"\n\t Employees Details ";
    cout<<"\n ----------------------------------";
    e1.showData();  
    cout<<"\n Employee salary : "<<salary; 
    cout<<"\n ----------------------------------";
}



// #include<iostream>
// using namespace std;
// int id,h,hour,hd,day,salary,s;
// class Employee
// {
//     private:
//         int id,h,hour,hd,day;//,sal[10]={72000,65000,15000,35000};
//         char name[10],add[30],des[10][10]={"Manager","HR","clerk","PA"};    
//         public:
//         void getData()
//         {
//             cout<<"\n Enter Employee Id : ";
//             cin>>id;
//             cout<<"\n Enter Employee Name : ";
//             cin>>name;
//             cout<<"\n Enter Employee Address : ";
//             cin>>add;            
//         }
//         void showData()
//         {
//             // cout<<"\n Employee Id : "<<id;
//             // cout<<"\n Employee Name : "<<name;
//             // cout<<"\n Employee Address : "<<add;
//             // cout<<"\n Employee Designation : "<<des[0];
//             //cout<<"\n Employee Working Hour : "<<h;           
//             //cout<<"\n Employee Salary : "<<sal[0];         
//         }
// };
// int main()
// {
//     int n=0;
//     Employee e1;
//     e1.getData();
//     //e1.cal();
//     e1.showData();
//      cout<<"\n Enter working Hour : ";
//     cin>>hour;
//     if(hour>=50)
//     {
//         n = hour - 50;
//         hour=50;              
//     }
//     cout<<"\n Enter case : ";
//              cin>>s;
//     switch(s)
//     {        
//         case 0:
//             salary = hour * 200;
//             salary += n*300;
//             break;
//         case 1:
//             salary = hour * 175;
//             salary += n*200;
//             break;
//         case 2:
//             salary = hour * 150;
//             salary += n*175;
//             break;
//         case 3:
//             salary = hour * 125;
//             salary -= n*100;
//             break;
//     }
//     cout<<"\nsalary "<<salary;  
// }

