#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<string.h>

void readCommand() {
	char *command;
	size_t buffer_size= 255;
	size_t get_command;

	command = (char *) malloc(buffer_size * sizeof(char));
	if(command == NULL) {
		perror("buffer allocation failed\n");
		exit(EXIT_FAILURE);
	}
	printf(" -> ");
	get_command = getline(&command, &buffer_size, stdin);
	
	command[strcspn(command, "\n")] = 0;

	if(strcmp(command, "test") == 0) {
		printf("this is a test\n");
	} else {
		printf("this is still a test\n");
	}
}


int main(int argc, char *argv[])
{
	while(1) {
		readCommand();
	}



	return 0;
}


