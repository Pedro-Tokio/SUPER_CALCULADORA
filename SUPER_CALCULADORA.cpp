#include<conio.h>
#include<windows.h>
#include<stdio.h>
#include<locale.h>

main(){
	int i, e, n1, n2, resul;
	resul = 0;
	i = 0;
	system("cls");
	setlocale(LC_ALL, "Portuguese");
	
	printf("-------------------------\n");
	printf("    SUPER CALCULADORA    \n");
	printf("-------------------------\n");
	
	do{
		printf("\nEscolha um dos operadores: \n[1]Soma \n[2]Subtra��o \n[3]Muntiplica��o \n[4]Divis�o \n-->");
		scanf("%d", &e);
	
		switch(e){
			case 1:
				printf("\nDigite o primeiro valor: \n");
				scanf("%d", &n1);
				printf("\nDigite o segundo valor: \n");
				scanf("%d", &n2);
				resul = n1 + n2;
				printf("\nRESULTADO: \n%d", resul);
				break;
				
			case 2:
				printf("\nDigite o primeiro valor: \n");
				scanf("%d", &n1);
				printf("\nDigite o segundo valor: \n");
				scanf("%d", &n2);
				resul = n1 - n2;
				printf("\nRESULTADO: \n%d", resul);
				break;
				
			case 3:
				printf("\nDigite o primeiro valor: \n");
				scanf("%d", &n1);
				printf("\nDigite o segundo valor: \n");
				scanf("%d", &n2);
				resul = n1 * n2;
				printf("\nRESULTADO: \n%d", resul);
				break;
				
			case 4:
				printf("\nDigite o primeiro valor: \n");
				scanf("%d", &n1);
				printf("\nDigite o segundo valor: \n");
				scanf("%d", &n2);
				while (n2 == 0)
				{
					printf("\n0 n�o � um divisor v�lido. \nDigite outro valor: \n");
					scanf("%d", &n2);
				}
				resul = n1 / n2;
				printf("\nRESULTADO: \n%d", resul);
				break;
				
				default:
					printf("Valor inv�lido!");
				
		}
	
		
		printf("\n\nDeseja continuar? \n[1]SIM \n[2]N�O \n-->");
		scanf("%d", &i);
		while (i != 1 && i != 2){
			printf("Op��o inv�lida! \n-->");
			scanf("%d", &i);
		}
	}while(i == 1);
}
	
	
	
