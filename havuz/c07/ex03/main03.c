char	*ft_strjoin(int size, char **strs, char *sep);

#include <stdio.h>

int main(int ac, char **argv)
{	
    printf("%s", ft_strjoin(ac, argv, " b "));
}
