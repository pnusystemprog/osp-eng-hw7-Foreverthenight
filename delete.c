#include <stdio.h>
#include <string.h>
#include "phone.h"

extern struct Contact PhoneBook[MAX];

void deleteByName(){
	printf("Enter a name to delete: ");
	char deleteName[10];
	scanf("%s",deleteName);
	int findIndex=-1;
	for ( int i=0;i<size;i++)
		if (strcmp(PhoneBook[i].Name, deleteName)==0) findIndex=i;

	if (findIndex==-1)
		printf("Oops! %s is not in the PhoneBook.\n",deleteName);
	else{
		for ( int i = findIndex ; i < size-1 ; i++){
			strcpy(PhoneBook[i].Name, PhoneBook[i+1].Name);
			strcpy(PhoneBook[i].PhoneNumber, PhoneBook[i+1].PhoneNumber);
		}
		printf("%s is deleted...\n", deleteName);
		size--;
	}
	return ;
}