#include <iostream>
#include <iomanip>
int main()
{
    int counter = 0;
    double avg = 0.0;
    for(int i = 0; i < 6; i ++)
    {
        double n;
        std::cin>>n;
        if(n > 0)
        {
            counter ++;
            avg += n;
        }
            
    }
    std::cout<<std::fixed<<std::setprecision(1);
    std::cout<<counter<< " valores positivos"<<std::endl;
    std::cout<<avg/counter<<std::endl;
}