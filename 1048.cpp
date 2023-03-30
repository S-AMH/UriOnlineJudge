#include <iostream>
#include <iomanip>
using namespace std;

int IncreasePercentage(double);

int main()
{
    double income;
    cin>>income;
    cout<<std::fixed<<std::setprecision(2);
    cout << "Novo salario: " << income + income * (IncreasePercentage(income) * 0.01) << endl;
    cout << "Reajuste ganho: " << income * (IncreasePercentage(income) * 0.01) << endl;
    cout << "Em percentual: " << IncreasePercentage(income) << " %" <<endl; 
}
int IncreasePercentage(double salary)
{
    if(salary <= 400.00)
        return 15;
    if(salary <= 800.00)
        return 12;
    if(salary <= 1200.00)
        return 10;
    if(salary <= 2000.00)
        return 7;
    return 4;
}