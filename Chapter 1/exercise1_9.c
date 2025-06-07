#include <stdio.h>

main()
{
        int c, blanks;

        blanks = 0;

        while((c = getchar()) != EOF){
                if(c == ' '){
                        if(blanks == 0){
                                putchar(c); /* print char */
                                blanks = 1;} /* blanks increased so if next char is also a blank it will not run thru the loop and will not print */
                }
                if(c != ' '){
                        putchar(c);
                        blanks = 0; /*if there are no blanks it resets the blank count so every time there are multi blanks it will run properly */
                }
        }
}
