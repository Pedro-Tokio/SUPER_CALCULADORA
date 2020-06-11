#include<conio.h>
#include<windows.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>

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
		printf("\nEscolha um dos operadores: \n[1]Soma \n[2]Subtra��o \n[3]Muntiplica��o \n[4]Divis�o \n[5]Equação do 2° grau \n-->");
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

			case 5:
				int a, b, c, delta, x1, x2;
				printf("\nDigite a valor de A: \n");
				scanf("%d", &a);
				printf("\nDigite o valor de B: \n");
				scanf("%d", &b);
				printf("\nDigite o valor de C: \n");
				scanf("%d", &c);

				delta = pow(b, 2) - 4 * a * c;
				printf("\nDelta = %d", delta);
				if (delta > 0)
				{
					x1 = (-b + sqrt(delta)) / (2 * a);
					x2 = (-b - sqrt(delta)) / (2 * a);
					printf("\nX1 = %d", x1);
					printf("\nX2 = %d", x2);
				}

				if (delta == 0)
				{
					printf("\nDelta é igual a 0, então só possui uma raiz real. \n");
					x1 = -b / (2 * a);
					printf("\nX = %d", x1);
				}

				else
				{
					printf("\nNão possui raiz real para X");
				}
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
	
	
	
