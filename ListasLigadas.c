#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura do nó da lista ligada
struct Node {
    int data;
    struct Node* next;
};

// Função para criar um novo nó
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int main() {
    // Criação dos nós da lista ligada
    struct Node* head = createNode(2);
    struct Node* second = createNode(4);
    struct Node* third = createNode(6);

    // Conexão dos nós para formar a lista ligada
    head->next = second;
    second->next = third;

    // Inserção de um novo nó no final da lista ligada
    struct Node* newTail = createNode(8);
    third->next = newTail;

    // Impressão dos valores dos nós da lista ligada
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }

    return 0;
}
