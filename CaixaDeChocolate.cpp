/*Exercicio 03 - Estruturas de dados heterogeneas
Uma fabrica de chocolates precisa acelerar o processo de producao de suas caixas de chocolates. Ela tem N tipos de caixas, cada um com chocolates diferentes. Ela tambem tem M tipos de chocolates diferentes.
? Leia um vetor de M chocolates, sendo que cada chocolate tem um nome (maximo de 20 letras) e um preco.
? Leia um vetor de N tipos de caixas, cada uma contendo seu preco (calculado Posteriormente), uma quantidade Q e um vetor de Q itens. Cada item tem o tipo de chocolate (identificado pela posicao dele no vetor criado anteriormente) e sua quantidade.
? Calcule o preco de cada tipo de caixa. Mostre na tela os chocolates que cada tipo de caixa tem, bem como suas quantidades, e seu preco total. Exemplo na pagina seguinte.
*/

#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;

char nomeChocolateUm[6]="Lancy";
char nomeChocolateDois[12]="Ouro Branco";
char nomeChocolateTres[8]="Kit Kat";
float precoChocolatesUm=1, precoChocolatesDois=2, precoChocolatesTres=1.50;
int quantidadeCaixa;
int x,conta,valorTotal;

void menu(){
	cout<<"\n tipos de chocolates";
cout<<"\n\n";
cout<<"\n 0-"<<nomeChocolateUm<<" R$: "<<precoChocolatesUm;
cout<<"\n 1-"<<nomeChocolateDois<<" R$: "<<precoChocolatesDois;
cout<<"\n 2- "<<nomeChocolateTres<<" R$: "<<precoChocolatesTres;

}
void chocolateUm(){
	cout<<"\n quantos Lancy se deseja comprar? ";
		cin>>conta;
		valorTotal= valorTotal+(conta*precoChocolatesUm);
	
		cout<<"\n quantos Ouro Branco se deseja comprar? ";
		cin>>conta;
		valorTotal= valorTotal+(conta*precoChocolatesDois);
			cout<<"\n quantos Kit Kat se deseja comprar? ";
		cin>>conta;
		valorTotal= valorTotal+(conta*precoChocolatesTres);
		
}

void chocolateDois(){
	cout<<"\n caixa um\n";
	cout<<"\n quantos Lancy se deseja comprar? ";
		cin>>conta;
		valorTotal= valorTotal+(conta*precoChocolatesUm);
	
		cout<<"\n quantos Ouro Branco se deseja comprar? ";
		cin>>conta;
		valorTotal= valorTotal+(conta*precoChocolatesDois);
			cout<<"\n quantos Kit Kat se deseja comprar? ";
		cin>>conta;
		valorTotal= valorTotal+(conta*precoChocolatesTres);
		
		cout<< "\n o valor da caixa 1 deu: "<<valorTotal;
	
		cout<<"\n\n caixa dois\n";
		
		cout<<"\n\n quantos Lancy se deseja comprar? ";
		cin>>conta;
		valorTotal= valorTotal+(conta*precoChocolatesUm);
	
		cout<<"\n quantos Ouro Branco se deseja comprar? ";
		cin>>conta;
		valorTotal= valorTotal+(conta*precoChocolatesDois);
			cout<<"\n quantos Kit Kat se deseja comprar? ";
		cin>>conta;
		valorTotal= valorTotal+(conta*precoChocolatesTres);
		
}


main(){  

menu();
cout<<"\n digite a quantidade de caixas que se deseja comprar. 1 ou 2? ";
cin>>quantidadeCaixa;


if (quantidadeCaixa==1){
	
	
	menu();
	chocolateUm();
cout<<"\n o valor total da compra deu: "<<valorTotal;
}
if (quantidadeCaixa==2){
		menu();
	chocolateDois();

       



cout<<"\n o valor total da compra deu: "<<valorTotal;
}



}
