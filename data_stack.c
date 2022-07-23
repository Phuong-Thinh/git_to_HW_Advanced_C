#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE ;

struct list{
    //thanh phan dau danh sach
    NODE *pHead;
    //thanh phan cuoi danh sach
    NODE *pTail;
};
typedef struct list LIST;

void KhoiTao(LIST *ds){
    //dat dia chi dau danh sach bang NULL
    ds->pHead = NULL;
    //dat dia chi cuoi danh sach bang NULL
    ds->pTail = NULL;
}
int KiemTraRong(LIST ds){
    //neu phan tu dau danh sach NULL
    if (ds.pHead == NULL){
        //tra ve 1 la co NULL
        return 1;
    }
    //truong hop nguoc lai tra ve khong null
    return 0;
}
NODE* TaoNode(int x) {
    //tao mot node p moi
    // NODE *p;
    // p = KiemTraRong;// co gai tri 0 hoac 1
    //neu p==NULL thi khong du bo nho
    if (!KiemTraRong) {
        printf ("KHONG DU BO NHO");
        return NULL;
    }
    //gan thanh phan data = x
    p->data=x;
    //gan con tro next = NULL
    p->next=NULL;
    //tra ve node p da tao
    return p;
}

 NODE *top=NULL; // bien kiem tra
int GiaTriDau()  
{    
    if (!KiemTraRong)  // !0=1 la da day
        return top->data;  
    else
        exit(1);  
}
// bien gia tri dau hien tai co the lay tu pHead->data;

int main(){

    //khai bao mot danh sach
    LIST ds;
    //khoi tao danh sach
    KhoiTao(&ds);
    //kiem danh sach co rong hay khong
    KiemTraRong(ds);

}