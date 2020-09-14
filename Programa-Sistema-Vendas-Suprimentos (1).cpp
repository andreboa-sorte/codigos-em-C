#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<ctype.h>
#include<io.h>
#include<string.h>
#include<dos.h>
using namespace std;// libera os comando do "coin" "cout"

struct dadosCli// define o corpo da estrutura do corpo. o aquivo fisico é o dadosclie
       {
       char nome[20];
       char cpf[11];
       char endereco[30];
       int fone;
       char email[30];
	}cliente;// definição da variavel cliente para uso, é a palavra q vai usar para chamar as variaveis
       FILE *fCliente;// flie= comado de criação, usado para declarar a criação do fcliente o "*" serve como ponteiro, para apontar na memoria sa coisas (é necessario). o fcliente é o arquivo logico(a parte q muda na memoria ram)
       char op;
       int tam,opc;

void cria_arqCliente()// o nome da funcão q vai ser chamada para cirar o arquivo (void é quando n tem retorno)
{
     if ((fCliente = fopen("c:/clientes.dat","a"))==NULL)//"a"= criara aquivo. fopen é uma função f= file, open= abrir
     {
	printf("Erro de criacao do arquivo");
	return;// faz ele sair da função
     }
     printf("Arquivo Criado");
     fclose(fCliente);// fclosa= para fechar o arquivo, sempre a abre um srquivo, fecha dele depois
}

void cadastra()
{
  system("cls");//para limpar a tela
  int tamanho=0;// auciliar para o comando de segurança
  fCliente = fopen("c:/clientes.dat","r+");//"r+"= abre para a leitura e escrita arquivo (ride and write)
  rewind(fCliente);// aponta para o pirmeiro registro do arquivo
  do{
  fread(&cliente,sizeof(cliente),1,fCliente);// comando de segurança para ter ceteza q esta apontando para o ultimo registro e q n vai escrever um em cima do outro. sizeof= para deixar o tamanho real do registro(sem acrecentar ou diminuir)
  tamanho++;}
  while(!feof(fCliente));// para ele continuar procurando ate achar o aquivo vazio. f=file, e=end ,o=on, f= file

  fseek(fCliente,sizeof(cliente),tamanho);// aponta apra o registro vazio
  do// ai entra na parte para registrar as funções
  {
     system("cls");
     printf("\nDigite o nome do cliente:");
     cin>>cliente.nome;
     printf("Digite o CPF:");
     cin>>cliente.cpf;
     printf("Digite o endereco:");
     cin>>cliente.endereco;
     printf("Digite o Fone:");
     cin>>cliente.fone;
     printf("Digite o email:");
     cin>>cliente.email;
     tamanho=tamanho+fwrite(&cliente,sizeof(struct dadosCli),1,fCliente);//fwrite= grava o arquivo(flie write). depois q escreve já aponta +1 no tamanho para apontar para o proximo registro. detro da "(struct dadosclie)" vc coloca o dadosclie q é o nome da estrutura fisica para n dar problema de char e ravar errado
     printf("\nContinuar cadastrando<s> ou <n>:");
     cin>>op;
     op = toupper(op);// toupper= faz tudo virar caps lock
     }while (op=='S');// repete o registro ate a pessoa afalar q n quer mais
     fclose(fCliente);// sempre q abre fecha
}

