#include <stdio.h>

int main() {
    
    int Height=9, Mid=Height/2;

    for(int row=0;row<Height;row++)
    {
        if(row>Mid)
        {
            for(int col=0;col<row-Mid;col++)
            {
                printf(" ");
            }
            for(int col=row-Mid;col<Height-row+Mid;col++)
            {
                printf("*");
            }
        }
        else
        {
            for(int col=0;col<Mid-row;col++)
            {
                printf(" ");
            }
            for(int col=Mid-row;col<=Mid+row;col++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    
    return 0;
}
