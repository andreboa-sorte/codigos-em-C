#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<ctype.h>
#include<io.h>
#include<string.h>
#include<dos.h>
using namespace std;

struct dados
       {
       char nome[20];
	   char aviso[20];
	   char contas[20]; 
       
       
      
       }cliente;
       FILE *fp;
      
       char op;
       int tam,opc;
struct locacao{
char apar[20];
 int valor;
	
}loc ;
     FILE *pf;
       

void cria_arq1(){
	 if((pf=fopen("novo.dat","a"))==NULL){
	system("cls");
	printf("Erro de cria‡ao de arquivo");
	return;
	  }
	 fclose(pf);
}

void cria_arq()
{
     if ((fp = fopen("cliente.dat","a"))==NULL)
     {
	printf("Erro de criacao do arquivo");
	return;
     }
     printf("Arquivo Criado");
     //delay(1000);
     fclose(fp);
}

void cadastra()
{
  system("cls");
  int tamanho=0;
  fp = fopen("cliente.dat","r+");
  rewind(fp);
  do{
  fread(&cliente,sizeof(cliente),1,fp);
  tamanho++;}
  while(!feof(fp));

  fseek(fp,sizeof(cliente),tamanho);
  do
  {
     system("cls");
     
     
	 printf("\nDigite o nome do cliente:");
     cin>>cliente.nome;
    cliente.aviso=ContaPendete;
     
     
    
     tamanho=tamanho+fwrite(&cliente,sizeof(struct dados),1,fp);
     printf("\nContinuar cadastrando<s> ou <n>:");
     cin>>op;
     op = toupper(op);
     }while (op=='S');
     fclose(fp);
}

void consulta()
{
     system("cls");
     pf=fopen("loc.dat","r+");
     fseek(pf,sizeof(struct locacao),0);

     while(fread(&loc,sizeof(loc),1,pf)==1)
      {
	 system("cls");
	 printf("Nome do apartamento:        %s\n",loc.apar);
	 printf("preco do alugel:       %d\n",loc.valor);
	 
	 printf("\nDigite enter para continuar\n");
	 getch();
      }
     printf("fim do arquivo");
     fclose(pf);
     getch();
}

void consultaClie()
{
     system("cls");
     fp=fopen("cliente.dat","r+");
     fseek(fp,sizeof(struct dados),0);

     while(fread(&cliente,sizeof(cliente),1,fp)==1)
      {
	 system("cls");
	 printf("Nome do do cliente:        %s\n",cliente.nome);
	 printf("situação do cliente:       %d\n",cliente.aviso);
	 
	 printf("\nDigite enter para continuar\n");
	 getch();
      }
     printf("fim do arquivo");
     fclose(fp);
     getch();
}

void consulta_nome(){
     char nom_pro[20];
     int achou,
	 cont=0;
	system("cls");
	fp=fopen("cliente.dat","r+");
	fseek(fp,sizeof(struct dados),0);
	printf("Digite o Nome do cliente : ");
	cin>> nom_pro;
	       while(fread(&cliente,sizeof(cliente),1,fp)==1){
		achou=strcmp(cliente.nome,nom_pro);
		if(achou==0){
		   printf("\nO Nome do cliente ‚.................:%s\n",cliente.nome);
		   printf("estado do cliente‚................:%d\n",cliente.aviso);
		   
		   printf("_____________________________________________\n");
		   getch();
		   cont=1;}}

		if(cont==0){
		    printf("Nome do cliente não Cadastrado\n");
		    printf("\nCadastrar produto<s> ou <n>:");
		    cin>>op;
		    op = toupper(op);
		    if (op=='S'){
		    cadastra();
		    getch();}}}

void consulta_apar(){
     char nom_pro[20];
     int achou;
     int cont;
     char op; 
	 char opp;
	 cont=0;
	system("cls");
	pf=fopen("loc.dat","r+");
	fseek(pf,sizeof(struct locacao),0);
	printf("Digite o Nome do produto do apartamento : ");
	cin>> nom_pro;
	       while(fread(&loc,sizeof(locacao),1,pf)==1){
		achou=strcmp(loc.apar,nom_pro);
		if(achou==0){
		   printf("\nO Nome do apartemento ‚.................:%s\n",loc.apar);
		   printf("valor do alugel‚................:%d\n",loc.valor);
		   printf("_____________________________________________\n");
		   cout<<"\n deseja alugar este apratamento?  <s> <n>";
		   cin>>op;
		   op = toupper(op);
		    if (op=='S'){
		    cout<<"voce alugou o"<<loc.apar<<"para confirmar digite o nome do apartamento e alugado depois dele ex (trezeAlugado)\n";
		    cin>>loc.apar;
		    cout<<"\n o alugel é de"<<loc.valor<<"deseja pagar a primeira parcela do alugel? <s> <n>";
		    cin>>opp;
		   opp = toupper(opp);
		    if (opp=='S'){ cout<<"a conta de"<<loc.valor<<"foi paga";
		                    cliente.aviso=pago;
     
			}
		   getch();
		   cont=1;}}

		if(cont==0){
		    printf("apartamento nao encontrado\n");
		
		    }}





void apartamento(){
system("cls");
  int tamanho=0;
  pc = fopen("loc.dat","r+");
  rewind(pf);
  do{
  fread(&loc,sizeof(loc),1,fp);
  tamanho++;}
  while(!feof(fp));

  fseek(pf,sizeof(loc),tamanho);
  do
  {
     system("cls");
     printf("\nDigite o nome do apartamento:");
     cin>>loc.apar;
     printf("Digite a o valto do alugel:");
     cin>>loc.valor;
    
     tamanho=tamanho+fwrite(&loc,sizeof(struct locacao),1,fp);
     printf("\nContinuar cadastrando<s> ou <n>:");
     cin>>op;
     op = toupper(op);
     }while (op=='S');
     fclose(fp);
	
}


void menu()
{
  system("cls");
  printf("Menu de opcoes");
  printf("\n");
  printf("1 - Cadastrar cliente\n");
  printf("2 - listar apartamentos\n");
  printf("3 - Consultar Por Nome de cliente \n");
 cout<<"4 - registrar apartamento\n";
  printf("5 - Cria Arquivo Novo\n");
  printf("6 - alugar apartamento\n");
   cout<<"7 - listar cientes\n";
  printf("8 - Sair\n");
 
  printf("Digite uma opcao\n");
  cin>>opc;
  switch(opc)
  {
  case 1:cadastra();break;
  case 2:consulta();break;
  case 3:consulta_nome();break;
  case 5:cria_arq();break;
  case 6:consulta_apar();break;
  case 8:exit(0);
  case 4:apartamento();break
  case 7:consultaClie();break;
  }
}



main()
{
system("cls");
cria_arq();
opc = 1;

  do
  {
  menu();
  }
  while (op!=8);
}
