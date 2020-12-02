#include<stdio.h>
void main(){
int a;
scanf("%d",&a);
printf("%02d:%02d:%02d\n",a/3600,a%3600/60,a%60);
}
