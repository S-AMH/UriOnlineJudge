using namespace std;
#include <iostream>
#include <string>
#include <tuple>

tuple<int,int> gameDurationCalculatorWithMinutes(int,int, int, int);

int main()
{
    int sh, sm, eh,em; //start hour, start minute, end hour, end minute
    cin>>sh>>sm>>eh>>em;
    tuple<int,int> duration = gameDurationCalculatorWithMinutes(sh,sm,eh,em);
    cout<<"O JOGO DUROU " + std::to_string(get<0>(duration)) + " HORA(S) E " + std::to_string(get<1>(duration)) + " MINUTO(S)"<<endl;

}
tuple<int,int> gameDurationCalculatorWithMinutes(int sh, int sm, int eh, int em)
{
    int dh = 0;
    int dm = 0;
    do
    {
        dm ++;
        sm ++;
        if(sm == 60)
        {
            sh ++;
            sm = 1;
        }

        if(sh == 24)
            sh = 1;
        if(dm == 60)
        {
            dh ++;
            dm = 1;
        }

    } while (sh != eh || sm != em);
    return {dh,dm};
    
}
