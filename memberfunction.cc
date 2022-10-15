#include < bits / stdc++.h >  
#include < stdlib >  
#include < stdio.h >  
#include < vector >  
#include < conio.h >  
int searchResult ( std : : vector < int > arr , int k ) {   
    std : : vector < int > : : iterator it ;  
    it = std : : find ( arr . begin ( ) , arr . end ( ) , k ) ;  
    if ( it ! = arr . end ( ) )  
        return ( it - arr . begin ( ) ) ;  
    else  
        return -1 ;  
}  
int main ( ) {  
    std : : vector < int > arr = { 1 , 2 , 3 , 4 , 5 , 6 } ;  
    int k = 4 ;  
    std : : cout << searchResult ( arr , k ) << std : : endl ;  
    return 0 ;  
}  
