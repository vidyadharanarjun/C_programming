#include<stdio.h>
struct seconds{
	int hours;
	int minutes;
	int seconds;
};
int main() {
	struct seconds s;
	int sco;
	printf("Enter the hours:");
	scanf("%d", &s.hours);
	printf("Enter the minutes:"):
	scanf("%d",&s.minutes);
	printf("Enter the seconds:");
	scanf("%d", &s.seconds):
sco = (s.hours*3600)+(s.minutes*60)+(s.seconds);
	printf("Total seconds = %d\n",sco);
	return 0;
}

