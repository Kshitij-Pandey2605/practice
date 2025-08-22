# include <stdio.h>
int main (){
    int a;
    printf("enter the age");
    scanf("%d",&a);
    if (a<=5){
        printf("free");
    }
    else if (a<=12){
       printf(" charge=50");
    }
    else if (a<=60){
        printf("charge=100");
    }
    else if (a>60){
        printf("charge=60");
    }
}