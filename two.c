//Pattern Matching
#include<stdio.h>
int find(char mainstr[],char pattern[])
{
	int i,j;
	char window[strlen(pattern)];
	for(i=0;mainstr[i-1+strlen(pattern)]!='\0';i++)
	{
		strncpy(window,mainstr+i,strlen(pattern));
		//puts(window);
		if(strcmp(window,pattern)==0) return i;        			
	}
	return -1;
}	
	

void replace(char mainstr[],char pattern[],char replacement[],int pointm)
{
	 char buffer[50];
	 if(pointm==-1) return;
	 strncpy(buffer,mainstr,pointm);
	 buffer[pointm]='\0';
	 strcat(buffer,replacement);
	 strcat(buffer,mainstr+pointm+strlen(pattern));
	 strcpy(mainstr,buffer); 
}
int main(int argc, char const *argv[])
{
	printf("This is some program\n");
    char mainstr[50],pattern[50],replacement[50];
	int pointm;
    printf("Enter the main string\n");
	gets(mainstr);
	printf("Enter the pattern to be searched\n");  
	gets(pattern);
	printf("Enter the replacement string\n");
	gets(replacement); 
	do
	{
	pointm=find(mainstr,pattern);
	replace(mainstr,pattern,replacement,pointm);
	}while(pointm!=-1);
	printf("The main string after replacement\n");
	puts(mainstr);

    /* code */
    return 0;
}
