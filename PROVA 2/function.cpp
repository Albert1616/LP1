#include <string>
#include <iostream>
using namespace std;

class Empregado{
    private:
        string nome;
        string endereco;
    public:
        virtual double CalculaSalario() = 0;
};

class Chefe : public Empregado{
    private:
        double SalarioMensal;
    public:
        Chefe(double sm){
            this->SalarioMensal = sm;
        };
        double CalculaSalario(){
            return this->SalarioMensal;
        };
        void imprimeChefe(){
            cout << this->SalarioMensal << " " << this->CalculaSalario() << endl;
        };
};

class Comissario : public Empregado{
    private:
        double SalarioBase;
        double Comissão;
        int quantidade;
    public:
        Comissario(double sb, double c, int qtd){
            this->SalarioBase = sb;
            this->Comissão = c;
            this->quantidade = qtd;
        };
        double CalculaSalario(){
            return (this->SalarioBase + (this->Comissão*this->quantidade));
        };
        void imprimeComissario(){
            cout << this->SalarioBase << " " << this->Comissão << " " 
            << this->quantidade << " " << this->CalculaSalario() << endl;
        };
};

template <typename T>//Aqui é ultilizado o polimorfismo paramétrico.
void ordenaPorSalario(T d[], int N){ 
 int i,j,indMenor;
 T aux; 
 for(i=0; i<N-1; i++){ 
 	indMenor=i; 
	for(j=i+1; j<N; j++){ 
		if(d[j]->CalculaSalario() <d[indMenor]->CalculaSalario()){
			indMenor=j;
		} 
	}
	aux=d[i]; 
	d[i]=d[indMenor]; 
	d[indMenor]=aux; 
   }
}
