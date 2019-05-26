#include <stdio.h>
#include <string.h>
#include "phone.h"

extern struct Contact PhoneBook[MAX];

void searchByName(){
	printf(">>Enter a name to search: ");
	char searchName[10];
	scanf("%s", searchName);
	for (int i = 0 ; i < size ; i++){
		if (strcmp(PhoneBook[i].Name, searchName) == 0){
			printf("%s\t\t\t%s\n", PhoneBook[i].Name, PhoneBook[i].PhoneNumber);
			return;
		}
	}
	printf("Oops! %s is not in the PhoneBook.\n", searchName);
	return;
}