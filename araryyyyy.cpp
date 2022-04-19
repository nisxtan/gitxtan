#include<stdio.h>
void input(int*,int);
void display(int*,int);
int main(){
	int n,i,arr[100];
	printf("Enter the size of array");
	scanf("%d",&n);
	input(arr,n);
	printf("The array elements are\n");
	display(arr,n);
	return 0;
}

void input(int*a,int size){
	int i;
	for(i=0;i<size;i++){
		scanf("%d",a+i);
	}
}

void display(int*a,int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d",*(a+i));
	}
}
