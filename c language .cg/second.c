25
#include <stdio.h>
int main(){
       float a;
   printf("enter the temprature");
   scanf("%f",&a);
   if (a>=35.0){
    printf("very hot");
   }
   else if (a>=25.0){
    printf("warm and sunny");
   }
   else {
    printf("cold");
   }


   return 0;
}