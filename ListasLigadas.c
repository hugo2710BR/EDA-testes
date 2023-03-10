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
    struct Node* head = createNode(1);
    struct Node* second = createNode(2);
    struct Node* third = createNode(4);
    struct Node* fourth = createNode(5);
    struct Node* fifth = createNode(6);
    struct Node* sixth = createNode(7);
    struct Node* seventh = createNode(8);
    struct Node* eight = createNode(9);


    // Conexão dos nós para formar a lista ligada
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eight;

    // Inserção de um novo nó no final da lista ligada
    struct Node* newTail = createNode(10);
    eight->next = newTail;

    // Impressão dos valores dos nós da lista ligada
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }

    return 0;
}
