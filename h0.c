/* hex coordinate system 
ref. http://keekerdc.com/2011/03/hexagon-grids-coordinate-systems-and-distance-calculations/ */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// macro to print an hxcoords
#define PP(p); \
    for((i)=0; (i)<3; ((i)++)) \
        printf(((i)==2)? "%d}\n" : ((i)==0)? "{%d, " : "%d, ", (p[(i)]));

int main(int argc, char *argv[])
{
    int i, j;
    int sp[3]={1, 1,-2};

    int **np= malloc(8*sizeof(int*));
    for(j=0;j<8;++j) 
        np[0]=calloc(3, sizeof(int));
    for(j=0;j<8;++j) {
        np[j][0]=sp[calloc(3, sizeof(int));
    np[0][= 

    PP(sp);

// for(j=0;j<6;++j)

    // free(np);
   return 0;
}
