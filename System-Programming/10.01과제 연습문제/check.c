#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100

int main(void){
	FILE *fp1;
	FILE *fp2;
	char a[SIZE];
	char b[SIZE];
	char f1[SIZE];
	char f2[SIZE];
	int bytes = 0;
	printf("첫 번쨰 파일 이름:");
	gets(a);
	printf("두 번째 파일 이름:");
	gets(b);
	if((fp1 = fopen(a,"r")) == NULL){
		fprintf(stderr,"파일 열기 오류 1\n");
		exit(1);
	} 
	if((fp2 = fopen(b,"r")) == NULL){
		fprintf(stderr,"파일 열기 오류 2\n");
		exit(1);
	} 
	while(1){
		fgets(f1, sizeof(f1), fp1);
		fgets(f2, sizeof(f2), fp2);
		if(strcmp(f1,f2) != 0){
			printf("<< %s\n",f1);
			printf(">> %s\n",f2);
			break;
		}
		if(feof(fp1) != 0){
			printf("파일은 서로 일치함\n");
			break;
		}
	}
	return 0;
	
}
