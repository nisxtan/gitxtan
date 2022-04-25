#include<stdio.h>
#include<conio.h>
int main(){
	char str[50];
	int i,alphabets,digits,special,length=0,flag=0;
	alphabets=digits=special=0;
	printf("Enter the string\n");
	gets(str);
	for(i=0;str[i]!=0;i++){
		length++;
	}
	printf("The length of the string is %d",length);
	////////////
	printf("\nThe reversed string is\n");
			for(i=length-1;i>=0;i--){
				printf("%c",str[i]);
			}
	///////////////
	for(i=0;i<length/2;i++){
		if(str[i]!=str[length-1-i]){
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("\nPalindrome");
	}
	else {
		
printf("\nNOT palindrome");
}


	for(i=0;i<length;i++){ 
	
	if((str[i]>'a'&& str[i]<='z') || (str[i]>='A'&& str[i]<='Z')){
		alphabets++;
	} 
	else if (str[i]>='0'&&str[i]<='9'){
		digits++;
		
	}
	else
	special++;
	
}
printf("THe no of alphabets, digits and special are \n%d,\n%d,\n%d",alphabets,digits,special);
	getch();
	return 0;
}
