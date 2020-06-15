#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>


struct info{
	int cod;
	char name[100];
	char tel[100];
	char email[100];
};

struct info cad[5];
int a;
void sair(){
	printf("Deseja voltar ao menu?\n");
	printf("Digite 1 para continuar cadastrando ou qualquer outro n�mero para sair!\n");
	scanf("%d", &a);
}
int main(){
	setlocale(LC_ALL, "portuguese");
	SetConsoleOutputCP(1252);
	SetConsoleCP(1252);
	int i=1;
	int contMenu = 1;
	int options;
	int cont = 1;
	int b=0;
	
	while(contMenu == 1){
		a = 1;
		printf("----------------------------------\n");
		printf("************** MENU **************\n\n");
		printf("1 - Inserir um novo cadastro\n");
		printf("2 - Mostar todos os cadastros\n");
		printf("0 - Encerrar\n\n");
		printf("**********************************\n");
		printf("----------------------------------\n\n");
		scanf("%d", &options);
		system("cls");
		switch(options){
			case 1:
				for( i; i != 6 && a == 1; i++ && cont++){
					cad[i].cod = 1000 + rand() % 1000000;
					printf("----------------------------------\n");
					printf("Cliente N� %d\n\n", i);
					printf("Digite o nome..........: ");
					setbuf (stdin,NULL);
					gets(cad[i].name);
					printf("Digite o telefone......: ");
					setbuf (stdin,NULL);
					gets(cad[i].tel);
					printf("Digite o e-mail........: ");
					setbuf (stdin,NULL);
					gets(cad[i].email);
					printf("Cadastro realizado!\n");
					printf("----------------------------------\n\n");
					b = 1;
					sair();
					system("cls");
				}
				if(cont == 6){
					printf("Agenda lotada!\n\n");
					system("pause");
					system("cls");
				}
			break;
			case 2:
				if(b == 0){
					printf("Agenda vazia!\n");
					system("pause");
					system("cls");
				}else{
					for( i = 1; i < cont; i++){
						printf("----------------------------------\n");
						printf("Cliente N� %d\n\n", i);
						printf("C�digo........: %d\n", cad[i].cod);
						printf("Nome..........: %s\n", cad[i].name);
						printf("Telefone......: %s\n", cad[i].tel);
						printf("E-mail........: %s\n", cad[i].email);
						printf("----------------------------------\n\n");
					}
					system("pause");
					system("cls");
				}
				
			break;
			case 0:
				contMenu = 0;
			break;
			default:
				system("cls");
				printf("Valor inv�lido!\n");
				system("pause");
				system("cls");
		}
	}
	
}
