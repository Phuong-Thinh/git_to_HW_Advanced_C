#include <stdio.h>
#include <stdint.h>

#define bool uint8_t
#define true 1
#define false 0


/*Queue Basic*/

bool IsEmpty(int front, int rear){
    
    return (front==rear);
    // if (front == rear)
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }
    
}


void DeQueue(){
    
}


void EnQueue(){

}


void Front(){

}


void InputArray(int Queue[], int rear, int front)
{
    for (rear ; rear != front; rear++) // when rear == front is full
    {
        printf("\nInput Queue a%d = ",rear);  // pt 1->5
        scanf("%d",&Queue[rear]);   //array 0->4'
    }
    
}


void OutputArray(int Queue[], int front, int rear){
    for (int i = front; i < rear; ++i)
        {
            printf("\n element a%d = %d",i,Queue[i]);
        }
    
}

int main(){
    int size  = 5; // size array
    int Queue[size];
    int front = 0;
    int rear = size - 1;
    
    InputArray(Queue, front, rear);
    OutputArray(Queue, front, rear);
}
