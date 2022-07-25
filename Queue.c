#include <stdio.h>
#include <stdint.h>

#define bool uint8_t
#define true 1
#define false 0




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


void InputArray(int size, int Queue[]){
    for (int i = 0; i < size; ++i)
    {
        printf("\nNhap pt a%d = ",i); 
        scanf("%d",&Queue[i]);
    }

}


void OutputArray(int size, int Queue[]){
    for (int i = 0; i < size; ++i)
        {
            printf("\n phan tu a%d = %d",i,Queue[i]);
        }
    
}

int main(){
    int size  = 5; // size array
    int Queue[size];
    int front = 0;
    int rear = size - 1;
    InputArray(size, Queue);
    OutputArray(size, Queue);
}
