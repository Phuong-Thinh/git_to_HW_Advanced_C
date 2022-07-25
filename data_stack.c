#include <stdio.h>

/*phan nay cay qua em tham khao cua
https://daynhauhoc.com/t/giup-v-stack-va-queue/15810
nguoi ta viet C++ em sua lai va ghi them chu thi sang c*/
typedef int item; //kieu du lieu
typedef struct NODE
{
    item Data; //du lieu
    NODE *Next; //link
} Node;
typedef struct
{
    Node *Top;
} Stack;
 
void Init (Stack*); //khoi tao Stack rong
int IsEmpty(Stack); //kiem tra Stack rong
void Push(Stack*, item); //them phan tu vao Stack
int Peak(Stack); //Lay phan tu o dau Stack nhung khong xoa
int Pop(Stack*); //Loai bo phan tu khoi Stack
void Input (Stack*); //Nhap Stack
void Output(Stack); //Xuat Stack
Node* MakeNode(item x); //Tao 1 Node

 
void Init (Stack* S) //khoi tao Stack rong
{
    S->Top = NULL;
}
 
int IsEmpty(Stack S) //kiem tra Stack rong
{
    return (S.Top == NULL);
}
 

Node* MakeNode(item x) //tao 1 Node
{
    Node *p = new Node;
    p->Next = NULL;
    p->Data = x;
    return p;
}
 
void Push(Stack* S, item x) //them phan tu vao Stack
{
    Node *p = MakeNode(x);
    p->Next = S->Top;
    S->Top = p;
}
 
int Peak(Stack S) //Lay phan tu o dau Stack nhung khong xoa
{
	return (IsEmpty(S) ? 0 : S.Top->Data);
}
 
int Pop(Stack* S) // Loai bo phan tu khoi Stack
{
    // Prerequisite: S is not empty.

    item x = 0;
    if ( IsEmpty(*S) )
    {
    	printf("\nStack rong");
    } else {
        x = S->Top->Data; //luu lai gia tri
        Node* p = S ->Top ->Next;
    	delete S ->Top;
        S->Top = p; //Xoa phan tu Top
    }
    return x;
}
 
void Input(Stack* S) //nhap danh sach
{
    int i = 0;
    item x;
    do
    {
        printf("Nhap phan tu thu %d: ", ++i);
        scanf("%d", &x);
        if (x) Push(S, x);
    } while(x); //nhap 0 de ket thuc
}
 
void Output(Stack S)
{
    Node *p = S.Top;
    while (p)
    {
        printf("%d\t", p->Data);
        p = p->Next;
    }
    printf("\n");
}
#ifdef TEST_STACK

int main()
{
    Stack S;
    Init(&S);
    Input(&S);
    Output(S);
 
    if ( IsEmpty(S) )
	printf("\nStack %srong!", (IsEmpty(S) ? "" : "khong "));

	item x;
    printf("\nNhap phan tu can chen vao DS: ");
    scanf("%d", &x);
    
    Push(&S, x);
    Output(S);
    
    printf("\nXoa phan tu trong Stack: ");
    Pop(&S);
    Output(S);

    printf("\nLay noi dung cua phan tu tai dinh Stack:\n");
    printf("%d\t", Peak(S));
    
    return 0;
}