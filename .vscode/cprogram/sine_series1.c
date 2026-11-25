# i n cl u d e <s t d i o . h>
# i n cl u d e <math . h>  
double mysine (double x ) {
double term , sum ;
int i , n ;  
sum = 0 ;
term = x ;
n = 1 0 0;  
for ( i = 1 ; i <= n ; i++)
{
sum += term ;
term ∗= −1 ∗ x ∗ x / ( 2 ∗ i ∗ ( 2 ∗ i + 1 ) ) ;
/ 
return sum ;
}
void main ( ) {
double x ;
p r i n t f ( ” Enter x ( i n d e g r e e s ) : ” ) ;
s c a n f ( ”%l f ” , &x ) ;
 
x = (M PI / 1 8 0 ) ∗ x ;
p r i n t f ( ”Our v al u e o f s i n (% l f ) = %l f \n” , x , mysine ( x ) ) ;
p r i n t f ( ” Value o f s i n (% l f ) from math l i b r a r y = %l f \n” , x , s i n ( x ) ) ;
}