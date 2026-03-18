#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<float> numList;
	
	for(int i = 0; i < 5; i++)
	{
		cout << "digite valor";
		float input = 0;
		cin >> input;
		numList.push_front(input);
	}

	float sum = 0;
	float mult = 0;	
	for(auto element: numList)
	{
		sum += element;
		if(mult == 0)
		{
			mult = element;
		}
		else
		{
			mult *= element;
		}
		cout << element << " ";
	}
	
	cout << endl;
	cout << "SOMA: " << sum << " 
	MULT: " << mult;
	return 0;
}
