#include<stdio.h>
int main(){
	int a, b;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	printf("%d", (a/b) * 100);
	return 0;
}