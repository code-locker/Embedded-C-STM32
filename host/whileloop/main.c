#include <stdio.h>

int main(){
	int start, end;
	printf("Program to print all even numbers between staring and ending number\n");
	printf("Enter staring number and ending number\n");
	scanf("%d %d",&start,&end);
	if(start>end){
		printf("Starting number should be less than ending number\n");
		return 0;
	}
	while(start <= end){
		if(!(start%2)){
			printf("%4d ", start);
		}
		start++;
	}
	printf("\n");
	return 0;
}
