#include <fcntl.h>
#include "libft.h"
#include <stdio.h>
int main()
{
    char *buff;
    char *p = "amine";
    int f = open("file.txt", O_CREAT | O_RDWR , 0664);
    ft_putendl_fd("amine", f);
    close(f);
    f = open("file.txt", O_RDONLY ,0664);
    read(f, buff,10000);
    write(1, buff,6);
    // 	char c;

	// int i = ft_strlen(p);
	// while(i--)
	// {
	// 	read(f, &c, 1);//&c
	// 	write(1, &c,1);
	// 	write(1, "\n-",3);
	// }
	// read(f, buff,30);
	// printf("\n%s",buff);

}