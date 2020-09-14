/*5. Faça um programa que cadastre 15 números, não permitindo números repetidos. Ordene-os e, em seguida,
 verifique se um número digitado pelo usuário está no vetor. Caso encontre, verifique se está em uma posição par ou ímpar do vetor: 

a) usando busca sequência
*/
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include<string.h>

void menu();
using namespace std;
int numero[15],numeroDigitado,cont=1,op,chave=0;

void cadastra(){
system("cls");
for(int j=0;j<15;j++){

	do{
		inicio:;
		cout<<"\n digite um numero nao repetido: ";
		cin>>numeroDigitado;
		for (int i=0;i<15;i++){
			if(numeroDigitado!=numero[i]){
				cont++;
			}
		
		if(numeroDigitado==numero[i]){
			cout<<"\n numero repetido!";
			goto inicio;
		}}
	}while(cont==15);
	numero[j]=numeroDigitado;
}
menu();
}
//////////////////////////////////////////////////////////////////////
void verificar(){
system("cls");
	chave=0;
	cout<<"\n o vetor esta printado abaixo";
	for (int i=0;i<15;i++){
		cout<<"\n"<<numero[i];
	}
	
	cout<<"\n digite um numero para que seja verificado se ele esta no vetor: ";
	cin>>numeroDigitado;
	for (int i=0;i<15;i++){
		
		if(numeroDigitado==numero[i]){
			if(i%2==0){
				cout<<"\n o numero "<<numero[i]<<" se encontra no vetor e esta na posicao "<<i<<" par";
				chave=1;
				}
			if(i%2!=0){
				cout<<"\n o numero "<<numero[i]<<" se encontra no vetor e esta na posicao "<<i<<" impar";
				chave=1;
				}
		}
	}
				if(chave==0){
			cout<<"\n numero nao encontrado no vetor";
			}
		
menu();
}
/////////////////////////////////////////////////////////////////////////////
void binaria(){
	system("cls");
	chave=0;
	cout<<"\n o vetor esta printado abaixo";
	
	for (int i=0;i<15;i++){
	cout<<"\n "<<numero[i];
	}
	cout<<"\n digite um numero para que seja verificado se ele esta no vetor: ";
	cin>>numeroDigitado;
	
	for (int i=6;i>=0;i--){
		
		if(numeroDigitado==numero[i]){
			if(i%2==0){
				cout<<"\n o numero "<<numero[i]<<" se encontra no vetor e esta na posicao "<<i<<" par";
				chave=1;
					
				}
			if(i%2!=0){
				cout<<"\n o numero "<<numero[i]<<" se encontra no vetor e esta na posicao "<<i<<" impar";
				chave=1;
						
			}
		}
	}


	
	for (int i=6;i<15;i++){
		if(chave==0){
			
			if(numeroDigitado==numero[i]){
				if(i%2==0){
					cout<<"\n o numero "<<numero[i]<<" se encontra no vetor e esta na posicao "<<i<<" par";
					chave=1;
					}
					
				if(i%2!=0){
						cout<<"\n o numero "<<numero[i]<<" se encontra no vetor e esta na posicao "<<i<<" impar";
						chave=1;
						}
			}
		}
	}
				
				
	if(chave==0){
		cout<<"\n numero nao encontrado no vetor";
		}
		
menu();
}



void menu(){
	cout<<"\n menu";
	cout<<"\n 1- cadastrar 15 numeros";
	cout<<"\n 2- verificar numero de maneira sequencial";
	cout<<"\n 3- verificar numero de maneira binaria ";
	cout<<"\n 4- sair";
	cout<<"\n";
	cin>>op;
	switch(op){
		case 1:{cadastra();
			break;
		}
		case 2:{verificar();
			break;
		}
		case 3:{ binaria();
			break;
		}
		case 4:{exit(0);
			break;
		}
		
	}
}
main(){
	menu();
}
