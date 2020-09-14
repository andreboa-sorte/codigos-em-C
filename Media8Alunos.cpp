/*4. Faça um programa que cadastre 8 alunos. Para cada aluno devem ser cadastrados: nome, nota 1 e nota 2. Primeiro, liste todos os alunos cadastrados ordenando-os pela média
 ponderada das notas, tendo a primeira nota peso 2 e a segunda peso 3.
  Em seguida, ordene os alunos, de forma crescente, pela nota 1, e liste-os.
  Finalmente, considerando que para ser aprovado o aluno deve ter no mínimo média 7, 
  liste, em ordem alfabética, os alunos reprovados. */

#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include<string.h>

void menu();
void calculaMedia();
using namespace std;
struct func {
	
	char nome[20];
	float nota1,nota2,media;
	
};

func alunos[8];

struct fun {
	
	char Nome[20];
	float Media;
	
};fun alunosMediaA[8];

struct fu {
	
	char NOME[20];
	float MEDIA;
	
};

fu alunosMediaR[8];


float notaMinima=7,auxNota;
char auxNome[20];
int contadorA=0,contadorR=0,auxNome1,auxNome2,op;

void cadastrar(){
	system("cls");
	for( int i=0;i<8;i++){
	system("cls");
	cout<<"\n digite o nome do aluno "<<i+1<<" : ";
    cin>>alunos[i].nome;
	cout<<"\n digite a nota 1 do aluno "<<alunos[i].nome<<" : ";
	cin>>alunos[i].nota1;
	//scanf("%.1f", & alunos[i].nota1);
	cout<<"\n digite a nota 2 do aluno "<<alunos[i].nome<<" : ";
	//scanf("%.1f", & alunos[i].nota2);
	cin>>alunos[i].nota2;
	}
		
	calculaMedia();
}

void calculaMedia(){
	
	for( int i=0;i<8;i++){
	alunos[i].media=(alunos[i].nota1 + alunos[i].nota2)/2;
	}
	
	for( int i=0;i<8;i++){
	for( int j=0;j<8;j++){
	if( alunos[i].media>alunos[j].media){
			strcpy(auxNome,alunos[i].nome);
		strcpy(alunos[i].nome, alunos[j].nome);
		strcpy(alunos[j].nome,auxNome);
		
		auxNota=alunos[i].nota1;
		alunos[i].nota1=alunos[j].nota1;
		alunos[j].nota1=auxNota;
		
		auxNota=alunos[i].nota2;
		alunos[i].nota2=alunos[j].nota2;
		alunos[j].nota2=auxNota;
		
		auxNota=alunos[i].media;
	    alunos[i].media=alunos[j].media;
	    alunos[j].media=auxNota;
		
	}	
	}}
cout<<"\n\n aprete Enter para voltar ao menu";
	getche();
	menu();
}

void ordenacaoNota1(){
	system("cls");
	for( int i=0;i<8;i++){
	for( int j=0;j<8;j++){
	
	if(alunos[i].nota1>alunos[j].nota1){
		strcpy(auxNome,alunos[i].nome);
		strcpy(alunos[i].nome, alunos[j].nome);
		strcpy(alunos[j].nome,auxNome);
		
		auxNota=alunos[i].nota1;
		alunos[i].nota1=alunos[j].nota1;
		alunos[j].nota1=auxNota;
		
		auxNota=alunos[i].nota2;
		alunos[i].nota2=alunos[j].nota2;
		alunos[j].nota2=auxNota;
		
		auxNota=alunos[i].media;
	    alunos[i].media=alunos[j].media;
	    alunos[j].media=auxNota;
		
	}}}
		
		for( int i=0;i<8;i++){
	cout<<"\n aluno "<<i+1<<" : "<<alunos[i].nome;
	cout<<"\n nota 1: "<<alunos[i].nota1;	
	cout<<"\n nota 2: "<<alunos[i].nota2;
	cout<<"\n media: "<<alunos[i].media;
	cout<<"\n";
	}
	cout<<"\n\n aprete Enter para voltar ao menu";
	getche();
	menu();
	
	
}
void printAluno(){
	system("cls");
		for( int i=0;i<8;i++){
	cout<<"\n aluno "<<i+1<<" : "<<alunos[i].nome;
	cout<<"\n nota 1: "<<alunos[i].nota1;	
	cout<<"\n nota 2: "<<alunos[i].nota2;
	cout<<"\n media: "<<alunos[i].media;
	cout<<"\n";
	}
cout<<"\n\n aprete Enter para voltar ao menu";
	getche();
	menu();
}

