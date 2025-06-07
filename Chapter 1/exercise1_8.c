/* solution */ 

#include <stdio.h>

main()
{
        printf("Enter some text:\n");
        int blanks, tabs, newl, c;

        blanks = 0;
        tabs = 0;
        newl = 0;

        while ((c = getchar()) != EOF)
                if ( c == ' ')
                        ++blanks;
                else if (c == '\t')
                        ++tabs;
                else if (c == '\n')
                        ++newl;

printf("\nBlanks: %d\n", blanks);
printf("Tabs: %d\n", tabs);
printf("New Lines: %d\n", newl);
}
