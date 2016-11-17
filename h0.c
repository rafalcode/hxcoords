/* hex coordinate system 
ref. http://keekerdc.com/2011/03/hexagon-grids-coordinate-systems-and-distance-calculations/ */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PP(p); \
    for((i)=0; (i)<3; ((i)++)) \
        print(((i)==2)? "%d}\n" : ((i)==0)? "{%d, " : "%d, ", (p.p[(i)]));
// #define PP((p)); \
//          print("{%d, %d, %d}\n", (p.p[(0))]);

typedef struct /* c_t, coordinate type */
{
    int p[3];
} c_t; 

int main(int argc, char *argv[])
{
    int i, j;
    c_t sp= {1, 1, -2};
    c_t *np= calloc(8, sizeof(c_t));
    printf("sp, starting pt is {%d, %d, %d}", sp
    PP(sp.p);

// for(j=0;j<6;++j)

    free(np);
   return 0;
}
