#include <stdio.h>

int main() {
	int a = -1;
	if (a<1){
		printf("Che la cagaste\n");
	}
	if (a>=1){
		printf("%i\n", fibonacci(a));
	}
	return 0;

}

int fibonacci(int a){
	if (a<1){
		return -1;
	}
	if (a == 1) {
		return 0;
	}
	if (a == 2) {
		return 1;
	}
	int rta = 0;
	int x = 0;
	int y = 1;
	int cont;
	if (a > 2) {
		for (cont = 1; cont < a; cont = cont + 1) {
			rta = x+y;
			x = y;
			y = rta;
		}
	return rta;
	}
}
