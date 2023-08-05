//Q.7 Write a Program to print the below pattern using nested for loop.
#include<stdio.h>
#include<conio.h>

void main(){
int i,j,k,l,s,o;

for(i=5;i>=1;i--){


for(j=1;j<=i;j++){
printf("%d",j);
}

for(k=i;k<=4;k++){
    printf(" ");
}

for(l=4;l>=i;l--){
    printf(" ");
}

for(s=i;s>=1;s--){
    printf("%d",s);
}

printf("\n");
}
getch();
}
