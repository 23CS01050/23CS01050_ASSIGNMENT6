#include<stdio.h>

float avgtemp(){
int a[3][7],i,j;
float sum1=0;
float sum2=0;
float sum3=0;
printf("enter the temperature of cities:");
for(i=0;i<3;i++){
    for(j=0;j<7;j++){
        scanf("%d",&a[i][j]);
    }
}
for(j=0;j<7;j++){
    sum1 = sum1 + a[0][j];
}
for(j=0;j<7;j++){
    sum2 = sum2 + a[1][j];
}
for(j=0;j<7;j++){
    sum3 = sum3 + a[2][j];
}
float avgcity1 = sum1/7;
float avgcity2 = sum2/7;
float avgcity3 = sum3/7;

printf("avg temp of city1 is %f\n",avgcity1);
printf("avg temp of city2 is %f\n",avgcity2);
printf("avg temp of city3 is %f\n",avgcity3);
return 0;
}
int main(){
avgtemp();
    return 0;
}
