#include <iostream>
 #include <iomanip>

using namespace std;
 
int main() 
{
    double salary;
    double tax = 0.00;;
    cin>>salary;
    cout<<std::fixed<<std::setprecision(2);
    if(salary > 4500.00)
    {
        tax += (salary - 4500.00)*0.28;
        salary = 4500.00;
    }
    if(salary > 3000.00)
    {
        tax += (salary - 3000.00)*0.18;
        salary = 3000.00;
    }
    if(salary>=2000.00)
    {
        tax += (salary - 2000) * 0.08;
    }
    if(salary <= 2000.00)
        cout<<"Isento"<<endl;
    else
        cout<<"R$ "<<tax<<endl;
    return 0;
}