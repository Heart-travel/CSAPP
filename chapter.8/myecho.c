#include <stdio.h>

int main(int argc, char **argv, char** envp)
{
	int i = 0;
	char **env = envp;

	printf("Environment variables:\n");
	while(*env) {
		printf("\tenvp[%2d] = %s\n", i++, *env);
		env++;
	}

	return 0;
}
