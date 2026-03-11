#include <stdio.h>

void changePointer(int *p){
	printf("print a new number\n");
	int b;
	scanf("%d", &b);
	*p = b;
}




int main(){
	int a;
	a = 0;
	int *p = &a;
	changeP(p);
	printf("Your New Number is: %d\n", *p);
}

