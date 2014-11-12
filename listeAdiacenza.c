#include <stdio.h>
#include <stdlib.h>
typedef struct node {   /* Nodo di lista di adiacenza */
    int v;
    struct node *next;
} Node;

typedef struct graph {  /* Struttura associata ad ogni grafo */
    int V;              /* Numero di vertivi */
    int E;              /* Numero di archi */
    Node **A;           /* Array di liste di adiacenza */
} Graph;

/* Crea grafo */
Graph *creategraph (int nv, int ne) {
    Graph *g = malloc(sizeof(Graph));
    if (!g) {
        printf("Errore di allocazione\n");
        exit(-1);
    }
    g->E = ne;
    g->V = nv;
    if(!(g->A = calloc(nv, sizeof(Node)))) {
        printf("Errore di allocazione\n");
        exit(-2);
    }
    return g;
}

int main () {
    int nv, ne;
    Graph *g;
    printf("Inserisci il numero di vertici e il numero di archi\n");
    scanf("%d%d", &nv, &ne);
    g = creategraph(nv, ne);
    return 0;
}
