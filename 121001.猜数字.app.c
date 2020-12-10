#include<stdio.h>
#include<string.h>
void main(){
 int key=5,i;
 char a1[15]="";
 char a2[]="麻江涛不是傻逼";
 printf("猜数字小游戏，请输入密码\n");
 scanf("%s",&a1);
 if (strcmp(a1,a2)==0){
 printf("成功进入程序，请输入答案数字\n");
 }
 while(1){
 scanf("%d",&i);
 if(i==key){
 printf("猜对啦\n");
 }
 else if (i>key){
 printf("数字大了\n");
 }
 else if(i<key){
 printf("数字小了\n");
 }
 }

}
