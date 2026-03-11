#include <iostream>
using namespace std;

int main()
{
	int vet[6];
	for(int i = 0; i < 6; i++)
	{
		cout << "digite valor";
		cin >> vet[i];
	}
	
	int maior = vet[0];
	int menor = vet[0];
	for(int i = 0; i < 6; i++)
	{
		if(vet[i] > maior) maior = vet[i];
		if(vet[i] < menor) menor = vet[i];
	}
	
	cout << "menor valor = " << menor << " maior valor = " <<maior;
	return 0;
}
