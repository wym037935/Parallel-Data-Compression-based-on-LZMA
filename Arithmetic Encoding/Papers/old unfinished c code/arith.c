#include<stdio.h>
#include<string.h>

#define BLKSZ 10

int probab(char *fname);
int arith(char *str);

int p[256];

void main(int argc, char* argv[]){
	if(argc<1){
		printf("\nError!!! call program with the file to be encoded!!!\n\n");	
		exit(0);	
	}
	
	probab(argv[1]);
	
	FILE *ipf=fopen(argv[1],r);
	FILE *opf=fopen("op.txt",w);
	if(ipf==NULL || opf==NULL){
		printf("Sorry file opening error. Program will terminate...\n");
	}
	
	char str[BLKSZ];
	while(fgets(str,BLKSZ,ipf)!=NULL){
		//////////////////////rem
	}
	fclose(ipf);
	fclose(opf);
}

int probab(char *fname){
	char para[10000];
	FILE *ipf=fopen(fname,r);
	while(fgets(para,10000,ipf)!=NULL){
			
	}
}

int arith(char *str){

}
