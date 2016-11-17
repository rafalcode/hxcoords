/* hex coordinate system 
   ref. http://keekerdc.com/2011/03/hexagon-grids-coordinate-systems-and-distance-calculations/ */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// char version too easy
#define ZCALC(a,b) \
    ((a) | (b)) & 0x7f

#define Z(a,b) \
    -((a)+(b))

int ntb[6][2]={ {0, 1}, {1, 0}, {1, -1}, {0, -1}, {-1, 0}, {-1, 1}};

int main(int argc, char *argv[])
{
    int i, j;
    unsigned char b;
    int sp[3]={1, 1,-2};
    printf("\n"); 
    for(i=0;i<6;++i) 
        printf("%d %d %d\n", sp[0]+ntb[i][0], sp[1]+ntb[i][1], Z(sp[0]+ntb[i][0], sp[1]+ntb[i][1])); /* note how z is calculated independently */
    return 0;
}
