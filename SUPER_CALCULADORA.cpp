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
		printf("\nEscolha um dos operadores: \n[1]Soma \n[2]Subtração \n[3]Muntiplicação \n[4]Divisão \n-->");
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
					printf("\n0 não é um divisor válido. \nDigite outro valor: \n");
					scanf("%d", &n2);
				}
				resul = n1 / n2;
				printf("\nRESULTADO: \n%d", resul);
				break;
				
				default:
					printf("Valor inválido!");
				
		}
	
		
		printf("\n\nDeseja continuar? \n[1]SIM \n[2]NÃO \n-->");
		scanf("%d", &i);
		while (i != 1 && i != 2){
			printf("Opção inválida! \n-->");
			scanf("%d", &i);
		}
	}while(i == 1);
}
	
	
	
