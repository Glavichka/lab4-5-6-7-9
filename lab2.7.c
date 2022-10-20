#include<stdio.h>
#include <stdlib.h>

int main(){
	char * home = getenv("HOME");
	printf("Original HOME: %s\n", home);
	int unsetHome = unsetenv(home); 
	printf("Result of unset HOME: %d\n", unsetHome);
	setenv("HOME", "Glavichka", 1);
	char * newHome = getenv("HOME");
	printf("New HOME: %s\n", newHome);
}
