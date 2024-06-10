#include <stdio.h>;
#include <stdlib.h>;
#include <time.h>

int random(int min, int max) {
	srand(time(NULL)*31);
	printf("%d", rand());
	return (rand()) % (max - min + 1) + min;
}

void main(void) {

	printf("\n%d", random(100, 9000));

	return;
}

