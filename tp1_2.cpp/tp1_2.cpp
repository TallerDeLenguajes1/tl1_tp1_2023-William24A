
#include <stdio.h>
#include <stdlib.h>

int cuadradoNumero(int num){
	return num*num;
}

void cuadradoNum2(int *num){
	*num = (*num)*(*num);
}

void mostrarDireccion(int num){
	printf("\n%d  --  %p", num, &num);
}

void invertir(int *uno, int *dos){
	int aux;
	aux= *dos;
	*dos= *uno;
	*uno= aux;	
}

void orden(int *uno, int *dos){
	if(*uno > *dos){
		invertir(uno, dos);
	}
}

int main(){
	int x=3, y;
	y=cuadradoNumero(4);
	cuadradoNum2(&x);
	printf("%d, %d", x,y);
	mostrarDireccion(y);
	printf("\nX= %d y Y= %d", x,y);
	invertir(&x, &y);
	printf("\nX= %d y Y= %d", x,y);
	
	orden(&x,&y);
	printf("\nX= %d y Y= %d", x,y);
	invertir(&x, &y);
	printf("\nX= %d y Y= %d", x,y);
	orden(&x,&y);
	printf("\nX= %d y Y= %d", x,y);
	return 0;
}
