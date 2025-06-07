/* printing each word new line */ 

#include <stdio.h>
main()
{
        int c;

        printf("enter input:\n");

        while((c = getchar()) != EOF){
                if(c == ' ' || c == '\t' || c == '\n'){
                        putchar('\n');
                }
                else {
                        putchar(c);
                }
        }
        return 0;
}
