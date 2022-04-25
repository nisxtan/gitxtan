#include<stdio.h>
#include<conio.h>
int main(){
	int a[100],i,n;
	int *p,*q;
	p=&n;
	printf("Enter the size of the array :");
	scanf("%d",p);
	//input array
	for(i=0;i<n;i++){
		printf("Enter the value of a[%d] element",i);
		scanf("%d",&a[i]);
	}
	
	//display the array
	printf("The array elements are:\n");
	for(i=0;i<n;i++){
		printf("%d \t",a[i]);
	}
	
///any other calculations to be done are done after inputting and outputting the array elements so the above two steps are same for all the questions related to one dimensional arrays
int sum=0;
for(i=0;i<n;i++){
	sum=sum+a[i];
}
printf("\nThe sum of the array elements is %d",sum);
}
