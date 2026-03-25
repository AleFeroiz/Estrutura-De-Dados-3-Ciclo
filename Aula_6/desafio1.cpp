#include <iostream>

using namespace std;

bool IsEver(int value)
{
	return value % 2 == 0;
}


int main()
{
	int value = 0;
	cout << "digite um valor";
	cin >> value;
	
	if(IsEver(value))
	{
		cout << value << " e um numero par." << endl;
	}
	else
	{
		cout << value << " e um numero par." << endl;
	}
	
}
