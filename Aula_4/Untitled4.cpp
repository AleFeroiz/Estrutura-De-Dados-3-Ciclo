#include <iostream>
using namespace std;

int main()
{
	float sum = 0;
	float media =0;
	int input;
	
	for(int i = 0; i <5;i++)
	{
		cout << "digite um valor";
		cin >> input;
		sum += input;
	}
	media = sum /5;
	cout << "media " << media << " soma total " << sum;


}



