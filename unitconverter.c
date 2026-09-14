#include <stdio.h>
int main(){
  float fahrenheit ;
  float celsius;
  printf("Enter temperature in Fahrenheit:");
  scanf("%f",&fahrenheit);
  celsius =(fahrenheit-32.0)*5.0/9.0;
  printf("\n--- Conversion Result ---\n");
  printf("Fahrenheit : %.2f F\n",fahrenheit);
  printf("Celsius : %.2f C\n", celsius);
  return 0;
}