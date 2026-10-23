#include<stdio.h>
struct sensor{
int id;
char name[50];
float reading;
};
int main(){
int n;
scanf("%d",&n);
struct sensors[n];
float sum =0;
for(int i =0; i<n; i++){
scanf("%d %s %f", s[i].id, s[i].name, &s[i].reading);
sum += s[i].reading;
}
if(n>1){
printf("id : %d\n",s[i].id);
printf("name : %s\n", s[i].name);
printf("reading : %.2f\n", s[i].reading);
}
return 0;
}


