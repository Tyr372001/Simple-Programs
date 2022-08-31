#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int front;
int rear;
int queue[SIZE];

void initialise(){
    front = rear = -1;
}

void enQueue(int data){
    if(rear==SIZE-1){
        printf("max limit reached\n");
    }
    else{
        queue[++rear] = data;
        if(rear==0){
            front = 0;
        }
    }
}

int deQueue(){
    int data;
    if(rear==-1){
        printf("Dequeue Unsuccessfull (no data to dequeue)->!!\n");
        return 0;
    }
    if((front==rear)&(rear==(SIZE-1))){
        data = queue[front];
        initialise();
        return data;
    }
    else{
        data = queue[front];
        queue[front++] = -1;
        return data;
    }
}

void display(){
    for(int i = front; i<=rear;i++){
        printf("%d\n",queue[i]);
    }
}

int main(){
    int flag;
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






