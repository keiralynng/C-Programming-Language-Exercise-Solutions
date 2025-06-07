/* solution exercise 1.4 */ 

#include <stdio.h>
main()
{
printf("TABLE FOR FAHR AND CELSIUS TEMPS\n");

        float fahr, celsius;
        int lower, upper, step;

        lower = 0; /* lower limit of temp table */
        upper = 300; /* upper */
        step = 20; /* step size */

        fahr = lower;
        printf("  F      C\n");
        while (fahr <= upper){
                celsius = (5.0/9.0) * (fahr-32.0);
                printf("%3.0f %6.1f\n", fahr, celsius);
                fahr = fahr + step;
        }
}
