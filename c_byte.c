
#include "libft.h"

int c_byte(int n)
{
    unsigned char *s = (unsigned char *)&n;
    int j = 0x0,result = 0,coef = 1;
    int sign = 0x1;
    if (n < 0)
    {
        n = ~n + 0x1;
        sign *= -1; 
    }   
    while (j++ < sizeof n)
    {
        result += (coef * *s++);
        coef *= 0x100;
    }
    if (sign > 0)
        return result;
    return result * -1;
}
int main(int argc, char **argv)
{
    int num = ft_atoi(*(++argv));
    printf("%d", c_byte(num));
}