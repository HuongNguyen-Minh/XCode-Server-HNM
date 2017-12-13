//
//  Ex2-1.c
//  BasicProgramming-Ex1
//
//  Created by Nguyen Minh Huong on 3/31/17.
//  Copyright © 2017 Nguyen Minh Huong. All rights reserved.
//

#include "Ex2-1.h"
int gcd (int a, int b)
{
    int gcd = 0;
    for (int i=1; i<=a && i<=b;i++)
    {
        if ((a%i==0) && (b%i==0))
        {
            gcd =i;
        }
    }
    return gcd;
};
