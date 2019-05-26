#include <stdio.h>
#include "phone.h"
void registerPhoneData();
void print();
void printArray(void *arr, int size);
void searchByName();
void deleteByName();
void sort();
void (* pFuncs[5])()={registerPhoneData, print, searchByName, deleteByName,sort};
typedef int (*cmp)(const void*, int, int);
typedef int (*swap)(void*, int, int);
void sortPhoneBook(void *A, int size, cmp cfn, swap sfn);
int contactCmpr(const void*, int, int);
int contactSwap(void*, int, int);
static int count_service = 0;	// Total number of service requests

char password[10] = "qwer1234";

int main(){
	int service;		// a variable for storing user's request
	do{
        printf("============ Telephone Book Management ============");
        printf("\n <<<1. Register\t 2. Print All \t 3. Search by ID \t 4. Delete \t 5. Sort \t 6. Exit >>>\n");
        printf(" Please enter your service number (1-6)> ");
		scanf("%d", &service);
		if ( service > 0 && service <= 5 ) 
			pFuncs[service-1]();
		else if( service ==0 || service > 6) 
			printf("You choose a wrong service number\n");
		count_service++;
	} while (service != 6);	// if Exit is not entered, the loop continues
	return 0;
}
