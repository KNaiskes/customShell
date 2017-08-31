#include<unistd.h>
#include<dirent.h>
#include<sys/types.h>

void ls() {
	struct dirent *pdir;
	DIR *dir;
	dir = opendir("");

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
