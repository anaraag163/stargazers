//
//  main.c
//  Question 1
//
//  Created by anurag kumae on 16/09/26.
//

#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {


    float p,t,r,si;
    printf("Enter principal amount,time period and rate of interest\n");
    scanf("%f %f %f",&p,&t,&r);
    si=p*t*r/100;
    printf("The simple interest is %f\n",si);

    return EXIT_SUCCESS;
}
