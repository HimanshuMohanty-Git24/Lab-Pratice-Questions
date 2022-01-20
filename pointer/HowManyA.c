#include<stdio.h>
int main(){
    char a[]="Yudhistir",b[]="Bhim",c[]="Arjun",d[]="Nakul",e[]="Sahadev";
    char *t[5];
    int count=0;
    t[0]=a;
    t[1]=b;
    t[2]=c;
    t[3]=d;
    t[4]=e;
    for(int i=0;i<5;i++){
        for(int j=0;t[i][j];j++){
            if(t[i][j]=='a'||t[i][j]=='A') count++;
        }
    }
    printf("\n\nThe no. of a or A in those 5 strings are %d\n\n",count);
}