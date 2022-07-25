#include <stdio.h>
#include <stdint.h>

#define bool uint8_t
#define true 1
#define false 0

#define size 8 // size array
int Queue[size];
int front = -1;
int rear = 0; // my data Queue is 5
/*Queue Basic*/

bool IsEmpty(){
    
    return (front==rear);//1: Array have not data; 0 have data
       
}


void DeQueue(){
    if (IsEmpty())
    {
        printf("\n Array have not data"); 
    }
    else
    {
        printf("\nElement have been delete: %d ", Queue[front]);
        Queue[front] = 0; // delete the front element 
        front++; // move to next cell
    }
}


void EnQueue(int element){
    if (rear==size)
    {
        printf("\n Array Overflow");
    }
    else
    {
        Queue[rear]=element;
        rear++;
    }
}


void Front(int Queue[]){ // read the element Queue[front] but don't delete it
    printf("\nfront = %d;  Queue[front] = %d", front, Queue[front]);
}


int InputElement(int element)
{
    printf("\n New Queue[rear] = "); scanf("%d", &element);
    return element;
}



void OutputArray(int Queue[]){
    if (IsEmpty())
    {
        printf("\n Queue have not data");  
    }
    for (int i = front; i < rear; ++i)
        {
            printf("\n element a%d = %d",i,Queue[i]);
        }
    
}

int main(){
    
    int element = 0;
    int loop = 1;
    int operate;
    

    while ( loop )
    {
        //Notification: thong bao
        printf("case 1: InputElement to EnQueue\n");
        printf("case 2: DeQueue\n");
        printf("case 3: The front element\n");
        printf("case 4: OutputData\n");
        printf("case 0: Exit\n");
        printf("case number: "); scanf("%d", &operate);

        switch (operate)
        {
            case 1:
                element = InputElement(element);
                EnQueue(element);
                break;
            case 2:
                DeQueue();
                break;
            case 3:
                Front(Queue);
                break;
            case 4:
                OutputArray(Queue);
                break;
            case 0:
                loop = 0;
                break;
            default:
                printf("Error");     
                break;
        }
    }
    
}
