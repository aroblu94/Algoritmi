// Esercizio 2.3
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main () {
	char m[10][10], current_char;
	int x, y, i;
	int direction;
	bool fatto, prova1, prova2, prova3, prova4 = false;

	srand(time(NULL));

	// Inizializzo la matrice con dei punti
	for (y = 0; y < 10; y++) {
		for (x = 0; x < 10; x++)
			m[x][y] = '.';
	}

	// Posizione iniziale
	x = y = 0;
	current_char = 'A';
	m[x][y] = current_char;
	current_char = current_char + 1;

	// Random walk ... (0 su - 1 dx - 2 giu' - 3 sx)
	for (i = 0; i < 25; i++) {
		direction = rand()%4;
		if (direction == 0) {
			if ((y-1) >= 0 && m[x][y-1] == '.'){
				y = y-1;
				m[x][y] = current_char;
			}
			else {
				i--;
				prova1 = true;
				if (prova1 == true && prova2 == true && prova3 == true && prova4 == true)
					break;
				continue;
			}
		}
		else if (direction == 1) {
			if ((x+1) <= 9 && m[x+1][y] == '.') {
				x = x+1;
				m[x][y] = current_char;
			}
			else {
				i--;
				prova2 = true;
				if (prova1 == true && prova2 == true && prova3 == true && prova4 == true)
					break;
				continue;
			}
		}
		else if (direction == 2) {
			if ((y+1) <= 9 && m[x][y+1] == '.') {
				y = y+1;
				m[x][y] = current_char;
			}
			else {
				i--;
				prova3 = true;
				if (prova1 == true && prova2 == true && prova3 == true && prova4 == true)
					break;
				continue;
			}
		}
		else if (direction == 3) {
			if ((x-1) >= 0 && m[x-1][y] == '.') {
				x = x-1;
				m[x][y] = current_char;
			}
			else {
				i--;
				prova4 = true;
				if (prova1 == true && prova2 == true && prova3 == true && prova4 == true)
					break;
				continue;
			}
		}
		prova1 = prova2 = prova3 = prova4 = false;
		current_char = current_char + 1;
	}

	// Stampo la matrice
	for (y = 0; y < 10; y++) {
		printf("[");
		for (x = 0; x < 10; x++) {
			printf(" ");
			printf("%c", m[x][y]);
			printf(" ");
		}
		printf("]\n");
	}
	return 0;
}
