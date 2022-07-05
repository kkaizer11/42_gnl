# include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
  int fd;
  char buffer[6000]; //Utilizar apenas *buffer nao funciona
  ssize_t bytes;
 
  fd = open("fellasInParis", O_RDONLY);
  bytes = read(fd, buffer,BUFFER_SIZE);
  buffer[bytes] = '\0';  // Assim eu garanto que sempre no final do buffer eu coloco um byte nulo, caso não ocorra um erro na read.

  printf("%s", buffer);
}
