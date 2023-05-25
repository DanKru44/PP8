#include <stdio.h>

int main()
{
	int summe = 0 ;
	int zahlen[5] = { } ;
	
	printf( "Bitte 5 Zahlen eingeben\n" ) ;
	for( int i = 0 ; i < 5 ; i++ )
		scanf( "%i", &zahlen[i] ) ;

	for ( int i = 0 ; i < 5 ; i++ )
		summe = summe + zahlen[i] ;

	printf( "Summe = %i\n", summe );

	return 0 ;

}
