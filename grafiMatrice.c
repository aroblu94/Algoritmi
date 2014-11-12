/* Esercizio 1a
 * Implementazione di grafi
 * con matrici di adiacenza
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct graph {
    int n, m;   /* n vertici e m lati */
    int **A;    /* Matrice di adiacenza */
} *Graph;

Graph graph_new (int n);    /* Crea grafo con n nodi */
void graph_destroy (Graph g);   /* Distrugge il grafo */
void graph_edgeinsert (Graph g, int v, int w);  /* Inserisce l'arco (v,w) nel grafo g */
Graph graph_read (void);    /* Legge un grafo da std input */
void graph_print (Graph g); /* Stampa grafosu std output */

int main () {
    int n;
    scanf("%d", &n);
    Graph g = graph_new(n);
    return 0;
}

Graph graph_new (int n) {
    int i;
    Graph g;
    /* alloca spazio per una struttura Graph */
    g = malloc (sizeof(struct graph));
    /* alloca spazio per un array di n puntatori a int */
    g->A = calloc (n, sizeof(int *));

    for (i = 0; i < n; i++) {
        /* alloca lo spazio per l'array A[i] di n interi, inizialmente nulli */
        g->A[i] = calloc (n, sizeof(int));
    }
    g->n = n;
    return g;
}
