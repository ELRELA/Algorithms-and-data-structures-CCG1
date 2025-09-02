#include <stdio.h>
#include <string.h>
int a1=1;
int a2=2;
int a3=3;

		int *vetor[3]={&a1,&a2,&a3};

		void imprimeTodos() {
			int i;
			for(i = 0;i < 3;i++)
				printf("%i\n, => %p", *vetor[i], vetor[i]);
		}

int main(){
	imprimeTodos();
	printf("\n %d => %p\n",a1,&a1);
	printf("\n %d => %p\n",a2,&a2);
	printf("\n %d => %p\n",a3,&a3);


}