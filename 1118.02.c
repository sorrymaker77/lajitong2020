#include<stdio.h>
void main(){
int a;
printf("打工人工资评级\n");
scanf("%d",&a);
if(a<0){
printf("你还欠花呗\n");
}
else if(a>=0&&a<=1200){
	printf("大排档洗碗工\n");
}
else if(a>=1201&&a<=2500){
	printf("大排档后厨\n");}
else if(a>=2501&&a<=3500){
	printf("酒店前台\n");}
else if(a>=3501&&a<=6000){
	printf("酒店后厨\n");}
else if(a>=6001&&a<=12000){
	printf("程序员\n");}
else if(a>=12001&&a<=30000){
printf("小老板\n");
}
else{
	printf("干爹");
}
}
