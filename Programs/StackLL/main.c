#include <stdio.h>
#include <stdlib.h>

int top = -1;

typedef struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
}node;

void insert_NodeAt_end(int data, head){
    node* temp = (node*)malloc(sizeof(node));
    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;
    if(head ==NULL){
        head = temp;
    }
    else{
        node* ttm = head;
        while(ttm->next!=NULL){
            ttm = ttm->next;
        }
        ttm->next = temp;
        temp->prev = ttm;
    }
}
void delete_NodeAt_end(int data, head){
    node* ttm = head;
    while(ttm->next != NULL){
        ttm = ttm->next;
    }
    node* temp;
    temp = ttm;
    ttm = ttm->prev;
    fread(temp);
}
int main(){

}
