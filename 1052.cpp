#include <iostream>
 #include <string>
using namespace std;
 
int main()
{
    const char* months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    int m;
    cin >> m;
    if(m > 0 && m < 13)
        cout<<months[m-1]<<endl;
    return 0;
}