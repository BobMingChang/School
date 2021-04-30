#include<stdio.h>
#include<stdlib.h>
char* strcpy(char* strDest, const char* strSrc)
{
unsigned i;
	for (i=0; strSrc[i] != '\0'; ++i)
	strDest[i] = strSrc[i];
	strDest[i]='\0';//appending null to end
	return strDest;//returning pointer to dest string
}
int main() {
	char src[] ="Test String.";
	char dest[100];
	printf("Source string: %s\n",src);
	printf("Destination String: %s",srtcpy(dest,src));
}
