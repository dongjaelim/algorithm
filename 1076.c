#include <stdio.h>
int main()
{
    char a ;
    char value;
    
    scanf("%c",&value);
    for( a = 'a'; a <= value; a++)
    {
        printf("%c ", a);
    }
}

