//
//  main.c
//  projectn
//
//  Created by Andrew Garvin on 2/11/20.
//  Copyright © 2020 Andrew Garvin. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main() {
    int total=0, i;
    double avg, dev, max, min, sum_squares=0, num=0, sum=0;
    
    printf("Enter number of data:");
    scanf("%d", &total);
    
    for(i=1; i<=total; i++) {
    printf("Enter number:");
    scanf("%lf", &num);
    
        if(i==1) {
        min = num;
        max = num;
        }
        
    if(num>max) {
        max = num;
    }
    else if(num<min) {
        min = num;
    }
        
        sum = sum + num;
        sum_squares = sum_squares + (num*num);
    }
    
    avg = sum/total;
    dev = sqrt((sum_squares)/(total)-(avg*avg));
    
    printf("Max = %g\n", max);
    printf("Min = %g\n", min);
    printf("Avg = %.2f\n", avg);
    printf("Std Dev = %.2f\n", dev);
    
    return 0;
}
