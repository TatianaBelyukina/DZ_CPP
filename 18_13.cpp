#include <stdio.h>
#define IN true
#define OUT false


int main()
{
    int c;
    bool status=OUT;
    while((c=getchar())!=EOF)
    {
        if((c>=65 && c<=90) || (c>=97 && c<=122))
        {
            status=IN;
            printf("%c", c);
        }
        else if((c<65 || (c>90 && c<97) || c>122) && status==IN && c!=10)
        {
            status=OUT;
            printf(".");
        }
    }
}
