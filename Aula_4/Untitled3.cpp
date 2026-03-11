#include <iostream>
using namespace std;

int main()
{
	
	while(true)
	{
		int a[5];
		for(int i = 0; i < 5; i++)
		{
			cout << "digite um valor";
			cin >> a[i];
		}
		
		for(int main = 0; main < 5; main++)
		{
			int value = a[0];
			int index = a[0];
			for(int obs = main; obs < 5; obs++)
			{
				if(value < a[obs])
				{
					index = obs;
					value = a[obs];
				}		
			}
		}
		/*
		for(int main = 0; main < 5; main++)
		{
			for(int obs = main; obs < 5; obs++)
			{
				if(main < obs)
				{
					int aux = a[main];
					a[main] = a[obs];
					a[obs] = aux;
				}		
			}
		}
		*/
		
		cout << "ordenado";
		for(int i = 0; i < 5; i++)
		{
			cout << a[i] << "; ";
		}
			cout << "deseja parar?";
		int rspt = 0;
		cin >> rspt;
		if(rspt == 1) break;
	}
	
}
