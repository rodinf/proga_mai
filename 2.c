/*
    Rodin Fedor
    m3o-121b-20
*/

// compile on gcc with -lm flag

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#ifdef __linux__
    _Bool firstDigit_trig = 1;
#elif _WIN32
    bool firstDigit_trig = 1;
#endif

unsigned int 
    inputNumDigitCont,
    outputNum = 1,
    inputSistema,
    outputSistema,
    stepen = 0;

char 
    inputDigit_char;

int main (void) {

    // sprachivaem ishodnuy sistemu

    while (inputDigit_char != ';')
    {
        scanf("%c", &inputDigit_char);

        if(inputDigit_char >= '0' && inputDigit_char <= '9') {
            inputSistema *= 10;
            inputSistema += (inputDigit_char - '0');
            
        }

    }

    //printf("%u", inputSistema);

    inputDigit_char = 0;   

    // maaagija

    while (inputDigit_char != ';')
    {
        scanf("%c", &inputDigit_char);

        if((inputDigit_char >= '0' && inputDigit_char <= '9') || (inputDigit_char >= 'A' && inputDigit_char <= 'Z')) {

            if (inputDigit_char >= 'A')
                inputNumDigitCont = inputDigit_char - 'A' + 10;
            else
                inputNumDigitCont = inputDigit_char - '0';

            //printf("d %u\n", inputNumDigitCont);

            if(firstDigit_trig == 1) {
                outputNum = inputNumDigitCont;
                firstDigit_trig = 0;
            }

            else
                outputNum = outputNum * inputSistema + inputNumDigitCont;     
            
            //printf("o %u\n", outputNum);

        }
   
    }

    printf("%u\n", outputNum);

    inputDigit_char = 0;

    // spraschivaem konechnuy sisitemu

    while (inputDigit_char != ';')
    {
        scanf("%c", &inputDigit_char);

        if(inputDigit_char >= '0' && inputDigit_char <= '9') {
            outputSistema *= 10;
            outputSistema += (inputDigit_char - '0');
            
        }

    }

    // perevodim v konecnuy sistemu

    char *arr;
  
    arr = (char*) malloc(1 * sizeof(char));

    unsigned int outputDigit = 0, count = 0;

    while (outputNum != 0)
    {
        outputDigit = outputNum % outputSistema;

        if(outputDigit <= 9)
            
            arr[count] = outputDigit + '0';
        else
            
            arr[count] = outputDigit - 10 + 'A';

        outputNum /= outputSistema;

        count++;

        arr = realloc(arr, (count + 1) * sizeof(char));
    }    

    for(int i=count; i>=0; i--) {
        printf("%c", arr[i]);
    }

    free(arr);

    printf("\n");

    return 0;
}
