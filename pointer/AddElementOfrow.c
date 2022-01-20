#include<stdio.h>
int main(){
    int a[3][4],b[]={0,0,0},(*pa)[4],*pb;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("Enter Element in row no. %d column no. %d\n",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    pb=b;
    pa=a;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            pb[i]+=pa[i][j];
        }
        printf("%d ",pb[i]);
    }
    
}
