#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct {
    long long comparacoes;
    long long trocas;
} Metrics;

static void print_array(const int v[], int n) {
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", v[i]);
        if (i < n - 1) printf(", ");
    }
    printf("]");
}

static void swap_int(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void insertion_sort(int v[], int n, Metrics *metrics){
    int i, j, chave;
    for(i = 1; i<n ; i++){
        chave = v[i];
        j = i;

        while (j > 0 && chave < v[j-1]){
            v[j] = v[j-1];
            metrics->trocas++;
            metrics->comparacoes++;
            j--;
        }
        metrics->comparacoes++;
        //se a chave for maior que o v[j-1]
        v[j] = chave;
    }
}

void testar(int v[], int n){
    Metrics m = {0,0};

    printf("\nVetor original: ");
    print_array(v, n);

    insertion_sort(v, n, &m);

    printf("\nVetor ordenado: ");
    print_array(v, n);
    printf("\nComparações: %d | Trocas: %d", m.comparacoes, m.trocas);
}

int main(){
    setlocale(LC_ALL, "portuguese");
    int n = 6;
    int A[] = {5, 2, 4, 6, 1, 3};
    int B[] = {1, 2, 3, 4, 5, 6};
    int C[] = {6, 5, 4, 3, 2, 1};

    testar(A, n);
    printf("\n");
    testar(B, n);
    printf("\n");
    testar(C, n);
    printf("\n");
    
    return 0;
}
