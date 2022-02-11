#include <stdio.h>
#include <string.h>

int main() {
	int n;
	char line[100];

	scanf("%s", line);
	n = strlen(line);

	char str[n];
	int i, j;
	
	for(i = 0; i < n; i++) {
		str[i] = line [i];
		printf("%c ", str[i]);
	}

	printf("\n");

	for(j = 0; j < n; j++) {
		int count = 0;
		for(i = 0; i < n; i++) {
			if(str[j] - str[i] == 0)
				count++;
		}
		if(count == 1)
			printf("( ");
		else printf(") ");
	}

	return 0;

}
