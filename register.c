#include <stdio.h>
#include <string.h>
#include "phone.h"

extern struct Contact PhoneBook[MAX];
extern char password[10];

void registerPhoneData(){
	char inputPassword[100];
	int wrongCount = 0;
	do{
		printf("Password: ");
		scanf("%s", inputPassword);

		if (strcmp(password, inputPassword) != 0){
			wrongCount++;
			switch(wrongCount){
               			case 1: printf(">>Not Matched !!!\n"); break;
            			case 2: printf(">>Not Matched (twice) !!!\n"); break;
               			case 3: printf(">>Not Matched (3 times) !!!\n"); break;
            		}
		}

		if (wrongCount == 3){
			printf(">>You are not allowed to access PhoneBook.\n");
			return ;
		}
	} while (strcmp(password, inputPassword) != 0);

	printf("New User Name: ");
	scanf("%s", PhoneBook[size].Name);
	printf("PhoneNumber: ");
	scanf("%s", PhoneBook[size].PhoneNumber);
	printf("Registered...\n");
	size++;

	return ;
}
