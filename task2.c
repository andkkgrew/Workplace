#include <stdio.h>
#include <string.h>

int main() {
	char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
	const int size = 256;
	char str[size];
	int i, j, count;
	i = 0;
	fgets(str, size, stdin);
	count = 0;
	
	while (str[i] != '\0') {
		j = 0;
		while(j < 5) {
			if(str[i] - vowels[j] == 0)
				count++;
			j++;
		}
		i++;
	}
	printf("%d\n", count);

	return 0;
}
