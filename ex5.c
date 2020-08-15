#include<stdio.h>
void main(){
   int fahr;
   float celsius;
   int inicio, fim, incr;
   inicio = 0;
   fim = 300;
   incr = 25;
   fahr = inicio;
   while(fahr <= fim){
       celsius = 5*(fahr-32)/8;
       printf("%d\t %3.f\n", fahr, celsius);
       fahr = fahr + incr;

   }

}