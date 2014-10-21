// Esercizio 1.3
#include <stdio.h>
#include <stdbool.h>

int main () {
	char string[100], lastChar, c;
	int i, j, k, q, p;
	i = 0;
	while(true) {
		scanf("%c", &c);
		if(c != '\n') {
			string[i] = c;
			i++;
		}
		else
			break;
	}
	i--;
	lastChar = string[i];
	j = i;
	for (k = 0; k <= i; k++) {
		if(string[k] == lastChar)
			j--;
	}

	char string2[j];
	p = 0;
	for (k = 0; k <= i; k++) {
		if(string[k] != lastChar) {
			for (q = p; q < j; q++) {
				string2[q] = string[k];
			}
			p++;
		}
		else
			continue;
	}

	// printing the new array
	for (k = 0; k < j; k++) {
		printf("%c", string2[k]);
	}
	printf("\n");
	return 0;
}
