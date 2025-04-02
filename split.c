#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//strtok() <<< função pra seprar uma string grande em varias strings menores famosos ~tokens~
//se declarar essa variavel na função main ela pode ocupar muita memoria cuidado
//como ela é critica é melhor declarar essa variavel global
//se quiser colocar dentro da main pode usar esse static
//o static faz variaveis fora de um escopo manter o valor depois que o escopo acaba de executar


char linha[1024] = "will;28;70;1.75";

int main(){
	
	char nome[10];
	char peso[10];
	char idade[10];
	char altura[10];

	printf("%s \n", linha);

	//aqui ta declarando um ponteiro que vai receber o valor do strtok, 
	//que ta dividindo a string em pedacinhos
	//or argumentos sao a string q vc ta lendo e o caracter que vai ser convertido em \0 pra finalizar a string

	char *token = strtok(linha, ";");
	//aqui é pra garantir que o programa copia a string inteira e nao só um pedaço 
	//do tamanho do tanto de memoria q vc alocou pra cada string
	//no caso se o tamanho ultrapassar a memoria alocada isso pode dar um BO intenso
	//entao é bom ter uma verificação e se for pra dar ruim o programa vai return-1; ou seja
	//parou a execução 
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

	//programa ta pegando a string e divindo em strings menores separadas por ;


	//sinceramente eu nao saquei essa explicação mto bem nao
	//eu acho q o strcpy ta pegando os valores que foram copiados do strtok e colocando em variaveis diferentes
	//o primeiro token parou no ; que transformou em \0, entao quando vc usa a funçao de novo com o valor 
	//NULL ele vai continuar a ler a string até achar mais um \0, ai vc copia o valor pra outra variavel e assim
	//por diante 
	strcpy(nome, token);
	token = strtok(NULL, ";");
	strcpy(idade, token);
	token = strtok(NULL, ";");
	strcpy(peso, token);
	token = strtok(NULL, ";");
	strcpy(altura, token);

	// desse jeito aqui ele vai tratar toda a string grande como se fosse caracter
	//printf(" %s \n %s \n %s \n %s \n",nome, peso, idade, altura);
	printf("nome %s\n",nome);
	printf("idade %d\n",atoi(idade));
	printf("peso %d\n",atoi(peso));
	printf("altura %.2f\n",atof(altura));
	

}