#include<stdio.h>
struct student{
	int Rollno;
	float marks;
};
void modify(struct student *s){
        s->Rollno = 102;
        s->marks = 89.2;
}
int main(){
	struct student s1 ={103,80.3};
		modify(&s1);
		printf("%d%.2f",s1.Rollno,s1.marks);
		return 0;

	}

