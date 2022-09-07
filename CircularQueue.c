#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10

int front;
int rear;
int queue[MAX_SIZE];

void initialise(){
    front = rear = -1;
}

void enQueue(int data){
    if(front==-1){
        front = rear = 0;
        queue[rear] = data;
    }
    else{
        if((rear+1)%MAX_SIZE==front){
            printf("Queue full! \n");
        }
        else{
            rear=(rear+1)%MAX_SIZE;
            queue[rear] = data;
        }
    }
}

int deQueue(){
    int data;
    if(front==-1){
        printf("Queue is empty\n");
    }
    else if(front==rear){
        data = queue[front];
        printf("%d\n", data);
        front = rear = -1;
    }
    else{
        int data = queue[front];
        queue[front] = 0;
        front = (front+1)%MAX_SIZE;
        return data;
    }
}

int main(){
    int data;
    initialise();

    while(1){
        printf("1 -> Enqueue \n2-> Dequeue \n3->Exit\n\n");
        int choice;
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter the data to enqueue : ");
                scanf("%d",&data);
                printf("\n");
                enQueue(data);
                break;

            case 2:
                printf("Dequeue used...\n");
                data = deQueue();
                if(data==0){
                    printf("NULL\n");
                }
                break;
            case 3:
                printf("Developed by Subhradeep Sarkar 718\n");
                goto exit;
                break;

            default:
                printf("'Invalid choice!!\n");
                continue;
        }
        printf("Do you want to continue :\n 1 -> yes 0 -> no\n");
        int cont;
        scanf("%d", &cont);
        if(cont==1){
            continue;
        }
        else{
            break;
        }
        exit: break;
    }
}
