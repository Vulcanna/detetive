#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
int main(){
	system("color A");
	SetConsoleTitle("Detetive!");
	setlocale(LC_ALL,"Portuguese");
	printf("\nOcorreu um crime! Uma pessoa foi assassinada, responda as perguntas: \n\n");
	int contador,contaSim=0;
	char respostas[5];
	char perguntas[5][30] = {
		"Telefonou para a v�tima", 
		"Esteve no local do crime", 
		"Mora perto da v�tima",
		"Devia para a v�tima",
		"J� trabalhou com a v�tima"};
	for(contador=0;contador<5;contador++){
		printf("\n %i - %s (s/n)?",contador+1, perguntas[contador]);
		fflush(stdin);
		scanf("%c",&respostas[contador]);
		if (respostas[contador] == 's' || respostas[contador] == 'S' ){
			contaSim++;
		}
	}
	printf("Contagem: %i",contaSim);
	
	if (contaSim <= 1){
		printf("\nClassifica��o: Inocente!...At� que se prove o contr�rio");
	} else if(contaSim == 2){
		printf("\nClassifica��o: Suspeito!");
	} else if(contaSim == 3 || contaSim == 4){
		printf("\nClassifica��o: C�mplice!");
	} else if (contaSim >= 5){
		printf("\nClassifica��o:  AHA! ASSASSINO!");
	}
	
	printf("\n\n");
	system("pause");
	return 0;
}
