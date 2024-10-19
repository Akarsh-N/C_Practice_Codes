#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	    char line[ 200 ];
        char *name = NULL;
        char buffer[200];

        printf( "Please enter your name: " );
        fgets( buffer, 200, stdin ); // fgets(str , sizeof(str) , stdin);

        name = ( char * ) malloc( strlen( buffer ) + 1 );  // +1 to hold the null byte

        if( !name )
        {
        	fprintf( stderr, "Error - malloc failed!\n" );
            exit( -1 );
        }

        strcpy( name, buffer );
        printf( "Name: %s" , name );
		
		return 0;
}
