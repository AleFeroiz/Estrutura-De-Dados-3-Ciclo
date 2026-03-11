#include <iostream>
using namespace std;

int main()
{
	cout << "digite um valor";
	float valor = 0;
	cin >> valor;
	if(valor < 0) valor = valor *-1;
	int divisor = 10;
	int algarismos = 1;
	while(true)
	{
		float res = valor / divisor;
		if(res >= 1)
		{
			algarismos++;
			divisor = divisor * 10;
		}
		else
		{
			break;
		}
	}
	
	cout << algarismos;
}



