# include <stdio.h>
int main(){
    int a;
printf("enter the no:");
scanf("%d",&a);
if (a%2==0){
      if(a%4==0){
      printf("it is only dividible by 2 and 4");
      }
      else {
   printf("its is divisible by 4 ");
    } 
}   
else{
    printf("it is not divisile by 2 ");
}






    return 0;
}