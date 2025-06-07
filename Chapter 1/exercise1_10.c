/* solution */ 
#include <stdio.h>

main()
{
        int c = 0;

        while((c = getchar()) != EOF){
                if(c == '\t')
                        putchar('t');;
                if(c == '\b')
                        putchar('b');
                if(c == '\\')
                        putchar('\\');
                else
                        putchar(c);

        }
        return 0;
}
