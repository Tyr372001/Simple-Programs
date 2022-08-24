#include <stdio.h>
#define SIZE 5

int top = -1;
int stack[SIZE];

int peek(){
    if(top == -1){
        return 0;
    }
    else
        return stack[top];
}

void push(int data){
    if(top == SIZE){
        printf("Stack Overflow!!\n");
        return;
    }
    else{
        stack[++top] = data;
    }
}

int pop(){
    if(top == -1){
        printf("Stack Underflow\n");
        return;
    }
    else{
        int temp = stack[top];
        stack[top--] = 0;
        return temp;
    }
}

void display(){
    for(int i = 0;i<SIZE;i++){
        printf("[%d] ", stack[i]);
    }
    printf("\n");
}


int main(){
    int check = 0;
    while(1){
        printf("Push = 1 or pop = 0 peek = 11 display stack = 9 otherwise new number exit\n");
        int choice;
        scanf("%d", &choice);
        if(choice == 1){
            printf("Enter the data int the Stack : \n");
            int data;
            scanf("%d",&data);
            push(data);
            check++;
            if(check<=SIZE){
                continue;
            }
            else{
                printf("Stack max limit reached!!\n");
                printf("Must pop to Accomodate!!\n");
            }
        }
        else if(choice == 0){
            if(peek()==0){
                printf("Stack underflow\n");
            }
            else{
                printf("[%d] is popped\n", pop());
            }
        }
        else if(choice == 11){
            if(peek()==0){
                printf("Stack is empty\n");
            }
            else
                printf("stack[top] = %d\n", peek());
        }

        else if(choice == 9){
            display();
        }

        else{
            break;
        }
    }
}
