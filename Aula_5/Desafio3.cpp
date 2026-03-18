#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> numListA;
	list<int> numListB;
	list<int> numListC;
	
	for(int i = 0; i < 5; i++)
	{
		cout << "digite valor A";
		int input = 0;
		cin >> input;
		numListA.push_front(input);
		numListC.push_front(input);
		
		cout << "digite valor B";
		int inputB = 0;
		cin >> inputB;
		numListB.push_front(inputB);
		numListC.push_front(inputB);		
	}


	numListC.sort();

	for(auto element: numListC)
	{

		cout << element << " ";
	}
	
	cout << endl;
	return 0;
}
