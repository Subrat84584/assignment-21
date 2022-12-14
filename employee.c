//1.
#include<stdio.h>
struct employee
{
	int id;
	char name[10];
	float salary;
};
int main()
{
	struct employee e;
	printf("enter employee id,name and salary");
	scanf("%d",&e.id);
	fflush(stdin);
	fgets(e.name,10,stdin);
	scanf("%f",&e.salary);
	printf("employee id:%d\nemployee name:%s\nemployee salary:%f",e.id,e.name,e.salary);
	return 0;
}
