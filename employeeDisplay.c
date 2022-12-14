//3.
#include<stdio.h>
struct employee input();
void display(struct employee e);
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
	display(e);
	return 0;
}
struct employee input()   //return type depends on what will return the value
{
	struct employee e;
	printf("enter employee id,name and salary");
	scanf("%d",&e.id);
	fflush(stdin);
	fgets(e.name,10,stdin);
	scanf("%f",&e.salary);
	return e;
}
void display(struct employee e)
{
	printf("%d\n%s\n%f",e.id,e.name,e.salary);
}
