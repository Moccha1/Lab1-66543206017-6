#include <stdio.h>
#include <string.h>

void GetSet( int [] , int * ) ;

int main() {
	
 int *data , num ;
 GetSet( data , &num ) ;
 return 0 ;
 
}//end function


void GetSet ( int [] , int * ) {
	
	int *data , num ;
	
	printf( "Create by Pongpan Laowaphong 66543206019-2 \n" ) ;	
	printf( "Set your element size : " ) ;
	scanf( "%d" , &num ) ;
		 
	for( int i = 0 ; i < num ; i++ ) {
		printf( "Enter number do you want : " ) ;
		scanf( "%d", &data[i] ) ;
	}
	
	printf( "Member of the set : { " );
	
	for ( int x = 0 ; x < num ; x++ ) {
		
		printf( "%d" , data[x] ) ;
		
		if ( x < num - 1 ) {
            printf( " , " ) ;
    	}//end if
		
	}//end for loop
	
	printf( " }" ) ;
	
}//end function
