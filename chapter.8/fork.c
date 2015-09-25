#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{
	pid_t pid;
	int x = 1;

	if ((pid = fork()) < 0) {
		printf("Fork failed!\n");
		exit(0);
	}

	if (pid == 0) {
		printf("child: x = %d\n", ++x);
		exit(0);
	}

	printf("parent: x = %d\n", --x);
	exit(0);
}
