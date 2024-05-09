#include<stdio.h>
#include<stdlib.h>
struct Student {
	char name[10];
	char surname[20];
	unsigned int index;
	unsigned int age;
};

typedef struct beer {
	float price;
	float alcocholContent;
	unsigned short age;
} beer_t;

int main() {
	struct Student wemifStudent = {
		"Adam",
		"Kowalski",
		251439,
		25
	};

	beer_t* piwo = (beer_t*) malloc(sizeof(beer_t));
	(*piwo).price = 5.99;
	(*piwo).alcocholContent = 6.7;
	(*piwo).age = 6;

	printf("Student's name: %s\n", wemifStudent.name);
	printf("Student's surname: %s\n", wemifStudent.surname);
	printf("Student's index: %d\n", wemifStudent.index);
	printf("Student's age: %d\n", wemifStudent.age);

	printf("Piwo price  %f and %f alcohol Content and %d age\n", piwo->price, piwo->alcocholContent, piwo->age);
	free(piwo);
	
	return 0;
}
