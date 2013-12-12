//
//  Problem2.c
//  
//
//  Created by Blake Tucker on 12/4/13.
//
//

#include <stdio.h>
#include <omp.h>
#include <math.h>



int main(){
    float firstValue = 1, secondValue = 1;
    float sum = 0, temp = 0;
    
    while(temp < 4000000){
        temp = firstValue + secondValue;
        if(fmod(temp,2) == 0){
            sum += temp;
        }
        firstValue = secondValue;
        secondValue = temp;
        printf("%f\n",secondValue);
    }
    
    printf("Sum = %f\n", sum);
    return 0;
}