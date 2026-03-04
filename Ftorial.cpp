#include <iostream>
using namespace std;
int main()
{
	int num = 0;
	cout << "digite";
	cin >> num;
	
	int total = 0;
	for (int n = 1; n <= num; n++)
	{
		total += n;
	}
	
	cout << total;
	
}