void consulta()// criara a consulta de tdos os registros
{
     system("cls");
     fCliente=fopen("c:/clientes.dat","r+");// abrindo
     fseek(fCliente,sizeof(struct dadosCli),0);// tbm aponta para a pirmeira linha do arquivo

     while(fread(&cliente,sizeof(cliente),1,fCliente)==1)// prega da parte fisica e manda para a logica e vai repetindo ate terminar (usando o while)
      {
	 system("cls");
	 printf("Nome:        %s\n",cliente.nome);//mosta os dados
	 printf("CPF:       %s\n",cliente.cpf);
	 printf("Endereco:     %s \n",cliente.endereco);
	 printf("Fone:      %d\n",cliente.fone);
	 printf("E-mail:      %s\n",cliente.email);
	 printf("\nDigite enter para continuar\n");
	 getch();
      }
     printf("fim do arquivo");
     fclose(fCliente);//quando abre, fecha
     getch();
}
void consulta_nome()// consulta como nome
{     char nom_pro[20];//variavel aucilia (tem q ser do mesmo tamanho apra comprar
     int achou,// outro aucilicar para fazer a comparação
	 cont=0;// variavel auciliar para mostrar se n tem a pessoa registrada
	system("cls");
	fCliente=fopen("c:/clientes.dat","r+");
	fseek(fCliente,sizeof(struct dadosCli),0);// aponta para o pimeiro registro
	printf("Digite o Nome p/ Procura : ");
	cin>> nom_pro;// pega o nome digitado
	       while(fread(&cliente,sizeof(cliente),1,fCliente)==1){
		achou=strcmp(cliente.nome,nom_pro);// compara o nome digtado com o do banco de dados pela valor exadecimal
		if(achou==0){// quando for igual, vai dara 0, então vai mostrar
	printf("Nome:        %s\n",cliente.nome);
	 printf("CPF:       %s\n",cliente.cpf);
	 printf("Endereco:     %s \n",cliente.endereco);
	 printf("Fone:      %d\n",cliente.fone);
	 printf("E-mail:      %s\n",cliente.email);
	 printf("_____________________________________________\n");
		   getch();
		   cont=1;}}// apara usar para fazer mostrar se n tem registro

		if(cont==0){// se n achou ele avisa e fala
		    printf("Nome nao Cadastrado\n");
		    printf("\nCadastrar Cliente<s> ou <n>:");
		    cin>>op;
		    op = toupper(op);
		    if (op=='S'){
		    cadastra();// manda para cadastrar a pessoa, caso ela queira
		    getch();}}}

void altera(){
     char nom_pro[20];
     int achou;
     int pos=0;
	system("cls");
	fCliente=fopen("clientes.dat","r+");
	fseek(fCliente,sizeof(struct dadosCli),0);
	printf("Digite o Nome p/ Procura : ");
	cin>> nom_pro;
	       while(fread(&cliente,sizeof(cliente),1,fCliente)==1){
		achou=strcmp(cliente.nome,nom_pro);
		pos++;
		if(achou==0){
		  // fseek(fp,cont*sizeof(struct dados),SEEK_SET);
		  printf("Nome:        %s\n",cliente.nome);
	 printf("CPF:       %s\n",cliente.cpf);
	 printf("Endereco:     %s \n",cliente.endereco);
	 printf("Fone:      %d\n",cliente.fone);
	 printf("E-mail:      %s\n",cliente.email);
		   printf("_____________________________________________\n");
		   getch();
		   printf("\nDigite o nome do cliente:");
		 
     printf("\nDigite o novo nome do cliente:");
     cin>>cliente.nome;
     printf("Digite o novo CPF:");
     cin>>cliente.cpf;
     printf("Digite o novo endereco:");
     cin>>cliente.endereco;
     printf("Digite o novo Fone:");
     cin>>cliente.fone;
     printf("Digite o novo email:");
     cin>>cliente.email;
		     fseek(fCliente,pos*sizeof(struct dadosCli),SEEK_SET);//garante q aponta para a q ele acou, para colocar por cima e n pontar para a procima
		     fwrite(&cliente,sizeof(struct dadosCli),1,fCliente);// escreve por cima
		    getch();}}
		    fclose(fCliente);}

void menu()// o progama principal é sempre por ultimo. o menu manda para os outras voids
{
  system("cls");
  printf("Menu de opcoes");
  printf("\n");
  printf("1 - Cadastrar\n");
  printf("2 - Consultar\n");
  cout<<"3 - alterar\n";
  printf("4 - Sair\n");
  printf("Digite uma opcao\n");
  cin>>opc;
  switch(opc)
  {
  case 1:cadastra();break;// joga para as voids quando o numeor solicitado
  case 2:consulta();break;
  case 3:altera();break;
  case 4:exit(0);
  }
}

main()// o arquivo principal
{
system("cls");
cria_arqCliente();
opc = 1;
  do
  {
  menu();
  }
  while (op!=5);
}
