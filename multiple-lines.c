#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 300
#define MIN 5

char linha[1024] = "string;string maior;string enorme de grande;17;2400;1.87;1.87000000;\nsegunda;linha;mais string;2000;1024;1.20;1.20000;\n";


int main(){
	
	char linha1[MAX];
	char linha2[MAX];
	char string1[MAX];
	char string2[MAX];
	char string3[MAX];
	char string4[MIN];
	char string5[MIN];
	char string6[MAX];
	char string7[MAX];

	printf("essa eh a string original:\n%s \n", linha);

	char *token = strtok(linha, "\n");

	if (strlen(token) >=sizeof(linha1)){
		printf("errooo 1\n");
		return -1;
	}/*
	if (strlen(token) >=sizeof(string2)){
		printf("errooo 2\n");
		return -1;
	}
	if (strlen(token) >=sizeof(string3)){
		printf("errooo 3\n");
		return -1;
	}
	if (strlen(token) >=sizeof(string4)){
		printf("errooo 4\n");
		return -1;
	}
	if (strlen(token) >=sizeof(string5)){
		printf("errooo 5\n");
		return -1;
	}
	if (strlen(token) >=sizeof(string6)){
		printf("errooo 6\n");
		return -1;
	}
	if (strlen(token) >=sizeof(string7)){
		printf("errooo 7\n");
		return -1;
	}*/

	strcpy(linha1, token);
	token = strtok(NULL, "\n");
	strcpy(linha2, token);

	printf("primeira linha %s\n",linha1);
	printf("segunda linha %s\n",linha2);

	char *token2 = strtok(linha1, ";");

	strcpy(string1, token2);
	token2 = strtok(NULL, ";");
	strcpy(string2, token2);
	token2 = strtok(NULL, ";");
	strcpy(string3, token2);
	token2 = strtok(NULL, ";");
	strcpy(string4, token2);
	token2 = strtok(NULL, ";");
	strcpy(string5, token2);
	token2 = strtok(NULL, ";");
	strcpy(string6, token2);
	token2 = strtok(NULL, ";");
	strcpy(string7, token2);	

	printf("1 %s\n",string1);
	printf("2 %s\n",string2);
	printf("3 %s\n",string3);
	printf("4 %s\n",string4);
	printf("5 %s\n",string5);
	printf("6 %s\n",string6);
	printf("7 %s\n",string7);

	char *token3 = strtok(linha2, ";");
	
	strcpy(string1, token3);
	token3 = strtok(NULL, ";");
	strcpy(string2, token3);
	token3 = strtok(NULL, ";");
	strcpy(string3, token3);
	token3 = strtok(NULL, ";");
	strcpy(string4, token3);
	token3 = strtok(NULL, ";");
	strcpy(string5, token3);
	token3 = strtok(NULL, ";");
	strcpy(string6, token3);
	token3 = strtok(NULL, ";");
	strcpy(string7, token3);

	printf("1 %s\n",string1);
	printf("2 %s\n",string2);
	printf("3 %s\n",string3);
	printf("4 %s\n",string4);
	printf("5 %s\n",string5);
	printf("6 %s\n",string6);
	printf("7 %s\n",string7);


}