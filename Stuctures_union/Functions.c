#include<stdio.h>
struct student{
	int Rollno;
	char name[50];
	float marks;
};
void printmembers(struct student s){
	printf("Rollno: %d\n",s.Rollno);
	printf("name: %s\n",s.name);
	printf("marks:%.2f\n",s.marks);
}
int main(){
	struct student s1= {808,"Arjun",98.2};
	printmembers(s1);
	return 0;
}
