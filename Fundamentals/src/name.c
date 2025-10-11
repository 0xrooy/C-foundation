#include <stdio.h>

int main(){
	char name[20];
	int age;

	printf("What is your name?:");
	scanf("%s", name);
	printf("How old are you?: ");
	scanf("%d", &age);
	printf("My name is %s. I am %d years old\n", name, age);


	return 0;
}
