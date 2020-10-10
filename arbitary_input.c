#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX_INPUT 500

int main(){

    // Declare local variable
    char inp_value[MAX_INPUT] = "";
    int number;
    double d_value;
    char str_val[MAX_INPUT] ="";

    double val =1e-12;

    fgets(inp_value, MAX_INPUT, stdin);
    // Check for integers.
    if (sscanf(inp_value, "%lf", &d_value) == 1)
    {
        number = (int)d_value;
        if (fabs(d_value - number) / d_value > val)
            printf("It is a floating point\n");
        else
            printf("It is an integer\n");
    }
	// Check for string
    else if (sscanf(inp_value, "%s", str_val) == 1)
        printf("The input is a string\n");

    else // No match.
        printf("input not found in any of the data types\n");


return 0;
}

