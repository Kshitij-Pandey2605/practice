# include <stdio.h>
int main(){
    float a;
    float b;
    char c;
    printf("enter the no.");
    scanf("%f",&a);
     printf("enter the no.");
     scanf("%f",&b);
    printf("enter the charecter.");
    scanf("%c",&c);
    if (c=='+'){
       float d= a+b;
        printf("%f",d);
    }
     else if(c=='-'){
        float d=a-b;
         printf("%f",d);
     }
     else if (c=='*'){
        float d=a*b;
         printf("%f",d);
     }
     else if (c=='/'){
        float d=a/b;

        printf("%f",d);
     }
     else ("char invalid");
}