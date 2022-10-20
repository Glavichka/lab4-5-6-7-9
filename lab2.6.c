#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){
	char * home = getenv("HOME");
	printf("Original HOME: %s\n", home);
	setenv("HOME", "Glavichka", 1);
	
	char * newHome = getenv("HOME");
	printf("New HOME: %s\n", newHome);
	
	char * userName = getenv("USERNAME");
	printf("Original USERNAME: %s\n", userName);
	setenv("USERNAME", "glavichka_s", 1);
	
	char * newUsername = getenv("USERNAME");
	printf("New USERNAME: %s\n", newUsername);
}
