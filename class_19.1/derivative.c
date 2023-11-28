#undef __STRICT_ANSI__

#include <stdio.h>
#include <math.h>

int main()
{
    FILE *pFile;
    float a = 0., b = 2 * M_PI, x, delta_x = 1.e-2;
    // floaty;
    pFile = fopen("derivative.dat", "w");
    // printf("\tx\t\tsin(x)\t\tsin\'(x)\n");
    fprintf(pFile, "\tx\t\tsin(x)\t\tsin\'(x)\n");
    x = a;
    while (x < b)
    {
        // y=sin(x);
        // printf("%10.2f\t%10.2f\t%10.2f\n",x,sin(x),(sin(x+delta_x)-sin(x))/delta_x);
        fprintf(pFile, "%10.2f\t%10.2f\t%10.2f\n", x, sin(x), (sin(x + delta_x) - sin(x)) / delta_x);
        // printf(”%10.2f\t%10.2f\n”,x,y);
        x += delta_x; // x=x+delta_x;
    }
    fclose(pFile);
    return 0;
}
