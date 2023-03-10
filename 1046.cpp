using namespace std;
#include <iostream>
#include <string>

int gameDurationCalculator(int,int);

int main()
{
    int start, end;
    cin>>start>>end;
    cout<<"O JOGO DUROU " + std::to_string(gameDurationCalculator(start, end)) + " HORA(S)"<<endl;

}
int gameDurationCalculator(int start, int end)
{
    int duration = 0;
    do
    {
        duration ++;
        start ++;
        if(start == 24)
            start = 0;
    } while (start != end);
    return duration;
    
}
