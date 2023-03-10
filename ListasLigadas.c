#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura do nó da lista ligada
struct Node {
    int data;   // Valor do node
    struct Node* next;  // apontador para o próximo(next) node
};

// Função para criar um novo nó
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node)); // aloca memória para o novo node
    newNode->data = data; //inicializa o novo node com o valor introduzido nos parametros
    newNode->next = NULL; //inicializa o pointer para o próximo pointer com valor nulo (NULL)
    return newNode; // retorna o pointer para o node criado nos parametros
}

int main() {
    // Criação dos nós da lista ligada
    struct Node* head = createNode(1);  //cria o node com o nome "head" e com o valor 2 na lista
    struct Node* second = createNode(2); // ""
    struct Node* third = createNode(4); // ""
    struct Node* fourth = createNode(5); // ""
    struct Node* fifth = createNode(6); // ""
    struct Node* sixth = createNode(7); // ""
    struct Node* seventh = createNode(8); // ""
    struct Node* eight = createNode(9); // ""


    // Conexão dos nós para formar a lista ligada
    head->next = second;    //Conecta o primeiro node ao segundo
    second->next = third;   // ""
    third->next = fourth;   // ""
    fourth->next = fifth;   // ""
    fifth->next = sixth;    // ""
    sixth->next = seventh;  // ""
    seventh->next = eight;  // ""

    // Inserção de um novo node no final da lista ligada
    struct Node* newTail = createNode(10); //cria um novo node com nome newTail e valor 10 para ser o último
    eight->next = newTail;  //Conecta o oitavo node ao último

    // Impressão dos valores dos nodes da lista ligada
    struct Node* current = head; // cria e inicializa um ponteiro para percorrer a lista pelo inicio
    while (current != NULL) { //Ciclo while para percorer a lista até chegar ao null
        printf("%d ", current->data); //imprime o valor do node durante o ciclo
        current = current->next; //avança para o próximo node
    }

    return 0;
}
