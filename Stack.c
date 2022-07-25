#include <stdio.h>
#include <stdlib.h>

typedef int item; //kieu du lieu
typedef struct_NODE
{
    item Data; //du lieu
    struct _NODE *Next; //link
} Node;
typedef struct
{
    Node *Top;
} Stack;

/*------------------------------------*/
void Init (Stack* S) //khoi tao Stack rong
{
    S->Top = NULL;
}
 
int IsEmpty(Stack S) //kiem tra Stack rong
{
    return (S->Top == NULL);
}