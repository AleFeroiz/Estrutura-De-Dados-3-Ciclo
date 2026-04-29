#include <iostream>
#include <stack>
using namespace std;

void exibirPilha(stack<int> s)
{
	cout << "Conteudo da pilha topo -> base" << endl;
	while(!s.empty())
	{
		cout << "|" << s.top() << "|" << endl;
		s.pop();
	}		
}

int main()
{
	stack<int> pilha;
	pilha.push(1);
	cout << pilha.top() << endl;
	pilha.push(3);
	cout << pilha.top() << endl;
	pilha.push(5);
	cout << pilha.top() << endl;
	pilha.pop();
	
	cout<< pilha.top() << endl;
	
	exibirPilha(pilha);
	return 0;
}
