/*
    Rodin Fedor
    m3o-121b-20
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char input_char;
unsigned int 
    counter, 
    ed_position;
    
int main (void) {
    
    while (counter < 5*5)
    {
        scanf("%c", &input_char);
        if(input_char - '0' == 0)
            counter++;
        else if (input_char - '0' == 1)
        {
            ed_position = counter;
            counter++;
        }        
    }


    printf("%u", abs(3-((ed_position / 5) + 1)) + abs(3 - (ed_position % 5 + 1)));
    
    
    return 0;
}