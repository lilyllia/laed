#include <stdio.h>

//aula do dia 19 de fevereiro de 2026, quinta-feira
int comparacoes = 0;  // Contador global
int trocas = 0;       // Contador global

void minidesafio();

void inverter();

//desafio extra: bubbleSort invertido
void troSelbbub(int v[], int n){
    int i, j, aux, houveTroca;

    trocas = 0; //só por segurança
    comparacoes=0; //só por segurança

    for (i=0; i<n-1; i++){
        houveTroca=0;
        for(j=0; j<n-1-i;j++){ //se não subtrair 1 e i o vscode EXPLODE pq tenta acessar v[n] (nao existe)
            if(v[j]<v[j+1]){ //literalmente so trocar o sinal da comparacao.
                aux = v[j];
                v[j]=v[j+1];
                v[j+1]=aux;

                trocas++;
                houveTroca = 1; //early stop
            }
            comparacoes++;
        }
        if(!houveTroca){
            break;
        }
    }
}

void bubbleSort(int v[], int n) {
    if(n==0 || v==NULL){
        return;
    }
    int i, j, aux, houveTroca;

    trocas = 0; //só por segurança
    comparacoes=0; //só por segurança

    for (i=0; i<n-1; i++){
        houveTroca=0;
        for(j=0; j<n-1-i;j++){ //se não subtrair 1 e i o vscode EXPLODE pq tenta acessar v[n] (nao existe)
            if(v[j]>v[j+1]){
                aux = v[j];
                v[j]=v[j+1];
                v[j+1]=aux;

                trocas++;
                houveTroca = 1; //early stop
            }
            comparacoes++;
        }
        if(!houveTroca){
            break;
        }
    }
}

void imprimirVetor(int v[], int n) {
    for(int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
}

int main(){
    int dados[] = {64, 34, 25, 12, 22, 11, 90};
    int n = 7, teste;

    printf("\n");

    printf("Vetor original: ");
    imprimirVetor(dados, n);
    
    troSelbbub(dados, n);
    
    printf("Vetor ordenado: ");
    imprimirVetor(dados, n);
    printf("Comparações: %d | Trocas: %d\n", comparacoes, trocas);
    

    printf("\\n1 - BubbleSort decrescente.\n2 - Minidesafio.\n\nnEscolha qual teste fazer: ");
    scanf("%d", &teste);
    switch (teste)
    {
    case 1:
        troSelbbub(dados, n);
        imprimirVetor(dados, n);
        break;
    case 2:
        minidesafio();
        break;
    default:
        break;
   

    
    
    return 0;
    }
}

void inverter(){
    int n = 5;
    int vazio[n];
    int unitario[]= {1};
    int ordenado[] = {1,2,3,4,5};
    int inverso[] = {5,4,3,2,1};
    int repetidos[] = {3,1,3,2,3};
}

void minidesafio(){
    int n = 5;
    int vazio[n];
    int unitario[]= {1};
    int ordenado[] = {1,2,3,4,5};
    int inverso[] = {5,4,3,2,1};
    int repetidos[] = {3,1,3,2,3};

    printf("\n\n ================================= \n\n");
    printf("MINIDESAFIO:\n\n");
    printf("\n ================================= \n\n");

    printf("Vetor VAZIO: ");
    imprimirVetor(vazio, 0);
    
    bubbleSort(vazio, 0); //passa 0 ou n?
    
    printf("Vetor ordenado: ");
    imprimirVetor(vazio, 0);
    printf("Comparações: %d | Trocas: %d\n", comparacoes, trocas);
    
    printf("\n ----------------------------------- \n\n");

    printf("Vetor UNITÁRIO: ");
    imprimirVetor(unitario, 1);
    
    bubbleSort(unitario, 1);
    
    printf("Vetor ordenado: ");
    imprimirVetor(unitario, 1);
    printf("Comparações: %d | Trocas: %d\n", comparacoes, trocas);

    printf("\n ----------------------------------- \n\n");

    printf("Vetor ORDENADO: ");
    imprimirVetor(ordenado, n);
    
    bubbleSort(ordenado, n);
    
    printf("Vetor ordenado: ");
    imprimirVetor(ordenado, n);
    printf("Comparações: %d | Trocas: %d\n", comparacoes, trocas);

    printf("\n ----------------------------------- \n\n");

    printf("Vetor INVERSO: ");
    imprimirVetor(inverso, n);
    
    bubbleSort(inverso, n);
    
    printf("Vetor ordenado: ");
    imprimirVetor(inverso, n);
    printf("Comparações: %d | Trocas: %d\n", comparacoes, trocas);

    printf("\n ----------------------------------- \n\n");

    printf("Vetor REPETIDOS: ");
    imprimirVetor(repetidos, n);
    
    bubbleSort(repetidos, n);
    
    printf("Vetor ordenado: ");
    imprimirVetor(repetidos, n);
    printf("Comparações: %d | Trocas: %d\n", comparacoes, trocas);
    printf("\n ----------------------------------- \n");
}

void exercicio(){
    int n = 20;
    int normal[] = {13,3,2,234,34,4,9,56,6,55,0,2,55,4,75,7,3,25,76,3};
}