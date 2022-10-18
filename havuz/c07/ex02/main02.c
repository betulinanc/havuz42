#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int main(){
	int *d, len;
	int min = 12, max = 21, i = 0;
	len = ft_ultimate_range(&d, min, max);
	while (i < len){
		printf("%d ", d[i]);
		i++;
	}
	return 0;
}
