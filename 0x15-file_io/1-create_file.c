#include "main.h"
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
/**
* create_file - creates a file
*
* @filename:pointer
* @textcontent:pointer
* Return:1 on success
*/
int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t bytes_written;
if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);    
if (fd == -1)
return (-1);
if (text_content != NULL)
{
bytes_written = write(fd, text_content, strlen(text_content));
if (bytes_written == -1)
{
close(fd);
return (-1);
}
}
close(fd);
return (1);
}
