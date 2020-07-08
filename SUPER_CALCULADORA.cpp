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
		printf("\nEscolha um dos operadores: \n[1]Soma \n[2]Subtração \n[3]Muntiplicação \n[4]Divisão \n[5]Equação do 2° grau \n[6]Seguência de Fibonacci \n-->");
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
				int n, t;
				
				printf("Tabuada completa ou calculo único? \n[1]Tabuada completa \n[Calculo único] \n -- >");
				scanf("%d", &n);
				
				if (n == 1){
					printf("Digite o número que deseja multiplicar: \n-->");
					scanf("%d", &n1);
					printf("Até que número o multiplicador irá? \n-->");
					scanf("%d", &n2);
		
					while(i < n2){
						i = i + 1;
						t = n1 * i;
						printf("%d X %d = %d \n", n1, i, t);
					}
				}
				
				if (n == 2){
				
				
					printf("\nDigite o primeiro valor: \n");
					scanf("%d", &n1);
					printf("\nDigite o segundo valor: \n");
					scanf("%d", &n2);
					resul = n1 * n2;
					printf("\nRESULTADO: \n%d", resul);
				}
				
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
				
			case 5:
				int a, b, c, delta, x1, x2;
				printf("\nDigite o valor de A: \n");
				scanf("%d", &a);
				printf("\nDigite o valor de B: \n");
				scanf("%d", &b);
				printf("\nDigite o valor de C: \n");
				scanf("%d", &c);
				
				delta = pow(b, 2) - 4 * a * c;
				printf("\nDelta = %d", delta);
				if (delta > 0){
					x1 = (-b + sqrt(delta)) / (2 * a);
					x2 = (-b - sqrt(delta)) / (2 * a);
					printf("\nX1 = %d", x1);
					printf("\nX2 = %d", x2);
					}
					
				if (delta == 0){
					printf("\nDelta é igual a 0, então só possui uma raiz real. \n");
					x1 = -b / (2 * a);
					printf("X = %d", x1);
					}
				
				if (delta < 0){
					printf("\nNão possui raiz real para X");
					}
				break;
				
			case 6:
				int i, r, p, s, aux;
				p = 0;
				aux = 0;
				i = 1;
				s = 1;
				system("cls");
				
				printf("Digtite o tamanho da sequencia: \n");
				scanf("%d", &r);
				printf("\n");
				printf("%d \n", s);
				
				while(i < r){
					i = i + 1;
					aux = p + s;
					p = s;
					s = aux;
					printf("%d \n", aux);
				}
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
	
	getche();
}
	