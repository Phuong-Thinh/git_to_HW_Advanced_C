#include<stdio.h>
#include<stdlib.h>



float tof(char *str){
    float val=0;
    float val_float=0;
    float p=0;
    float chia=1;
    for (int i = 0; &str[i] != "\0"; i++)
    {
        int j;
        if (&str[i] !="."&& (int)str[i] >= 48&& (int)str[i] <= 57)
        {
            val=val*10+(str[i]-48);
        }
        else if (&str[i] == ".")
        {
            for ( j = i+1; str[j]>=48&&str[j]<=57&& str != "\0"; j++)
            {
                chia = chia * 10;
                val_float=(val_float*10+(str[j]-48))/chia;
            }
            val=val+(val_float/(10^j));
            return val;
            break;
        }
        
    }
}

int main(){
    /* TEST*/
    printf("\n Test");
    char *pt=NULL;
    char arr[]="70.215 0.7";
    char **pt2;
    float f1 = strtof(arr,&pt );
    float f2 = strtof(pt, NULL);
    printf("\n %.3f", f1);
    printf("\n %.1f", f2);

    /*------------*/
    char  *str ="7.15thinh";
    float val = tof(str);
    printf("\n %.2f", val);
    return 0;
}