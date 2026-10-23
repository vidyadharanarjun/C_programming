#include<stdio.h>
struct Address{
char city[50];
char state[50];
int pincode;
};
struct student{
int id;
char name[50];
float marks;
struct Address address;
};
int main(){
struct student s;
scanf("%d %s %f", &s.id, s.name, &s.marks);
scanf("%s %s %d", s.address.city,s.address.state, &s.address.pincode);

printf("student details\n");
printf("id: %d\n",s.id);
printf("name: %s\n", s.name);
printf("marks: %.2f\n",s.marks);
printf("Address\n");
printf("city: %s\n",s.address.city);
printf("state: %s\n",s.address.state);
printf("pincode %d\n",s.address.pincode);

return 0;
}
