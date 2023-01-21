#include <stdio.h>
#include <stdlib.h>

struct student
{
    int rollno;
    char name[20];
    float marks;
};

typedef struct student student;

int main(void)
{
    student s1;
    printf("Enter details for student\n");
    
    printf("Enter roll number\n");
    scanf("%d", &s1.rollno);
    
    printf("Enter student name\n");
    scanf("%s", s1.name);

    printf("Enter student marks\n");
    scanf("%f", &s1.marks);
    printf("Roll number: %d\nName: %s\nMarks: %f\n", s1.rollno, s1.name, s1.marks);
    return EXIT_SUCCESS;
}
