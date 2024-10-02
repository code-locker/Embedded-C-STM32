#include <stdio.h>

int main(){
#if 0
	char fname[15],lname[15];

	printf("Enter your first name and last name\n");
	scanf("%s%s",fname,lname);
	fflush(stdout);
	printf("Your full name is %s %s\n",fname,lname);
	fflush(stdout);
#else
	char name[30];
	printf("Enter your full name\n");
	scanf("%[^\n]s",name);
	printf("Your full name is %s\n",name);
#endif
	return 0;
}
