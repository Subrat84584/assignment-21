//9.
#include<stdio.h>
struct student 
{
	int roll;
	char name[10];
	float marks;
};
int main()
{
	int n;
	printf("enter the value of n");
	scanf("%d",&n);
	struct student s[n];
	int i;
	for(i=0;i<n;i++)
	{
	   printf("enter the roll ");
	   scanf("%d",&s[i].roll);
	   fflush(stdin);
	   printf("enter the name of student");
	   fgets(s[i].name,10,stdin);
	   printf("enter the marks");
	   scanf("%f",&s[i].marks);
	   
    }
    for(i=0;i<n;i++)
    {
    	printf("%d %s %f",s[i].roll,s[i].name,s[i].marks);
	}
	return 0;
}
