#include <iostream>
#include <vector>

int mdc(a,b){
	if(a == b){ return a; } 
	else{
		if( a > b ){ return mdc(x-y, y);} 
		else { return mdc(y-x, x); }
	} return result;
}

int inv_mult(){

}

int main(){
	int n_testes = -1;
	std::cout << "\t >>> Insira o número de testes: " << "\n";
	do{
		std::cin >> n_testes;
		if(n_testes <= 0){ 
			std::cout << "\t[ERRO] O número de testes não pode ser nulo ou negativo.\n"; 
		}
	} while (n_testes <= 0); 

	std::cout << "\t>>> Cada teste consistirá na entrada de três inteiros no seguinte formato:\nax ≡ b(mod m)\n\t>>> Insira corretamente.\n";
	for(int i = 0; i < n_testes; ++i){
		int a = 0, b = 0, m = 0;
		std::cout << "\t>>> Insira \"a\":";
		std::cin >> a;
		std::cout << "\n\t>>> Insira \"b\":";
		std::cin >> b;
		std::cout << "\n\t>>> Insira \"m\":";
		std::cin >> m;
		// Chamada da função de mdc para verificar se o mdc dos dois seriam coprimos.
		if(mdc(a, m) == 1){ // se o mdc dos dois são coprimos, achar o inverso multiplicativo dos dois e retornar o valor

		}
	}
}