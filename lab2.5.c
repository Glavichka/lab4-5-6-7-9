#include <stdio.h>
#include <stdlib.h>

int main() {
	char * home = getenv("HOME");
	char * shell = getenv("SHELL");
	char * logname = getenv("LOGNAME");
	char * lang = getenv("LANG");
	char * path = getenv("PATH");
    	printf("HOME: %s\n", home);
    	printf("SHELL: %s\n", shell);
    	printf("LOGNAME: %s\n", logname);
    	printf("LANG: %s\n", lang);
    	printf("PATH: %s\n", path);
}
