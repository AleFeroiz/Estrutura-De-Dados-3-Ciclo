#include <iostream>
#include <list>
#include <string>

using namespace std;

int main()
{
	list<string> numList;
	
	for(int i = 0; i < 5; i++)
	{
		cout << "digite TEXTO";
		string input = "";
		cin >> input;
		numList.push_front(input);
	}


	for(auto element: numList)
	{

		cout << element << " ";
	}
	
	cout << endl;
	return 0;
}
