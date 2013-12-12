//
//  Problem3.c
//  
//
//  Created by Blake Tucker on 12/6/13.
//
//

#include <stdio.h>
#include <omp.h>
#include <math.h>


void factorize(float n){
    float divisor = 2;
    
    printf("Prime factors of '%f': ", n);
#pragma omp parallel
    while (divisor < n) {
        if (fmod(n,divisor) == 0) {
            printf("%f x ", divisor);
            n = n /divisor;
        }
        else{
            if (divisor == 2) {
                divisor++;
            }
            else{
                divisor += 2;
            }
        }
    }
    printf("%f\n", divisor);
    
}

int main(){

    float toBeFactored = 600851475143;
    
    factorize(toBeFactored);
    
    return 0;
    
}