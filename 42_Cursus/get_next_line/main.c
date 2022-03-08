#include "get_next_line.h"

int main()
{
	int fd;
    fd = open("txt.txt", O_RDONLY);
    
    printf("%s",get_next_line(fd));
    printf("%s",get_next_line(fd));
    printf("%s",get_next_line(fd));
}
