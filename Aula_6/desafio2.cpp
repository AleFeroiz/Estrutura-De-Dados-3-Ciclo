#include <iostream>

using namespace std;

float Sum(float values[])
{
	float sum = 0;
	for(int i = 0; i < 5; i++)
	{
		sum += values[i];
	}
	return sum;
}


int main()
{
	float value[5];
	for(int i = 0; i < 5; i++)
	{
		cout << "digite um valor";
		cin >> value[i];
	}
	
	float sum = Sum(value);
	cout << "soma total e : " << sum;

	
}
