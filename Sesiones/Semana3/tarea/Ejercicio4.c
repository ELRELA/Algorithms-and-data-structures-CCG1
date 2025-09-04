#include <stdio.h>
int main(){
	int a,b,c,d;
	float e,f,g,h;
	char v[10];
	int x;
	int *p1=&a;
	p1=p1+1;
	printf("%i \n", *p1);
	if(p1==(void*)&a || p1==(void*)&b || p1==(void*)&c || p1==(void*)&d || p1==(void*)&e|| p1==(void*)&f|| p1==(void*)&g|| p1==(void*)&h ||p1==(void*)&v, p1==(void*)&x){
		printf("la direccion de memoria del puntero incrementado coincide con la direccion de otra variable");
	}
}

