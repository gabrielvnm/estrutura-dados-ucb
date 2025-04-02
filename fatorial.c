// só pra vc se ligar como funciona o static, tenta tirar ele ai e compilar blz
#include <stdio.h>


//kk isso nao é fatorial nao cara
int fatorial(){
	static int i = 1;
	i = i*(i+1);
	return i;
}

int main(){
	
	printf("%d \n",fatorial());
	printf("%d \n",fatorial());
	printf("%d \n",fatorial());
	printf("%d \n",fatorial());
	printf("%d \n",fatorial());

}