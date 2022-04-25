#include<stdio.h>
#include<conio.h>
int main(){
	int a[100],ea[100],oa[100],i,oj=0,ej=0,n;
	printf("Enter the array size");
	scanf("%d",&n);
	//input array
	
		printf("Enter the array elemensts:\n");
		for(i=0;i<n;i++){
		scanf("%d",&a[i]);
			
	}
	//output
	printf("THe array elements are:\n");
	for(i=0;i<n;i++){
		printf("%d \t",a[i]);
			}
	
	/////////////
	for(i=0;i<n;i++){
	if(a[i]%2==0){
		ea[ej]=a[i];
		ej++;
	}
	
	else{
		oa[oj]=a[i];
		oj++;
}
	}
	/////////
	printf("\nTHe even elements are:\n");
	for(i=0;i<ej;i++){
		printf("%d\t",ea[i]);
			/
	}
		printf("\nTHe odd elements are:\n");
	for(i=0;i<oj;i++){
		printf("%d\t",oa[i]);
			}
}
	
