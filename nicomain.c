#include <stdio.h>
	
int main() {
	traduction(478);
	return 0;
}


int traduction (int a) {
	int c = 0;  // centenas
	int d = 0; // decenas
	int e = 0; // unidades
	
	if (a >= 100) {
		c = a / 100;
		printf("%i centenas\n", c);	
	}
	if (a >= 10) {
		d = (a - c * 100) / 10;
		printf("%i decena\n", d);
	}
	e = a - c * 100 - d * 10;
	printf("%i unidades\n",e);
	
	return 0;
}
