#include <stdio.h>
#include <stdlib.h>

// return type for getchar is int,ie. non negative
//(getchar returns character value which is unsigned char converted to int which is non negative)

int main()
{
    int c,nl,nw,nc;
    nl = nw = nc = 0;
    while((c = getchar())!= EOF)
    {
        ++nc;
      if(c == '\n')
        ++nl;
      if(c == ' ' || c == '\t' || c == '\n')
        ++nw;
    }
    printf("\n%d  %d  %d\n",nc,nl,nw);
    printf("EOF value is %d\n",EOF);
    return 0;
}

//Ctrl+D to exit 





