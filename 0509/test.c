#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 256
int main(int argc, char *argv[]){
	int line_count = 0;
	char buffer[MAX_LENGTH];
	FILE *fp;

	if((fp =i fopen("a.txt","rb"))!=NULL){
		while(fgets(buffer,MAX_LENGTH,fp) !=  NULL){
			line_count++;
			if(line_count == 2) {
				printf("%s\n",strtok(buffer,"option: "));
				break;
			}
		}
	}
	fclose(fp);
	return 0;
}
