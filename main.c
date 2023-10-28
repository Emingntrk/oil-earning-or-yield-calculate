#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a_olive,z_liter,yield,earning,price;
    char answer;

    printf("do you want to learn your earning ? (E/H):");
    scanf("%c",&answer);

    printf("this year how much to harvest olive ? :\n");
    scanf("%f",&a_olive);

    printf("How much olive oil did you obtain from the olives you collected?:\n") ;
    scanf("%f",&z_liter);

    yield = a_olive/z_liter;
    printf("yield=%.1f",yield);


    printf("\n");




printf("\n");

    if(answer=='E'){
        printf("How much did you sell a liter of olive oil for?:\n");
        scanf("%f",&price);

        earning = z_liter*price ;
        printf("earning=%f",earning);
    }
     else if(answer=='H')

        printf("have a nice day sir");

     else
        printf("we are sory we cant calcualte your earning");

    return 0;
}
