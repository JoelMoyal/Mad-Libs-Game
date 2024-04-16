#include <stdio.h>
#include <stdlib.h>

int main()

{

char color[20];
char plural_non[20];
char CelebrityF[20];
char CelebrityL[20];


printf ("Enter a Color: " ) ;
scanf ("%s", color);
printf ("Enter a plural noun: " ) ;
scanf ("%s", plural_non);
printf ("Enter a Celebrity: " ) ;
scanf ("%s %s", CelebrityF, CelebrityL);

printf ("Rose are %s \n", color );
printf ("%s are blue \n", plural_non);
printf ("I love %s %s\n", CelebrityF, CelebrityL) ;
    

    return 0 ;

}