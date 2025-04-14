
#include <stdio.h>

struct student{

	char name[64];
	int age;
	int totalMarks;

};


int main(){
	
	struct student stu1;
	struct student stu2;
	
	float avg;
	
	printf("\n+-------------------------------------+");
	printf("\nEnter details of the students: \n");
	printf("+-------------------------------------+");
	printf("\nFor Student 1 --->\n");
	printf("\nEnter Name: ");
	//fgets(stu1.name,64,stdin);
	scanf("%[^\n]",stu1.name);
	printf("\nEnter Age: ");
	scanf("%d",&stu1.age);
	printf("\nEnter Total Marks: ");
	scanf("%d",&stu1.totalMarks);
	
	while((getchar()) != '\n' );
	
	printf("\n+-------------------------------------+");
	printf("\nFor Student 2 --->\n");
	printf("\nEnter Name: ");
	scanf("%[^\n]",stu2.name);
	printf("\nEnter Age: ");
	scanf("%d",&stu2.age);
	printf("\nEnter Total Marks: ");
	scanf("%d",&stu2.totalMarks);
	
	
	
	printf("+-------------------------------------+");
	printf("\nTheir Info --->\n");
	printf("+-------------------------------------+");
	printf("\nName s1 : %s",stu1.name);
	printf("\nAge s1 : %d",stu1.age);
	printf("\nTotal Marks s1 : %d \n",stu1.totalMarks);
	printf("+-------------------------------------+");
	printf("\nName s2 : %s",stu2.name);
	printf("\nAge s2 : %d",stu2.age);
	printf("\nTotal Marks s2 : %d",stu2.totalMarks);
	
	avg = ((float)stu1.totalMarks + (float)stu2.totalMarks) / 2.0 ;
	
	printf("\nTheir average of total marks : %.2f \n",avg);
	return 0;
}
