#include <stdio.h>
int main(){
   char items[10][21] = { "Fresh Fish", "Soft kleenex", "Ultra Tide", "Red Apples", "Magic Broom", "Liquid Soap", "Chocolate Cookies",
      "Organic Milk", "Dark Chocolate", "Organic Banana" };
   int upc[10] = { 275, 386, 240, 916, 385, 495, 316, 355, 846, 359 };
   double price[10] = { 12.34, 45.67, 24.34, 123.45, 456.78, 546.02, 78.34, 24.34, 123.45, 99.99 };
   int isTaxed[10] = { 0, 1, 1, 0, 1, 1, 1, 0, 1, 0 };
   int i;
   FILE* fptr = fopen("items.txt", "w");
   if (fptr){ // if fptr is not null
      for (i = 0; i < 10; i++){
         fprintf(fptr, "%d,%s,%.2lf,%d\n", upc[i], items[i], price[i], isTaxed[i]);
      }
      printf("Items.txt created with 10 items in it.\n");
      fclose(fptr);
   }
   else{
      printf("Could not create items.txt.\n");
   }

   return 0;
}