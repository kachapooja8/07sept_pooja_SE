#include<stdio.h>
struct student
{
	char name[50];
	int rollno;
	float mark;
	char grade;
};
void assigngrade(struct student *s)
{
    if(s->mark >= 90)
        s->grade = 'A';
    else if(s->mark >= 75)
        s->grade = 'B';
    else if(s->mark >= 60)
        s->grade = 'C';
    else if(s->mark >= 45)
        s->grade = 'D';
    else
        s->grade = 'F';
}
void printtopper(struct student s[],int n)
{
    int i,top=0;

    for(i=1;i<n;i++)
    {
        if(s[i].mark>s[top].mark)
        {
            top = i;
        }
    }

    printf("\nTopper Name: %s",s[top].name);
    printf("\nTopper Marks: %.2f\n",s[top].mark);
}
main()
{
	struct student s[3];
    int i;

    for(i=0;i<3; i++)
    {
        printf("\nEnter details of Student %d\n",i+1);

        printf("Enter name: ");
        scanf(" %s",&s[i].name);

        printf("Enter roll number: ");
        scanf("%d",&s[i].rollno);

        printf("Enter marks: ");
        scanf("%f",&s[i].mark);

        assigngrade(&s[i]);
    }

    printf("\n%-20s %-10s %-10s %-10s\n",
           "Name","Roll No","Marks","Grade");

    printf("--------------------------------------------------\n");

    for(i=0;i<3;i++)
    {
        printf("%-20s %-10d %-10.2f %-10c\n",
               s[i].name,
               s[i].rollno,
               s[i].mark,
               s[i].grade);
    }
    printtopper(s,3);
}
