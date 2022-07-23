#include<stdio.h>
#include<stdlib.h>



double test_atof(char *string){ // tham khảo của Trinh Trinh.
    double result = 0, count = 0;
    for (int i = 0; string[i] != '\0'; i++){
        if (string[i] == '.'){
            count++;
            continue; // bỏ qua câu lên liền kề (if else) rồi count thanh 1 ung với 1/10 và if đúng
        }
        if (count){
            count *= 10;
            result = result + (double)(string[i] - 48)/count;
        } else 
            result = result*10 + (string[i] - 48);
    }
    return result;
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
    printf("\n %.1f \n -------------------------------------", f2);

    // /*------------*/
    char  *str ="70.215 0.7";
    
    printf("\n %.2f",test_atof(str));
    return 0;
}