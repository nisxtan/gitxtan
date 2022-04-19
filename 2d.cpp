#include<stdio.h>
#include<conio.h>
int main(){
	int arr[100][100],i,j,m,n;
	printf("Enter the number of rows and columns\n");
	scanf("%d%d",&m,&n);
	
	
/////input array
for(i=0;i<m;i++){
	for(j=0;j<n;j++){
		printf("ENter arr[%d][%d] element",i,j);
		scanf("%d",&arr[i][j]);
	}	
}
////output array
printf("The array is \n");
for(i=0;i<m;i++){
	for(j=0;j<n;j++){
		printf("%d\t",arr[i][j]);
		
	}	
	printf("\n");
}


}
