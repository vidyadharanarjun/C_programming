#include<stdio.h>
struct address{
	char city[50];
	int pin;
};
struct student{
	int Rollno;
	char name[50];
	struct address addr;
};
	int main(){
		struct student s;
		printf("Enter Rollno:");
		scanf("%d\n",&s.Rollno);

		printf("Enter name:");
		scanf("%s\n",s.name);

		printf("Enter city:");
		scanf("%s\n",s.addr.city);

		printf("Enter pincode:");
		scanf("%d\n",s.addr.pin);

		printf("Roll number: %d\n",s.Rollno);
		printf("name: %s\n",s.name);
		printf("address: %s\n",s.addr.city);
		printf("pincode:%d\n",s.addr.pin);
		return 0;
	}
