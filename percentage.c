//10.
#include<stdio.h>
struct marks
{
	int roll;
	char name[30];
	float chem_marks,math_marks,phy_marks;
};
int main()
{
	struct marks marks[5];
	int i;
	for(i=0;i<4;i++)
	{
		printf("student %d\n",i+1);
		printf("enter the roll no");
		scanf("%d",&marks[i].roll);
		printf("enter the name:\n");
		scanf("%s",marks[i].name);
		printf("enter the chemestry mark");
		scanf("%f",&marks[i].chem_marks);
		printf("enter the math marks");
		scanf("%f",&marks[i].math_marks);
		printf("enter the physics mark");
		scanf("%f",&marks[i].phy_marks);
		
	}
	for(i=0;i<4;i++)
	{
		printf("student %d\n",i+1);
		float percentage=(marks[i].chem_marks+marks[i].math_marks+marks[i].phy_marks)/300;
		printf("percentage:  %f\n",percentage);
	}
	return 0;
}
