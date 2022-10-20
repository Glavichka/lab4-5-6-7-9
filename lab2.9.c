#include<stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/utsname.h>

int main(int argc,char** argv)
{
	struct utsname str;
	uname(&str);
   
	printf("Name of Operation System: %s\n",str.sysname);
	printf("Name of computer: %s\n",str.nodename);
	printf("Release number: %s\n",str.release);
	printf("Number version: %s\n",str.version);
	printf("Type of hardware: %s\n",str.machine);
	printf("Host ID: %ld\n",gethostid());
  
}
