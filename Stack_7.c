#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	int data;
	struct Node* next;
}node;

node* top;
void initialise(){
	top = NULL;
}

node* createNode(int data){
	node* temp = (node*)malloc(sizeof(node));
	temp->data = data;
	temp->next = NULL;
	return temp;
}

node*  insert_NodeAt_front(int data, node* head){
	node* temp = createNode(data);
	if(head==NULL){
		head = temp;
	}
	else{
		temp->next = head;
		head = temp;
		return head;
	}
}

node* delete_NodeAt_front(node* head){
	node* temp = head;
	head = head->next;
	free(temp);
	return head;
}

void display(node* head){
	node* ttm = head;
	while(ttm!=NULL){
		printf("[%d] ", ttm->data);
		ttm = ttm->next;
	}
	printf("\n");
}

int peek(){
	if(top == NULL){
		return 0;
	}
	else{
		return top->data;
	}
}

void push(int data){
	if(top==NULL){
		top = createNode(data);
	}
	else{
		node* temp = insert_NodeAt_front(data,top);
		top = temp;
	}
}

int pop(){
	if(top==NULL){
		return 0;
	}
	else{
		int data = top->data;
		node* temp = delete_NodeAt_front(top);
		top = temp;
		return data;
	}
}

int main(){
	printf("Program started\nplease follow the instruction below\n\n");
	int choice;
	int data;
	while(1){
		printf("Enter\t 1. to push\n\t 2. to pop\n\t 3. to peek\n\t 0 to exit\n\n");
		printf("\tMy choice is : ");
		scanf("%d", &choice);
		printf("\n");
		
		switch(choice){
			case 1:
				printf("\nEnter the data to push : \n");
				scanf("%d",&data);
				push(data);
				printf("Stack has been updated successfully\n\n");
				break;
			
			case 2:
				data = pop();
				if(data==0){
					printf("Stack Underflow, nothing to pop\n\n");
					continue;
				}
				else{
					printf("%d is popped from Stack successfully\n\n", data);
					break;
				}
				break;
			
			case 3:
				if(peek()==0){
					printf("Stack is empty, nothing to peek!!\n\n");
					continue;
				}
				else{
					printf("stack[top] = [%d]\n\n", peek());
					break;
				}
				break;
			
			case 0: 
				goto exit;
				break;
			
			default:
				printf("Sorry Wrong choice\n\n");
				continue;
		}
		printf("\nDo tou wish you continue?\n1 as yes 0 as no\n");
		int contd;
		scanf("%d", &contd);
		if(contd == 1)
			continue;
		else{
			exit:
				printf("\tProgram exited successfully!\n");
				printf("\n\tImplementation of stack with Singly Linked List\n");
				printf("\n\tDeveloped by [Subhradeep Sarkar]\n\tcontact info\n\te-mail:subhradeep345@gmail.com\n\tph-no. :(+91) 7596833428\n\n\n");
				break;
			break;
		}
	}
	
}



