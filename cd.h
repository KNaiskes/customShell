#include <stdio.h>
#include <unistd.h>

void cd() {
	char path[128];

	printf("Enter path:");
	scanf("%s",path);

	chdir(path);
}

