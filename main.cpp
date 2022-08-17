#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int lower = 8, upper = 12;
    float w1,w2,W,V,nb,wt,per;
    const double Cu = 63.54;
    const float nt = 0.025,vol = 25;
    printf("Enter the weight of bottle + brass foil and weight of the empty bottle:");
    scanf("%f%f",&w1,&w2);
    W = w1-w2;
    srand(time(NULL));
    V = (rand() % (upper-lower+1))+lower;
    printf("concardant burette reading=%f\n",V);
    printf("eqating the equivalents\nnormality of brass*volume of brass solution=normality of thiosulphate*volume of Thiosulphate");
    nb = (nt*V)/ V;
    printf("Normality of Brass solution=%f\n",nb);
    wt = (nb*Cu)/4;
    printf("weight of copper present in 250ml of brass solution=%f\n",wt);
    per = (wt*100)/W;
    printf("percentage of copper in brass=%f\n",per);
}