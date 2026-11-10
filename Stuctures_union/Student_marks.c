#include<stdio.h>
struct student{
	int Roll_no;
	char Name[20];
	int marks;
};
int main(){
	struct student s[10], temp;
	int n,i,j;
	printf("Enter the no of student details\n");
	scanf("%d",&n);
	for(i=0; i<n ;i++){
		printf("Enter the Roll_no,Name,marks\n");
		scanf("%d %s %d",&s[i].Roll_no,s[i].Name,&s[i].marks);
	}
for(i=0; i<n-1; i++){
for(j=i+1; j<n; j++){
if (s[i].marks <s[j].marks){
	temp = s[i];
	s[i] = s[j];
	s[j] = temp;
}
}
}
for(i=0;i<n;i++){
	printf("display student marks\n");
	printf("%d\t %s\t %d\n",s[i].Roll_no,s[i].Name,s[i].marks);
}
return 0;
}
	
