#include <stdio.h>

int main() {
	printf("%i\n", fibonacci(4));
	return 0;

}

int fibonacci(int a){
	if (a==0){
		return 0;
	}
	if (a==1){
		return 1;
	}
	int rta = 0;
	int x = 0;
	int y = 1;
	int cont;
	if (a>1){
		for (cont=1;cont<=a;cont=cont+){
			rta = x+y;
			x = y;
			y = rta;
		}
	return rta;
	}
}
