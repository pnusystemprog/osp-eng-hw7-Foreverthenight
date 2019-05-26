#include <stdio.h>
#include "phone.h"

extern struct Contact PhoneBook[MAX];

void print(){
	printf("Print all contants in the PhoneBook\n");
	printArray(PhoneBook,count_service);
}
void printArray(void *arr, int size){
	int i;
        void *p;
        p= arr;
        for(i=0; i<size; i++){
		printf("Addr vp:%p\t", (Contact*)p+i);
                printf("name:%s\t phone:%s\n", ((Contact*)p+i)->Name, ((Contact*)p+i)->PhoneNumber);
    }
        printf("\n");
}
