//aula dia 31/03
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char linha[1024] = "will;28;70;1.75";

int main(){
	
	char nome[10];
	char peso[10];
	char idade[10];
	char altura[10];

	printf("%s \n", linha);

	char *token = strtok(linha, ";");

	if (strlen(token) >=sizeof(nome)){
		printf("errooo\n");
		return -1;
	}
	if (strlen(token) >=sizeof(peso)){
		printf("errooo\n");
		return -1;
	}
	if (strlen(token) >=sizeof(altura)){
		printf("errooo\n");
		return -1;
	}
	if (strlen(token) >=sizeof(idade)){
		printf("errooo\n");
		return -1;
	}

	strcpy(nome, token);
	token = strtok(NULL, ";");
	strcpy(idade, token);
	token = strtok(NULL, ";");
	strcpy(peso, token);
	token = strtok(NULL, ";");
	strcpy(altura, token);

	printf("nome %s\n",nome);
	printf("idade %d\n",atoi(idade));
	printf("peso %d\n",atoi(peso));
	printf("altura %.2f\n",atof(altura));
	

}
