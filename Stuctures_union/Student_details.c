#include<stdio.h>
struct student{
int Rollno;
char name[50];
float marks;
};
int main(){
struct student students[5];
int i;
for(i=0; i<5; i++){
printf("%d\n, students:\n", i+1);
printf("Rollno: ");
scanf("%d", &students[i].Rollno);
printf("Enter name: ");
scanf("%s",students[i].name);
printf("Enter marks: ");
scanf("%f", &students[i].marks);
}
printf("\n students details----\n");
for(i=0; i<5; i++) {
printf("%d\n students", i+1);
printf("Roll no: %d\n", students[i].Rollno);
printf("name: %s\n", students[i].name);
printf("marks: %.2f\n", students[i].marks);
}
return 0;
}


