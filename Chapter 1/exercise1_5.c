/* temp table in reverse. exercise 1.5 solution */ 

#include <stdio.h>
main()
{
printf("TABLE FOR FAHR AND CELSIUS TEMPS\n");

        printf("  F      C\n");
         int fahr;
         for(fahr = 300; fahr >= 0; fahr = fahr - 20)
         printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
