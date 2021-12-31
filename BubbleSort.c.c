#include <stdio.h>

int main()
{
    int a[ 10 ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
    int i;
    int pass;
    int hold;

    printf( "Data items in original order\n" );

    /* output original array */
    for ( i = 0; i < 10; i++ )
    {
        printf( "%d ", a[ i ] );
    }

    /* bubble sort */
    for ( pass = 1; pass < 10; pass++ )
    {
        /* loop to control number of comparisons per pass */
        for ( i = 0; i < 10 - 1; i++ )
        {
            /* compare adjacent elements and swap them if first element is greater than second element */
            if ( a[ i ] > a[ i + 1 ] )
            {
                hold = a[ i ];
                a[ i ] = a[ i + 1 ];
                a[ i + 1 ] = hold;
            }
        }
    }

    printf( "\nData items in ascending order\n" );

    /* output sorted array */
    for ( i = 0; i < 10; i++ )
    {
        printf( "%d ", a[ i ] );
    }

    printf( "\n" );
    return 0;
}
