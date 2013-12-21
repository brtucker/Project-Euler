//
//  Problem6.c
//  
//
//  Created by Blake Tucker on 12/21/13.
//
//

#include <stdio.h>
#include <omp.h>
#include <math.h>

int sumOfSquares(int n, int m){
    int start = n, stop = m;
    int result = 0;
    
    for (start; start < stop + 1; start++) {
        result += (start * start);
    }
    printf("sumOfSquares result: %d\n", result);
    return result;
}

int squareOfSum(int n, int m){
    int start = n, stop = m;
    int result = 0;
    
    for (start; start < stop + 1; start++) {
        result += start;
    }
    
    result = result * result;
    printf("squareOfSum result: %d\n", result);
    return result;
}

void main(){
    int start = 1, stop = 100;
    int result = 0;
    
    result = squareOfSum(start, stop) - sumOfSquares(start, stop);
    
    printf("Result: %d", result);
}
