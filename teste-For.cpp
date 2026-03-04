#include <iostream>
using namespace std;

int main()
{
	/*
	for (int i = 5; i >= 0; --i)
	{
		cout << i << " ";
	}
	
	
	int a[5];
	
	for (int i = 0; i < 5; i++)
	{
		cout << "informe valor ";
		cin >> a[i];	
	}	
	
	cout << "valores";
	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << " ";	
	}
	*/
	
	
	
	//teste ordenado
	int oi[10];
	
	for (int i = 0; i < 10; i++)
	{
		cout << "informe valor ";
		cin >> oi[i];	
	}
	
	for (int ord = 0; ord < 10; ord++)
	{
		int menor = oi[ord];
		for (int i = ord; i < 10; i++)
		{
			if(oi[i] < menor)
			{
				menor = oi[i];
			}
		}
		oi[ord] = menor;
	}
	
	cout << "ordenado";
	for(int i = 0; i < 10; i++){
		cout << oi[i] << " ";
	}
}
