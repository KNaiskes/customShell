#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<string.h>

int validCommand(const char * command) {
	char * valid_commands[] = {"pwd","cd","rm"};
	int exists = -1;

	int len = sizeof(valid_commands) / sizeof(valid_commands[0]);

	int i;

	for(i = 0; i < len; i++) {
		if(strcmp(valid_commands[i], command) == 0) { 
			printf("execute command : %s\n",command);
			exists = 0;
			break;
		} 
	}
	return exists;
}
	
const char * readCommand() {
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

	return command;
}



int main(int argc, char *argv[])
{


	return 0;
}


