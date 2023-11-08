#include <stdio.h>
#include <stdlib.h>

struct khaled
{
	char *name;
	int age;
	float height;
	char *address;
};

int main()
{
	struct khaled khalood;
	struct khaled *ptr;
	ptr = &khalood;

	ptr->name = "khaled khedr";
	ptr->age = 23;
	ptr->height = 175.3;

	printf("Name is %s.\nAge is: %d.\nHeight is: %.1f.\n", khalood.name, khalood.age, khalood.height);
	return (0);
}
