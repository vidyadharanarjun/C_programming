#include<stdio.h>
struct Circle{
	float area;
	float radius;
};
int main() {
	struct Circle c;
	printf("Enter the radius:");
		scanf("%f",&(c.radius));
c.area = (3.14* c.radius* c.radius);
	printf("c.area = %.2f",(c.area));
	return 0;
}


