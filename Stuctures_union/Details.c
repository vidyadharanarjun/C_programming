#include<stdio.h>
struct student{
int id;
char name[50];
float marks;
};
int main(){
struct student s;
printf("Enter the id number:");
scanf("%d", &s.id);
printf("Enter the char name:");
scanf("%s", s.name);
printf("Enter the marks:");
scanf("%f" , &s.marks);
return 0;
}

