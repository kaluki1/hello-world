#include <stdio.h>
#include <string.h>

struct book {
	char title[100];
	char author[100];
	char ISBN[50];
	int copies;
	int year;
	
};

int main (){
	struct book c[2];
	int i,j;
	for(i=0;i<2;i++)
	{
	j=i+1;
	printf("Enter Details of book %d\n",j);
	printf("title: ");
	gets(c[i].title);
	printf("author: ");
	gets(c[i].title);
	printf("ISBN: ");
	scanf("%s", &c[i].ISBN);
	printf("copies: ");
	scanf("%d",&c[i].copies);
	printf("year published: ");
	scanf("%d", &c[i].copies);
    }
    printf("Books entered\n");
    printf("%s\n", c[0].title);
    printf("%s\n", c[1].title);
    
    return 0;	
}  A6-1
