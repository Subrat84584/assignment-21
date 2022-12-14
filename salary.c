//4.write a function to find highest salary employee from a given array of 10 employee.

#include<stdio.h>
struct employee
{
	int id;
	char name[10];
	float salary;
};
int main()
{
	struct employee e[5];
	int i;
	for(i=0;i<=4;i++)
    {    
      printf("enter your id");
	  scanf("%d",&e[i].id);
	  fflush(stdin);
	  printf("enter your name");
	  fgets(e[i].name,10,stdin);
	  printf("enter your salary");
	  scanf("%f",&e[i].salary);
    }
    for(i=1;i<=4;i++)
    {
    	if(e[0].salary<e[i].salary)
    	e[0]=e[i];
    }
    
    	printf("%d %s %f",e[0].id,e[0].name,e[0].salary);
    
    return 0;
}

