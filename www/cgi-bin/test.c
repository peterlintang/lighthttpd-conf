/*
 * for test lighttpd's cgi 
 */

#include <stdio.h>
#include <stdlib.h>

#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


int main(int argc, char *argv[])
{
/*
	int i;
	int fd = -1;
	fd = open("args.txt", O_WRONLY|O_CREAT);
	if (fd < 0) {
		exit(-1);
	}

	for (i = 0; i < argc; i++) {
		write(fd, argv[i], strlen(argv[i]));
		write(fd, "\n", 1);
	}
*/

	printf("Content-type: texthtml\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("<html><head><title>shell test</title></head>\n");
	printf("<body>\n");
	printf("hello, world wwwaaa\n");
	printf("<br><br>done!\n");
	printf("</body></html>");
	exit(0);
}
