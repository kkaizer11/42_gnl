# include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "get_next_line.h"

int main()
{
	int fd;
	char *texto;
	int i = 0;
 
	fd = open("fellasInParis", O_RDONLY);
	
	while (i < 88)
	{
		texto = get_next_line(fd);
		printf("%s", texto);
		i++;
	}
}
