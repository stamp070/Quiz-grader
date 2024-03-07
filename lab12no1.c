#include <stdio.h>
#include <stdlib.h>

void addRecord(char *name, int age);

int main() {
	char name[64]; int age;
	printf("Enter name: "); scanf("%s", name);
	printf("Enter age: "); scanf("%d", &age);
	addRecord(name, age);
	return 0;
}
void addRecord(char *name, int age) {
	FILE *fptr;
	fptr = fopen("./lab12/no1/first.txt","a");
	fprintf(fptr,"%s %d\n",name,age);
	fclose(fptr);
}

