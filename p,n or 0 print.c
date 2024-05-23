#include<stdio.h>
int main(){
    int i,positive=0,negative=0,zero=0;
int a[100],num;


    scanf("%d",&num);

 for(i=0;i<num;i++){
         scanf("%d",&a[i]);


 }

 for(i=0;i<num;i++){
   if(a[i]>0){
    printf("\n%d",a[i]);
    positive++;
   }
   if(a[i]<0){
    printf("\n%d",a[i]);
    negative++;
   }
   if(a[i]==0){
    printf("\n%d",a[i]);
    zero++;
   }
}
printf("\npositive number=%d",positive);
printf("\nnegative number=%d",negative);
printf("\n Zeros=%d",zero);
}









