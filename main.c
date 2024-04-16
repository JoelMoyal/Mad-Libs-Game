#include <stdio.h>
#include <stdlib.h>

int main()

{

char color[20];
char plural_non[20];
char Celebrity[20];

printf ("Enter a Color: " ) ;
scanf ("%s", color);
printf ("Enter a plural noun: " ) ;
scanf ("%s", plural_non);
printf ("Enter a Celebrity: " ) ;
scanf ("%s", Celebrity);

printf ("Rose are %s \n", color );
printf ("%s are blue \n", plural_non);
printf ("I love %s\n", plural_non);
    

    return 0 ;

}