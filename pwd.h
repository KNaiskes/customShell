#include <stdio.h>
#include <unistd.h>

void pwd() {
	char pwd[128];

	if(getcwd(pwd,sizeof(pwd)) != NULL) {
		printf("%s\n",pwd);
	}
	else {
		perror("Something gone wrong in pwd\n");
	}
}
