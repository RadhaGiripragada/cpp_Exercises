#include <stdio.h>
#include <string.h>
void reverse(char *string);
void reverse(char *string) {
 char tmp[100];
 sscanf(string,"%s",tmp);
 printf("\n the word %s", tmp);
 return;
}
int main() {
 char *string=NULL;
 size_t size_input=0;
 printf("\n Enter the string to reverse:");
 getline(&string, &size_input, stdin);
 reverse(string);
 return 0;
}
