
#include <stdio.h>

struct student{

	char name[64];
	int age;
	int totalMarks;

};


int main(){
	
	struct student stu;
	struct student *ptr;
	
	
	ptr = &stu;
	
	printf("\n+-------------------------------------+");
	printf("\nEnter details of the students: \n");
	printf("+-------------------------------------+");
	
	printf("\nEnter Name: ");
	
	scanf("%[^\n]",ptr->name);
	printf("\nEnter Age: ");
	scanf("%d",&ptr->age);
	printf("\nEnter Total Marks: ");
	scanf("%d",&ptr->totalMarks);
	

	
	
	
	printf("+-------------------------------------+");
	printf("\nTheir Info --->\n");
	printf("+-------------------------------------+");
	printf("\nName s1 : %s",ptr->name);
	printf("\nAge s1 : %d",ptr->age);
	printf("\nTotal Marks s1 : %d \n",ptr->totalMarks);
	printf("+-------------------------------------+");

	return 0;
}
