#include <stdio.h>

int main() {
	int a;
	int b;
	printf("Enter the two numbers to be calculated (+, -, X, ¡À).\n");
	scanf("%d", &a);
	scanf("%d", &b);
	printf("+: %d.\n",a+b);
	printf("-: %d.\n",a-b);
	printf("x: %d.\n",a*b);
	printf("¡À: %d.\n",a/b);
	return 0;
}	
