/* hex coordinate system 
ref. http://keekerdc.com/2011/03/hexagon-grids-coordinate-systems-and-distance-calculations/ */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// macro to print an hxcoords
#define PP((p)); \
    for((i)=0; (i)<3; ((i)++)) \
        printf(((i)==2)? "%d}\n" : ((i)==0)? "{%d, " : "%d, ", (p.p[(i)]));
#define PP2(p); \
    for((i)=0; (i)<3; ((i)++)) \
        printf(((i)==2)? "%d}\n" : ((i)==0)? "{%d, " : "%d, ", (p[(i)]));
// #define PP((p)); \
//          print("{%d, %d, %d}\n", (p.p[(0))]);

typedef struct /* c_t, coordinate type */
{
    int p[3];
} c_t; 

int main(int argc, char *argv[])
{
    int i, j;
    // int sp2[3]={0};
    // c_t sp= {{1, 1, -2}};
    c_t sp;
    sp.p[0]=1;
    sp.p[1]=1;
    sp.p[2]=-2;

    // c_t *np= calloc(8, sizeof(c_t));
    //printf("sp, starting pt is {%d, %d, %d}", sp2[0]);
    PP(sp);

// for(j=0;j<6;++j)

    // free(np);
   return 0;
}
