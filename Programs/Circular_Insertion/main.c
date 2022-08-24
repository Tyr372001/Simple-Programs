#include <stdio.h>
#include <stdlib.h>

typedef struct Circular_Insertion
{
 int data;
 struct Circular_Insertion *node;
}node;

node *head=NULL;
node *last=NULL;

void insert_at_last(int data)
{
 node *temp2=(node*)malloc(sizeof(node));
 temp2->data=data;
 temp2->next=head;
 node *temp = head;
 while(temp!=last)
 {
  temp=temp->next;
 }
 last->next=temp2;
 temp2=last;
 free(temp);
}

void insert_at_the_beginning(int data)
{
 node *temp2=(node*)malloc(sizeof(node));
 temp=head;
 temp2->next=head;
 temp2=head;
 while(temp!=head)
 {
  temp=temp->next;
 }
 last->next=head;
 free(temp);
}

void insert_at_any_position(int data)
{
 temp2=(node*)malloc(sizeof(node));
 temp=head;

}

int main()
{
 return 0;
}
