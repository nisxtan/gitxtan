
#include<stdio.h>
#include<conio.h>
int main(){
char string[100];
int i=0;
printf("Enter any string");
gets(string);
while( string[i] != ‘\0’){
i++;
}
printf(“\nThe length of string is :%d”, i);
getch();
return 0;
}

