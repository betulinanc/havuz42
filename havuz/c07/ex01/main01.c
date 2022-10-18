#include <stdio.h>

int    *ft_range(int min, int max);

int main(){
	int *d;
	int i = 0, min = 12, max = 21;
	d = ft_range(min, max);
	while (i < max - min){
		printf("%d ", d[i]);
		i++;
	}
	return 0;
}
