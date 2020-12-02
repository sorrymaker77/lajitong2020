#include<stdio.h>
void main(){
 char a;
  printf("请点击键盘");
 scanf("%c",&a);
 switch(a){
 case'w' :printf("你在点击上键\n");break;
 case'a' :printf("你在点击左键\n");break;
 case's':printf("你在点击下键\n");break;
 case'd':printf("你在点击右键\n");break;
 default:printf("输入有误，请输入wasd的值 \n");

 }


}
