#include <string>
#include <iostream>

using namespace std;

class Pessoa{
private:
	string nome;
	int idade;
	string endereco;
	string profissao;
	
	public:
		//Constructor of class
		Pessoa(string nome, int idade, string endereco, string profissao){
			this->nome = nome;
			this->idade = idade;
			this->endereco = endereco;
			this->profissao = profissao;
		}
		
		// Metodo para definir o nome
		void setNome(string novoNome){
			nome = novoNome;
		}
		string getNome(){
			return nome;
		}
		
		//Metodo para obter idade
		void setIdade(int novaIdade){
			idade = novaIdade;
		}
		
		int getIdade(){
			return idade;
		}
		
		// Metodo para definir o profissão
		void setProfissao(string novoProfissao){
			profissao = novoProfissao;
		}
		string getProfissao(){
			return profissao;
		}
		
			// Metodo para definir o endereço
		void setEndereco(string novoEndereco){
			endereco = novoEndereco;
		}
		string getEndereco(){
			return endereco;
		}
		
		//
		void mostrarInfo(){
			cout << " " << " " << endl;
			cout << "Nome: " << nome << endl;
			cout << "Idade: " << idade << endl;
			cout << "Endereço: " << endereco << endl;
			cout << "Profissão: " << profissao << endl;
		
		}
		
		
		
		
		
};

class Carro{
private:
	string cor;
	int placa;
	string tipo;
	string marca;
	
	public:
		//Constructor of class
		Carro(string cor, int placa, string tipo, string marca){
			this->cor = cor;
			this->placa = placa;
			this->tipo = tipo;
			this->marca = marca;
		}
		
		// Metodo para definir o nome
		void setCor(string novoCor){
			cor = novoCor;
		}
		string getCor(){
			return cor;
		}
		
		//Metodo para obter idade
		void setPlaca(int novaPlaca){
			placa = novaPlaca;
		}
		
		int getPlaca(){
			return placa;
		}
		
		// Metodo para definir o profissão
		void setMarca(string novoMarca){
			marca = novoMarca;
		}
		string getmarca(){
			return marca;
		}
		
			// Metodo para definir o endereço
		void setTipo(string novoTipo){
			tipo = novoTipo;
		}
		string getTipo(){
			return tipo;
		}
		
		//
		void mostrarInfo(){
			cout << " " << " " << endl;
			cout << "cor: " << cor << endl;
			cout << "placa: " << placa << endl;
			cout << "tipo: " << tipo << endl;
			cout << "marca: " << marca << endl;
		
		}
		
		
		
		
		
};

int main()
{
	Pessoa pessoal("joao", 30, "rua", "engenheiro");
	
	pessoal.mostrarInfo();
	
	pessoal.setNome("receba");
	pessoal.setIdade(2);
	pessoal.setEndereco("toma");
	pessoal.setProfissao("prostituto");
	
	pessoal.mostrarInfo();
	
	Carro caramelo("amarelo", 2, "anda", "labronete");
	caramelo.mostrarInfo();
}
