#include <stdio.h>


void HoanVi(int *x, int *y )
{
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}
void SapXep( int a[], int n)
{
    for (int i = 0; i < n ; i++)
    {
        for (int j =i+1; j < n; j++)
        {
            if (a[i] <= a[j])
            {
                HoanVi(&a[i],&a[j]);
            }
        }
    }
    printf("\n");
}
void xuat(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n---------------------- ");
}

void xuat_char(char a[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%c",a[i]);
    }
    printf("\n---------------------- ");
}

int dem(char str[], int n) // so sanh cho chuoi 100 ky tu
{
    int dem =0;
    for (int i = 0; i < n; i++)
    {
       if(str[i] == " "&&str[i+1] != " ") dem++;
       if (str[i]!= " ")dem++;
       
    }
    return dem;
}
void nhap(int mang[], int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&mang[i]);
        printf("Array[%d] = %d\n",i,mang[i]);
    }  
}

int main (){

    int n;
    printf("max mang: "); 
    scanf( "%d", &n );
    printf("\n");
    int a[n];
    nhap(a,n);
    SapXep(a , n);
    xuat(a , n); 

    char a1[] = "Hello world";
    char a2[] = "Hello world!!!";
    char a3[] = "Hello world!!";

    
    int L1 = dem(a1, sizeof a1);
    int L2 = dem(a2, sizeof a2);
    int L3 = dem(a3, sizeof a3);
    printf("\nmang dai nhat la:");
    if (L1>L2&&L1>L3) xuat_char(a1, sizeof a1);
    else if (L2>L1&&L2>L3) xuat_char(a2, sizeof a2);
        else xuat_char(a3, sizeof a3);
//    printf("\n%d",L1);
//    printf("\n%d",L2);
//    printf("\n%d",L3);
}
