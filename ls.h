#include <unistd.h>
#include <dirent.h>
#include <sys/types.h>
#include <string.h>


void ls() {
	struct dirent *pdir;
	DIR *dir;

	const char directory[128];
	printf(" Enter path:");
	scanf("%s",directory);

	dir = opendir(directory);

	if(dir != NULL) {
		while(pdir = readdir(dir)) {
			puts(pdir -> d_name);
		}
		closedir(dir);
	}
	else {
		perror("Could not open the directory\n");
	}
}
