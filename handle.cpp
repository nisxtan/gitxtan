#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student {
	char name[50];
	int roll;
	char faculty[50];
};
int main(){
	int n,i;
	struct student s[100];
	FILE *fp;
	fp=fopen("student.txt","w+");
	if(fp==NULL){
		printf("Cannot open file");
		exit(0);
		
	}
	printf("Enter number of students");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter your name:");
		gets(s[i].name);
        printf("\nEnter roll");
        scanf("%d",&s[i].roll);
        printf("\nEnter faculty");
        gets(s[i].faculty);
    //saving to a file
    fwrite(&s[i],sizeof(s[i]),1,fp);
}
rewind(fp);
/////reading from file
for(i=0;i<n;i++){
	fread(&s[i],sizeof(s[i]),1,fp);
	printf("THE name is %s",s[i].name);
	printf("THE roll is %s",s[i].roll);
	printf("THE faculty is %s",s[i].faculty);
}
fclose(fp);
getch();
return 0;
}
	

