#include <iostream>

int main()
{
	int counter = 0;
	for(int i = 0 ; i < 5 ; i ++)
	{
		int n;
		std::cin>>n;
		if(n%2 == 0)
			counter ++;
	}
	std::cout<<counter<<" valores pares"<<std::endl;
	return 0;
}
