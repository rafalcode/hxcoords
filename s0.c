/* hex coordinate system 
ref. http://keekerdc.com/2011/03/hexagon-grids-coordinate-systems-and-distance-calculations/ */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int i, j;
    unsigned char b;
    int sp[3]={1, 1,-2};

    for(j=0;j<8;++j)
        printf("%x ", j%2);
    printf("\n");
    for(j=0;j<8;++j)
        printf("%d ", -1+2*((j&3)>>1));
    printf("\n");
    for(j=0;j<8;++j)
        printf("%x ", j&4);
    printf("\n");
    for(j=0;j<8;++j)
        printf("%x ", ((j&4)-(j&3)-1)%2);
    printf("\n"); 

    for(j=0;j<8;++j) {
        b=(unsigned char)j;
        b = (b * 0x0202020202ULL & 0x010884422010ULL) % 1023;
        printf("%x ", b);
    }
    printf("\n");
   return 0;
}
