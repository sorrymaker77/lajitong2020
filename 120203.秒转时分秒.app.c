#include<stdio.h>
void main(){
int a;
scanf("%d",&a);
printf("%d小时%d分钟%d秒\n",a/3600,a%3600/60,a%60);
}
