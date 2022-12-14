//6.write a function to sort employee according to their names 
#include<stdio.h>
#include<string.h>
struct employee
{
	int id;
	char name[10];
	float salary;
};
int main()
{
	struct employee b1[5];
	int i,j;
	for(i=0;i<=4;i++)
	{
	  printf("enter the employee id:");
	  scanf("%d",&b1[i].id);
	  fflush(stdin);
	  printf("enter employee name");
	  fgets(b1[i].name,10,stdin);
	  printf("enter your salary");
	  scanf("%f",&b1[i].salary);
    }
    struct employee temp;
    for(i=0;i<4;i++)
    {
    	for(j=i;j<5;j++)
    	{
    		if (strcmp(b1[i].name, b1[j].name) > 0)
    		{
    		temp=b1[i];
    		b1[i]=b1[j];
    		b1[j]=temp;
    	}
		}
	}
	for(i=0;i<=4;i++)
	{
		printf("%s %d %f",b1[i].name,b1[i].id,b1[i].salary);
		
	}
	return 0;
}
