/*1-Faça um programa que cadastre 5 produtos em uma lista estatica heterogênea. Para cada produto deve ser cadastradas o código,
preço e quantidade. Criar a lista, listar esta, aplicar uma taxa de desconto sugerida pela proprietária em todos os produtos da lista e
 apresentar a lista original e a com taxa (%) de desconto, apresentar para a lista original o produto mais barato, e o produto com menor quantidade, 
 e para a lista com desconto o produto mais cara e o produto com menor quantidade.
*/
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;
struct cpq {
	int cod;
	float preco, quatidade;
}
struct cpq produtos[5];
int desconto[5], Qdesconto;
int index,aux,maiorPreco;
int auxm;
main(){
	for (int i=0;i<5;i++){
cout<<"\n digite o codigo do produto: ";
cin>> produtos[i].cod;
cout<<"\n digite o preco do produto: ";
cin>> produtos[i].preco;
desconto=produtos[i].preco;
cout<<"\n digite a quantidade do produto: ";
cin>> produtos[i].quantidade;}
	system ("cls");
		for (int i=0;i<5;i++){

cout<< "\n codigo do produto: " <<produtos[i].cod;
cout<< "\n preco do produto: " <<produtos[i].preco;
cout<< "\n quantidade do produto: "<< produtos[i].quantidade;}
	
	cout<< "quanto % de desconto que se deseja dar: ";
	cin>>Qdesconto;
		for (int i=0;i<5;i++){
	desconto[i]=desconto[i].Qdesconto/100
		cout<< "\n codigo do produto: "<< produtos[i].cod;
cout<< "\n preco do produto com descoto: " <<desconto[i];
cout<< "\n quantidade do produto: "<< produtos[i].quantidade;
		}
	aux=0;
	for (int i=0;i<5;i++){
	if(produtos[i].quantidade>aux){
		
			aux=produtos[i].quantidade;}}
	
	auxm=aux+1;	
	maiorPreco=auxm;		
	index=0;
	for (int i=0;i<5;i++){
	if(produtos[i].quantidade<auxm){
		index=i;
			auxm=produtos[i].quantidade;
		}}
		aux=produtos[index].cod;
		cout << "\n o com o menor valor (sem desconto) e: " <<aux<<" com o valor de " <<auxm ;
	index=0;
	for (int i=0;i<5;i++){
	if(produtos[i].quantidade<auxm){
		index=i;
			auxm=produtos[i].quantidade;}}
			aux=produtos[index].quantidade;
			cout<<"\n o porduto com a menor quantidade e: "<<aux<< " com "<<auxm<<" quantidades";
				
	index=0;
	for (int i=0;i<5;i++){
	if( desconto[i]<maiorPreco){
		index=i;
			maiorPreco= desconto[i];
		}}
		aux=produtos[index].cod;
		cout << "\n o com o menor valor (com desconto) e: " <<aux<<" com o valor de " <<maiorPreco ;
	
	
}
