#include <stdio.h>
#include <assert.h>
#include <math.h>

int main () {
    int x, y, z;

    assert(scanf("%d%d%d", &x, &y, &z)== 3);
    int p = x+y+z;
    double s = (p/2.0);
    double a = sqrt(s * (s - x) * (s - y) * (s - z));
    if (x + y > z && x + z > y && y + z > x) {
      if((x*x == y*y + z*z) || (y*y == z*z + x*x) || (z*z == y*y + x*x))
       printf("RETANGULO %d %.2f\n", p , a );
    else if(x == y && x == z)
     printf("EQUILATERO %d %.2f\n", p , a );
     else if(x == y || x == z || y == z)
     printf("ISOSCELES %d %.2f\n", p, a );
           else printf("ESCALENO %d %.2f\n", p , a );
    
    }
     else
        printf("INVALIDO\n");
  return 0;
}
