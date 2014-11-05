#ifndef __MYSTRING_H__
#define __MYSTRING_H__
int mystrlen(char str[]);
int mystrcpy(char des[], char src[]);
int mystrcat(char des[], char src[]);
int mystrcmp(char str1[], char str2[]);
// returns 
// negative value if str1 is smaller than str 2
//  0 if str1 is exactly like str2
// positive value if str1 is greater that str 2
char* mystrstr(char str1[], char str2[]);
//returns address of the position of str2 in str1, or NULL if str2 does not exist in str1 
#endif