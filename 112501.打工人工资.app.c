#include<stdio.h>
void main(){
printf("打工人工资判断程序\n");
int a;
scanf("%d",&a);
if(a>0&&100<=a){
printf("贫困打工人\n");
}
else if(a>100&&1000<=a){
printf("一般打工人\n");
}
else if(a>1000&&20000<=a){
printf("土豪打工人\n");
}
else{
printf("输入有误，请重新输入\n");
}

}
