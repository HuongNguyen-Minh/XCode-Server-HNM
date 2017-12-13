//
//  main.c
//  BasicProgramming-Ex1
//
//  Created by Nguyen Minh Huong on 3/30/17.
//  Copyright © 2017 Nguyen Minh Huong. All rights reserved.
//

#include <stdio.h>
#include "ItI-Ex1-1.h"
int main ()
{
    // insert code here...
    int x,y, temp;
    int d1, d2, d3, d4;
  
    printf("x= ");
    scanf("%d", &x);
    printf("y= ");
    scanf("%d", &y);
    
    temp = x;
    x=y;
    y= temp;
    
    printf("x =  %d \n", x);
    printf("y =  %d \n", y);
    
    swap(&x,&y);
    printf("x =  %d \n", x);
    printf("y =  %d \n", y);
    
    decompose(x,&d1,&d2,&d3,&d4);
    printf("10k =  %d \n", d1);
    printf("5k =  %d \n", d2);
    printf("2k =  %d \n", d3);
    printf("1k =  %d \n", d4);
    return 0;
    
}
