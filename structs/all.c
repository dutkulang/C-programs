#include <stdio.h>
#include <stdlib.h>
struct Person{
    char *name;
    int age;
};
typedef struct Person Person; 
int main()
{
    Person *myperson;
    myperson = (Person*) malloc(sizeof(Person));
    myperson->name = "Dut Andrew Kulamg";
    myperson->age = 1;
    printf("Name: %s\nAge: %d\n", myperson->name, myperson->age);
    if(myperson->age >= 18)
	puts("You are an adult");
    else
	puts("You are a child");
    free(myperson);
    return 0;
}
