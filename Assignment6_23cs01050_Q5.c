#include<stdio.h>
int main(){

int a[2][3],m,n,i,j,temp;

printf("enter the values of m and n");
scanf("%d%d",&m,&n);
printf("enter the first matrix:");
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
}

for(i=0;i<m/2;i++){
    for(j=0;j<n;j++){
        temp =a[i][j];
        a[i][j]= a[j][i];
        a[j][i]= temp;
    }
}
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        printf("%d",a[i][j]);
    }
}























    return 0;
}