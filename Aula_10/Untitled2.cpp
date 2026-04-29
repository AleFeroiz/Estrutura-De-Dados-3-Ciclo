#include <iostream>
#include <stack>
using namespace std;

void exibirPilha(stack<char> s)
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
	string expressao = "();";
	stack<char> pilha;
	for (int i =0; i < expressao.length(); i++)
	{
		char caracter = expressao[i];
		if(caracter == '(' || caracter == ')')
		{
			pilha.push(caracter);
		}
		else if(caracter == ';')
		{
			if (pilha.empty() || pilha.top() != caracter)
			{
				exibirPilha(pilha);
				cout << "FIM" << endl;
				return 0;
			}
			pilha.pop();
		}
	}
	
	if(pilha.empty())
	{
		cout << "pilha vazia" << endl;
	}
	return 0;
}
