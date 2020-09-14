#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
using namespace std;
int a[10];
char op;
/*
2.	Uma empresa paga R$ 33.00 por hora normal trabalhada e R$ 53.00 por hora extra. O Programa deve ler 05 funcionários,
 o total de horas normais e o total de horas extras trabalhadas para cada empregado em um ano e calcular o salário anual de cada trabalhador. 
 Assuma que o trabalhador deve pagar 10% de imposto se o seu salário anual for menor ou igual a R$ 12000.00. Caso o salário seja maior que este
  valor o imposto devido é igual a 10% sobre R$ 12000.00 mais 25% sobre o que passar de R$ 12000.00. Este programa deve também calcular o imposto 
  devido pelo trabalhador. Apresentar no final o nome de cada trabalhador, a quantidade de horas trabalhadas no ano, a quantidade de horas extras feitas no ano,
   o valor total do salário de um ano, e o valor de imposto devido por cada um deles.*/
  
  
   float hn=33,hx,horan,horax,sal1,inter,rs1;// horax= hora extra.  horan= hora normal. sal1= salario 1. inter= variavel intermediaria. rs1= resultado salario 1.
   char fn[5][20]; // fn= funcionario nome.
   

main(){
setlocale(LC_ALL,"portuguese");
system("cls");

for(int i=0;i<5;i++){
cout<<"\n digite o nome dos 5 funcionarios com no maximo 20 caracteres:";
	cin.getline(fn[i],20);
			fflush(stdin);

}

cout<<"\n digite a quantidade do horas normais do funcionario "<<fn[0]<<" : ";
cin>>horan;
sal1=horan*33;// calcula da renda só de horas normais
cout<<"\n digite a quantidade do horas extras do funcionario "<<fn[0]<<" : ";
cin>>horax;//calcula da renda só de horas extras
sal1=horax*53 + sal1;//calculo do pimeiro salario total
cout<<"\n "<<sal1;
if(sal1<=12000){
	rs1=sal1-1200;//retirada do ipost os do salario = a10% sobre R$ 12000.00 
	cout<<"\n o valor do salario anual de "<<fn[0]<<" é : "<<rs1;
	
}
if(sal1>12000){
	inter=sal1-12000;
	rs1= sal1-1200-(inter*0.25);//retirada do ipost os do salario = mais 25% sobre o que passar de R$ 12000.00
	cout<<"\n o valor do salario anual de "<<fn[0]<<" é : "<<rs1;
	
}

}




