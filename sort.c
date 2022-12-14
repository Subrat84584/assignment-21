//5.
#include<stdio.h>
#include<string.h>
struct employee 
{
	int id;
	char name[20];
	float salary;
};
int main()
{
	struct employee e[5];
	int i,j;
	for(i=0;i<=4;i++)
	{
		printf("\nenter the id");
		scanf("%d",&e[i].id);
		fflush(stdin);
		printf("enter name");
		fgets(e[i].name,20,stdin);
		printf("enter the salary");
		scanf("%f",&e[i].salary);
		
	}
	struct employee temp;
	for(i=0;i<=4;i++)
	{
		for(j=i+1;j<5;j++)
		{
		if(e[i].salary>e[j].salary)
			{
			temp=e[i];
			e[i]=e[j];
			e[j]=temp;
		}
		}
	}
	for(i=0;i<=4;i++)
	{
		printf(" id=%d name:%s salary:%f",e[i].id,e[i].name,e[i].salary);
	}
	return 0;
}
