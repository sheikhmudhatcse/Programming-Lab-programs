#include <stdio.h>
#include <math.h>

int main()
{
    float D,L1,L2,G1,G2;
   
    printf("enter the value of L1,L2,G1 and G2 in degree :\n");
    scanf("%f%f%f%f",&L1,&L2,&G1,&G2);
   
    D=3963*(acos(sin(L1*3.14/180)*sin(L2*3.14/180)+cos(L1*3.14/180)*cos(L2*3.14/180)*cos(G2-G1*3.14/180)))*180/3.14;
   
    printf("\ndistance is %f",D);
   
    return 0;
}