#include <iostream>

int main()
{
	int e = 0;
	int o = 0;
	int p = 0;
	int n = 0;
	for(int i = 0; i < 5; i ++)
	{
		int num;
		std::cin>>num;
		if(num%2 == 0)
			e ++;
		else
			o ++;
		if(num > 0)
			p ++;
		else if(num < 0)
			n ++;
	}
	std::cout<<e<<" valor(es) par(es)"<<std::endl;
	std::cout<<o<<" valor(es) impar(es)"<<std::endl;
	std::cout<<p<<" valor(es) positivo(s)"<<std::endl;
	std::cout<<n<<" valor(es) negativo(s)"<<std::endl;
	return 0;
}
