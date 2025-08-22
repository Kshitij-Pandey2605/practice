# include <stdio.h>
int main(){
    int b;
    scanf("%d",&b);
   int result=0;
    for(int a=1;a<=b;a=a+1){
         if (b%a==0){
            result=result+1;
         }
    }
         if (result==2){
        printf("it is prime no");

    }
    else 
    printf("it is not prime no.");
      return 0;
}