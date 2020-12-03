#include<stdio.h>
void main(){
int a,b;
int c[2][4]={
	{1,2,3,7},
	{4,5,6,8}
};
for(a=0;a<2;a++){
	for(b=0;b<4;b++){
printf("%d",c[a][b]);}
printf("\n");
}
}