void media7(){

	system("cls");
	contadorR=0;
	contadorA=0;
		for( int i=0;i<8;i++){
         if(alunos[i].media>=7){
         		strcpy( alunosMediaA[contadorA].Nome,alunos[i].nome);
			 alunosMediaA[contadorA].Media= alunos[i].media;
         	
         	contadorA=contadorA+1;
		 }
		}
		
		
		for( int i=0;i<8;i++){
         if(alunos[i].media<7){
         	strcpy(	alunosMediaR[contadorR].NOME,alunos[i].nome);
			 alunosMediaR[contadorR].MEDIA= alunos[i].media;
         	
         	contadorR=contadorR+1;
		 }}
		 
	for (int i=0;i<contadorA;i++){
	for(int j=0;j<contadorA;j++){
	//auxNome1=alunosMediaA[i].Nome[0];
   // auxNome2=alunosMediaA[i+1].Nome[0];
   
	auxNome1=strcmp(alunosMediaA[i].Nome,alunosMediaA[j].Nome);
	if(auxNome1<0){
    	strcpy( auxNome, alunosMediaA[i].Nome);
		strcpy( alunosMediaA[i].Nome,alunosMediaA[j].Nome);
			strcpy( alunosMediaA[j].Nome,auxNome);
		
			auxNota=alunosMediaA[i].Media;
			 alunosMediaA[i].Media= alunosMediaA[j].Media;
			 alunosMediaA[j].Media=auxNota;
	}
	}}



	for(int i=0;i<contadorR;i++){
	for(int j=0;j<contadorR;j++){
	//auxNome1=funcionario[i].nome[0];
    //auxNome2=funcionario[i+1].nome[0];
    
	auxNome1=strcmp(alunosMediaR[i].NOME,alunosMediaR[j].NOME);
	if(auxNome1<0){
    	strcpy( auxNome, alunosMediaR[i].NOME);
		strcpy( alunosMediaR[i].NOME,alunosMediaR[j].NOME);
		strcpy( alunosMediaR[j].NOME,auxNome);
		
			auxNota=alunosMediaR[i].MEDIA;
			 alunosMediaR[i].MEDIA= alunosMediaR[j].MEDIA;
			 alunosMediaR[j].MEDIA=auxNota;
	}
	}}
	
	
	
for (int i=0;i<contadorR;i++){
		
 cout<<"\n o aluno(a): "<<alunosMediaR[i].NOME<<" | com a media: "<<alunosMediaR[i].MEDIA<<" | foi reprovado por nao atingir 7";
	}
	cout<<"\n\n";
	for (int i=0;i<contadorA;i++){
		
 cout<<"\n o aluno(a): "<<alunosMediaA[i].Nome<<" | com a media: "<<alunosMediaA[i].Media<<" | foi aprovado por atingir media >= 7";
	}
	cout<<"\n\n aprete Enter para voltar ao menu";
	getche();
	menu();
}

void menu(){
	system("cls");
	cout<<"\n menu";
	cout<<"\n 1- cadastrar";
	cout<<"\n 2- printar todos alunos";
	cout<<"\n 3- ordenar pela nota 1";
	cout<<"\n 4- ordenar pela media 7";
	cout<<"\n 5- sair";
	cout<<"\n";
	cin>>op;
	switch (op){
		case 1:{cadastrar();
		
			break;
		}
		case 2:{
			printAluno();
			break;
		}
		case 3:{
			ordenacaoNota1();
			break;
		}
		case 4:{ media7();
			
			break;
		}
		case 5:{ exit(0);
			break;
		}
	}
}
main(){
	menu();
	return(0);
}
