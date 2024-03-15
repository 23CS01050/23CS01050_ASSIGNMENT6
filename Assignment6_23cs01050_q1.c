#include <stdio.h>
int prime(int a){
  int count=0;
    for(int i=2;i<=a/2;i++){
      if(a%i==0){
          count++;
      }
    }
    if(count==0){
      return 1;
    }
    else{
      return 0;
    }
}
int main(){
    int ul,ll;
    printf("Enter upper limit:");
    scanf("%d",&ul);
    printf("Enter lower limit:");
    scanf("%d",&ll);
    for(int i=ll;i<=ul;i++){
        int k=prime(i);
        if(k==1){
            printf("%d, ",i);
        }
    }
}