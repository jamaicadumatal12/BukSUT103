#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sec, h, m, s;
    printf( "Enter time in seconds: ");
    scanf ("%d, &sec)
    
}
    h = (sec/3600);
    
    m = (sec - (3600*h)) /60;
    
    s = (sec - (3600*h))-(m*60));
    printf("%d seconds" = %d hours :%minutes :%seconds/n", h,m s);
    return 0;
