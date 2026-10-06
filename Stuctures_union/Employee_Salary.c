#include<stdio.h>
struct employee{
int id;
float salary;
char department[50];
};
int main() {
struct employee e[5];
int i, max_salary = 0;
for(i=0; i<5; i++){
printf("Enter the id:");
scanf("%d", &e[i].id);
printf("Enter the salary:");
scanf("%f", &e[i].salary);
printf("Enter the department:");
scanf("%s", e[i].department);
}
for(i=1; i<5; i++){
if(e[i].salary>e[max_salary].salary)
{
max_salary = i;
}
printf("----highsalary----");
printf("id:%d\n" , e[max_salary].id);
printf("salary:%.2f\n", e[max_salary].salary);
printf("department:%s\n",e[max_salary].department);
}
return 0;
}
