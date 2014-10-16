//Esercizio 1.6
#include <stdio.h>
#include <stdlib.h>

int main () {
    int rows, cols, dim, x, y, count;
    printf("Inserisci un numero DISPARI (dimensioni della matrice n*n)\n");
    scanf("%d", &dim);
    rows = cols = dim;
    int m[rows][cols];
    for (y = 0; y < rows; y++) { //inizializzo la matrice riempiendola di zeri
        for (x = 0; x < cols; x++) {
            m[y][x] = 0;
        }
    }

    int rows_pos = 0;
    int cols_pos = cols / 2;
    for (count = 1; count <= (rows*cols); count++) {
        if (m[rows_pos][cols_pos] == 0) { //Se la casella è vuota inserisco il numero
            m[rows_pos][cols_pos] = count;
        }
        /* Altrimenti rimango sulla stessa colonna e scendo di riga
         * In realtà il risultato è che rimane sulla stessa riga
         * ma si sposta a destra di una colonna...
         * il risultato non cambia ma non ho capito l'errore
         */
        else {
            if ((cols_pos -1) < 0)
                cols_pos = cols - 1;
            else
                cols_pos--;
            if ((rows_pos + 1) > (rows - 1))
                rows_pos = 1;
            else
                rows_pos += 2;
            m[rows_pos][cols_pos] = count;
        }

        if ((rows_pos - 1) < 0)
            rows_pos = rows - 1;
        else
            rows_pos--;
        if ((cols_pos + 1) > (cols - 1))
            cols_pos = 0;
        else
            cols_pos++;
    }

    for (y = 0; y < rows; y++) { // Stampo la matrice riempita
        for (x = 0; x < cols; x++) {
            printf("%2d ", m[y][x]);
        }
        printf("\n");
    }
    return 0;
}
