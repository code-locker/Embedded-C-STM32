#include <stdio.h>

int main(){
	int height;
	printf("Enter the height of the pyramid\n");
	scanf("%d",&height);
	for (int i=1; i<=height; i++){
		for(int j=i; j>0;j--){
			printf("%d ", j);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
