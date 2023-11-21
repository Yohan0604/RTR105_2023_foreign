#include<stdio.h>
#include<math.h>
double my_besj0(double x)
{double a,S;
int k=0;
a=pow(-1,k)*pow(x,2*k)/(1.);
S=a;
printf("%.2f\t%8.2f\t%8.2f\n",x/2,a,S);
while(k<=30){
k++;
a=a*(-1)*x*x/((16)*pow(k,2));
S = S + a;
printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);
}
return S;
}
void main()
{double x=2.14,y,yy;
y=j0(x/2);
printf("my function - y=besj0(%.2f0=%.2f\n",x,y);
yy=my_besj0(x);
printf("my function - y=my_besj0(%.2f0=%.2f\n",x,yy);


}
