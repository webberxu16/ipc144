#include "mystring.h"
int main(){
   char a[100]; 
   a[0] = 'F'; 
   a[1] = 'a';
   a[2] = 'r';
   a[3] = 'd';
   a[4] = 'a';
   a[5] = 'd';
   a[6] = 0; // a[6] = NULL;   a[6] = '\0';
   printf("the lenght of the string containing %s is %d\n", a, mystrlen(a));
   return 0;
}
