#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //bilbioteca de aloca��o de espa�o em mem�ria 
#include <locale.h> //biblbioteca de aloca��es de texto por regi�o 
#include <string.h> //biblioteca respons�vel por cuidar da strings

int registro()
{
    char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o CPF a ser cadastrado: ");
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf); // Responsavel por copiar os valores das strings
	
	FILE *file; // cria o arquivo 
	file = fopen(arquivo, "w"); // cria o arquivo
	fprintf (file,cpf); //salvo valor da variavel
	fclose(file); // fecha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado");
	scanf("%s", nome);
	
	file = fopen (arquivo,"a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s", sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s", cargo);
	
	file = fopen(arquivo,"a");
	fprintf(file, cargo);
	fclose(file);
	
	system("pause");
	
}

int consulta()
{
	setlocale(LC_ALL, "Portuguese");
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s", cpf);
	
	FILE*fipe;
	fipe = fopen(cpf,"r");
	
	if(fipe == NULL)
	{
		printf("N�o foi possivel abrir o arquivo, n�o localizado. \n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{ 
	    printf("\nEssas s�o as informa��es do usu�rio");
	    printf("%s", conteudo);
	    printf("\n\n");
	}
	
	sysyem("pause")
}
