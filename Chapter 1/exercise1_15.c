#include <stdio.h>
/* print fahrenheit-celsius table. this is in reverse*/
float conversion(float fahr);

main()
{
printf("TABLE FOR FAHR AND CELSIUS TEMPS\n");

float fahr;

printf("  F      C\n");
         for(fahr = 300; fahr >= 0; fahr = fahr - 20)
         printf("%3.0f %6.1f\n", fahr, conversion(fahr));

return 0;
}


float conversion(float fahr){
                 float celsius;
                 celsius = (5.0/9.0)*(fahr-32.0);
                return celsius;
         }
