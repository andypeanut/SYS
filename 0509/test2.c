#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_LENGTH 256
void func_lstat(FILE *fp,int num,char *c){
	int line =0;
	char buffer[MAX_LENGTH];
	while(fgets(buffer,MAX_LENGTH,fp) != NULL){
		line++;
		if(line==num){
			printf(" %s",buffer+strlen(c));
			break;
		}
	}
}
int main(int argc, char *argv[]){
	FILE *fp;
	fp = fopen(argv[1],"r");
	func_lstat(fp,atoi(argv[2]),argv[3]);
}
