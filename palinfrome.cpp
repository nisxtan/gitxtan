#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char a[50];
	int i,n,length=0,flag=0;
	printf("Enter any string/n");
	scanf("%s",&a);
	
	while(a[length]!='\0'){
		length++;
	}
	
	for(i=0;i<=length/2;i++){
	
		if(a[i]!=a[length-1-i])
		flag=1;
		break;
	}
	if(flag==0)
	printf("\nPALINDROME");
	else
	printf("\nNOT palindrome");
	getch();
}
