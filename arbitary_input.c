#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX_INPUT 500

int main(){

    //fgets(inp_value, MAX_INPUT, stdin);
    
    unsigned int len_max = 128;
    unsigned int current_size = 0;
    
    char *pStr = malloc(len_max);
    current_size = len_max;

    printf("\nEnter a very very very long String value:");

    if(pStr != NULL)
    {
	int c = EOF;
	unsigned int i =0;
        //accept user input until hit enter or end of file
	while (( c = getchar() ) != '\n' && c != EOF)
	{
		pStr[i++]=(char)c;

		//if i reached maximize size then realloc size
		if(i == current_size)
		{
                        current_size = i+len_max;
			pStr = realloc(pStr, current_size);
		}
	}

	pStr[i] = '\0';

        printf("\nLong String value:%s \n\n",pStr);
        	
        FILE *fptr;
        fptr = fopen("C:\program.txt","w");

        if(fptr == NULL)
        {
            printf("Error!");
            exit(1);
        }

        fputs(pStr, fptr); // writing data which ever user is entering any type of value
        fclose(fptr);
	//free it 
	free(pStr);
	pStr = NULL;
    }
return 0;
}

