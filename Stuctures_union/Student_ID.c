#include<stdio.h>
struct student{
	int ID;
	char Name[50];
	int age;
};
int  main(){
	struct student students[] ={
		{210,"Arjun",21},
		{101,"Arun",22},
		{201,"keerthis",25},
	};
int search_ID;
printf("Enter student ID\n");
scanf("%d",&search_ID);
for(int i=0; i<3; i++){
	if(search_ID == students[i].ID){
		printf("ID: %d\n",students[i].ID);
		printf("Name: %s\n",students[i].Name);
		printf("age: %d\n",students[i].age);
	}

	}
	return 0;
}

