#include<stdio.h>

typedef struct{
	int year;
	char name[20];
}Book;

int main(){
	Book book[4];
	for(int i=0;i<4;i++){
		scanf("%s %d",book[i].name,&book[i].year);
	}
	for(int i=0;i<4;i++){
		printf("Name: %s Published Year:  %d \n", book[i].name, book[i].year);
	}

	return 0;
}

