void sort(){
	printf("Sort fuction is called\n");
	printf("Before sorting\n");
	printArray(PhoneBook,count_service);
	sortPhoneBook(PhoneBook, count_service, contactCmpr, contactSwap);
	printf("After sorting\n");
	printArray(PhoneBook,count_service);
}
void sortPhoneBook(void *A, int size, cmp cfn, swap sfn){
    int i, j;
    for(i=0; i<size-1; i++){
        for(j=0; j<size-i-1; j++){
            if(cfn(A,j,j+1)>0)
		sfn(A,j,j+1);
        }
    }
}



int contactCmpr(*arr, int i, int j){
	return strcmp((contact*)arr+i->name,((contact*)arr+j->name);
}



int contactSwap(*arr, int i, int j){
	contact=s;
	s=*arr+i;*arr+i=*arr+j;*arr+j=s;
	return 1;

}
