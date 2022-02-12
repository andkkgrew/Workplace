#include <stdio.h>
#include <string.h>

int main() {
	char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
	char str[100];
	int i, j, count;
	scanf("%s", str);
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
