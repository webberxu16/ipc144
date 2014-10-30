#include <stdio.h>
int main(){
   int
      i,
      number[200],
      sum = 0,
      count;
   printf("Please enter the number of numbers (maximum of 200): ");
   scanf("%d", &count);
   for (i = 0; i < count; i++){
      printf("%d- Enter a number: ", i+1);
      scanf("%d", &number[i]);
      sum += number[i];
   }
   printf("the average of ");
   for (i = 0; i < count; i++){
      printf("%d ", number[i]);
   }
   printf(" is: %.3lf\n", (double)sum / count);
   return 0;
}