#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#define ZERO 0

/*clean keyboard bush*/
void input_flush()
{
	char c;
	c = fgetc(stdin);
	while(c != '\n') c = fgetc(stdin);
}

/*takes the input of a double and checks if it is a character or a negative number. 
If it is one of these options, the function asks you to enter a new value*/
double get_double(char * prompt)
{
    double i = 0;
       
    while(i <= ZERO)
    {
        printf("%s", prompt);
        if(!(scanf("%lf", &i)))
            {
                printf("Invalid value, enter with another value: ");
                input_flush();
                continue;
            }
        if(i <= ZERO)
        {
            printf("Invalid value, enter with another value: ");
        }

    }

    input_flush();

    return i;

}


