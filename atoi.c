#include <stdio.h>


/* BAI TAP atoi ; atof*/
/* tu "123thinh" xuat 123*/
int atoi(char *str){
    int val;
    for (int i = 0; str != NULL; i++)
    {
        if (str[i]>= 48 && str[i]<= 57) // 0- 9
        {
            val=val*10+(str[i]-48);
        }
        else{
            break;
        }
    }
    
    return val;
}
int main(){

    char str[]="123thinh";
    
    printf("%d",atoi(str));
    return 0;
}
    
