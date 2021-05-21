/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#define nof_fig 6

int figure[nof_fig][2] = { 
    {-1, 11},
    {-1, 10},
    {1, -4},
    {1, -3},
    {0, 3},
    {0, 4}
};

int screen[8][8] = {0};

int k = -1, b = 11;

int main()
{
    for(int f=0; f<nof_fig; f++) {
        for(int i=8-1; i>=0; i--) {
            for(int j=0; j<8; j++) {
                
                if( j == figure[f][0]*i + figure[f][1]) {
                    screen[i][j] = 1;
                }
                
            }
        }
    }
    
    for(int i=0; i<8; i++) {
        for(int j=0; j<8; j++)
            if(screen[j][i] != 0)
                printf("%i", screen[j][i]);
            else
                printf(" ");
        printf("\n");
    }
    
    return 0;
}
