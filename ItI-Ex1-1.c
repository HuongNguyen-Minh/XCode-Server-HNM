//
//  ItI-Ex1-1.c
//  BasicProgramming-Ex1
//
//  Created by Nguyen Minh Huong on 12/13/17.
//  Copyright © 2017 Nguyen Minh Huong. All rights reserved.
//

#include "ItI-Ex1-1.h"
void swap (int * a, int * b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b= temp;
};

void decompose (int a, int * d1,int * d2, int * d3, int * d4)
{
    while (a>0)
    {

            *d1= a/10;
            a = a - *d1*10;
        *d2 = a/5;
        a = a-*d2*5;
        *d3 = a/2;
        a= a - *d3*2;
        *d4 = a;
        a= a- *d4;
    }

};

