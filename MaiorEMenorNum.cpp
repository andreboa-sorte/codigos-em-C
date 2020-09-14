/*2. Faça um programa que cadastra 10 números, ordene-os e em seguida encontre e mostre: 

a) o menor número e quantas vezes ele aparece no vetor; 
b) o maior número e quantas vezes ele aparece no vetor.
*/
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include<string.h>

void menu();
using namespace std;
int numero[10];
int maior,menor,contador,contadorM,op;

void cadastrar(){
	for (int i=0;i<10;i++){
		cout<<"\n Digite um numero["<<i+1<<"] :";
		cin>>numero[i];
		//	system("cls");
	}
	menu();
}

void numeroMaior(){
	for (int i=0;i<10;i++){
	
	if(numero[i]>maior){
		maior=numero[i];
		
	  }
	}
		for (int i=0;i<10;i++){
		if(numero[i]==maior){
			contador++;
		}
		}
		if(contador==0){
		contador=1;
	}
		cout<<"\nO maior numero e: "<<maior<<" e apareceu: "<<contador<<" vezes";
	menu();
}

void numeroMenor(){
		menor=9999999;
		for (int i=0;i<10;i++){
	if(numero[i]<menor){
		menor=numero[i];
		
    	}
	}
		for (int i=0;i<10;i++){
		if (numero[i]==menor){
			contadorM++;
		}
		
		}
		
	cout<<"\nO menor numero e: "<<menor<<" e apareceu: "<<contadorM<<" vezes";
	menu();
}
void maiorEMenor(){
contadorM=0;
contador=0;
		menor=9999999;
		for (int i=0;i<10;i++){
	if(numero[i]<menor){
		menor=numero[i];
		
    	}
    	if(numero[i]>maior){
		maior=numero[i];
		
	  }
	}
		for (int i=0;i<10;i++){
		if (numero[i]==menor){
			contadorM++;
		}}
		for (int i=0;i<10;i++){
		if(numero[i]==maior){
			contador++;}
			}
	

	cout<<"\nO menor numero e: "<<menor<<" e apareceu: "<<contadorM<<" vezes";

	cout<<"\nO maior numero e: "<<maior<<" e apareceu: "<<contador<<" vezes";
	menu();
}

void menu(){
	cout<<"\n menu";
	cout<<"\n 1-cadastrar 10 numeros";
	cout<<"\n 2-mostrar o maior numero";
	cout<<"\n 3-mostrar o menor numero";
	cout<<"\n 4-mostrar o maior e o menor numero";
	cout<<"\n";
	cin>>op;
	switch(op){
		case 1:{
			cadastrar();
			break;
		}
		case 2:{
			numeroMaior();
			break;
		}
		case 3:{
			numeroMenor();
			break;
		}
		case 4:{
			maiorEMenor();
			break;
		}
	}
}
main(){
	menu();
}

