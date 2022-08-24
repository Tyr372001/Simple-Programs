#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
}node;

node* createNode(int data){
    node* head = (node*)malloc(sizeof(node));
    head->data = data;
    head->next = head;
    head->prev = head;

    return head;
}
void insert_NodeAt_end(int data, node* head){
    node* temp = (node*)malloc(sizeof(node));
    temp->next = head;
    temp->prev = NULL;
    node* ttm = head;
    while(ttm->next!=head){
        ttm = ttm->next;
    }
    ttm->next = temp;
    temp->prev = ttm;
    head->prev = temp;
}
int main(){
    node* head = createNode(10);
    insert_NodeAt_end(66,head);
}
