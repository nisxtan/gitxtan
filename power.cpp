#include<stdio.h>
#include<conio.h>
int power(int,int);
int main(){
	int x,y,p;
	printf("Enter the base number and the power :");
	scanf("%d%d",&x,&y);
	p=power(x,y);
	printf("The result is %d",p);
	
}
int power(int a,int b){
	if(b==0)
	return(1);
	else
	return(a*power(a,b-1));
}
