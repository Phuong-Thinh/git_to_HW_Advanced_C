#include <stdio.h>
#include <stdint.h>
#include <String.h>
int test_strtof(char *Str,char **Ptr){
    for(int i=0;;i++){
        if(*(Str+i)>=48 && *(Str+i)<=57){
            int val=0;
            for(int j=0;;j++){
                if(*(Str+i+j)>=48 && *(Str+i+j)<=57) val=val*10 + (*(Str+i+j)-48);
                else break;
            }
            return val;
        }
    }
}
int main(int argc, char const *argv[])
{
    char str[100];
    strcpy(str,"58ttt2 ");
    char *ptr;
    printf("%d",test_strtof(str,&ptr));
    return 0;
}