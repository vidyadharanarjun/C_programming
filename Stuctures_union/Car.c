#include<stdio.h>
struct engine
{
	int engine_no;
	int horsepower;
	char fuel[20];
};
struct car
{
	int car_no;
	char car_name[30];
	float price;

	struct engine eng;
};
int main(){
	struct car c1;
printf("Enter the car_no: ");
scanf("%d",&c1.car_no);
printf("Enter the car_name: ");
scanf("%29s", c1.car_name);
printf("Enter the price: ");
scanf("%f",&c1.price);
printf("Enter engine no :");
scanf("%d",&c1.eng.engine_no);
printf("Enter the horsepower:");
scanf("%d", &c1.eng.horsepower);
printf("Enter fuel type");
scanf("%19s", c1.eng.fuel);

return 0;
}
:
