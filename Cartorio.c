#include <stdio.h> //Bibloteca de comunica��o com o usu�rio
#include <stdlib.h> //Biblioteca de aloca��o de espa�o em mem�ria 
#include <locale.h> //Biblioteca de aloca��es de texto por regi�o
#include <string.h>// Biblioteca responsavel por cuidar das string
int registro()
{
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o CPF a ser cadastrado:");
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf);//Responsavel por copiar os valores das string
	
	FILE * file; // Cria o aquivo
	file = fopen(arquivo, "w"); //Criar o arquivo
	fprintf(file,cpf); // salva o valor da variavel
	fclose(file); // fecha o arquivo
	
	file = fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado:");
	scanf("%s",nome);
	
	file = fopen(arquivo,"a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado:");
	scanf("%s",sobrenome);
	
	file =fopen(arquivo,"a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado:");
	scanf("%s",cargo);
	
	file =fopen(arquivo,"a");
	fprintf(file,cargo);
	fclose(file);
	
	file = fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	system("pause");
	
}

int consulta()
{
	setlocale(LC_ALL, "Poetuguese");
	
	char cpf[40];
	char conteudo[200];
	
	printf("Vo�e escolheu consultar nomes!\n");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	if(file==NULL)
	{
	   printf("N�o foi possivel abrir o arquivo, n�o localizado.\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("Essas s�o as informa��es do usu�rio: .");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	system("pause");
	
}

int deletar()
{
	printf("Vo�e escolheu deletar nomes!\n");
	system("pause");
}
int main()
{
	int opcao=0;
	int laco=1;
	
	for(laco=1;laco=1;)
	{
	
		system("cls");
		
		
		setlocale(LC_ALL,"Portuguese");
	
		printf("### Cartorio da EBAC ###\n\n"); //inicio do menu
		printf("Escolha a op��o desejada no menu:\n\n");
		printf("\t1 - Resgistrar nomes\n");
		printf("\t2 - Consultar nomes\n");
		printf("\t3 - Deletar nomes\n");	
		printf("\t4 - Sair do Sistema\n\n");
		printf("Op��o:"); //fim do menu

		scanf("%d", &opcao);
	
		system("cls");
	
		switch(opcao)//inicio da sele��o
		{
			case 1:
			registro();
			break;
			
			case 2:
			consulta();
			break;
			
			case 3:
			deletar();
			break;
			
			case 4:
			printf("Obrigado por usar o nosso sistema !!");
			return 0;
			break;
			
			default:
			printf("Essa op��o n�o est� disponivel!\n");
			system("pause");
			break;
		
		}// fim da sele��o
   }
}


	
