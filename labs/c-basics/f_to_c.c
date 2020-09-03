#include <stdio.h>
#include <stdlib.h>

#define   min  0      
#define   max  100  
#define   step   10     

int main(int argc, char **argv)
{
    int fahr;

    if(argc == 2){
        fahr = atoi(argv[1]);
        printf("Fahrenheit: %3d, Celcius: %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
        
    }
    else if(argc == 4){
        int LOWER = atoi(argv[1]);
        int UPPER = atoi(argv[2]);        
        int STEP = atoi(argv[3]);

        for (fahr = min; fahr <= max; fahr = fahr + step)
            printf("Fahrenheit: %3d, Celcius: %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
return 0;
  
}
