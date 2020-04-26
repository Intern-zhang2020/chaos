#include<stdio.h>
int main()
{
	FILE* fp;
	char file[20]="test.txt";
	fp=fopen("C:\\Users\\18728\\Desktop\\cpp\\test.txt","r");
	if(fp==NULL)
	printf("fail");
	else
	printf("ok");
	char ch=fgetc(fp);
	printf("\n%c",ch);
}
