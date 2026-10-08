#include<stdio.h>
struct students{
	float marks;
};
int main() {
	struct students S[5];
		int i; 
		float sum =0; 
		float avg;
	for(i=0; i<5; i++){
		printf("Enter the avg marks: ");
		scanf("%f",&S[i].marks);
		sum = sum + S[i].marks;
	}
	avg=sum/5;
	printf("%.2f",avg);
	return 0;
}
