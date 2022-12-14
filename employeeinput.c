//2.
#include<stdio.h>
struct employee input();
struct employee
{
	int id;
	char name[10];
	float salary;
};
int main()
{
	struct employee e;
	e=input();
	printf("%d\n%s\n%f",e.id,e.name,e.salary);
	return 0;
}
struct employee input()
{
	struct employee e;
	printf("enter employee id,name and salary");
	scanf("%d",&e.id);
	fflush(stdin);
	fgets(e.name,10,stdin);
	scanf("%f",&e.salary);
	return e;
}
