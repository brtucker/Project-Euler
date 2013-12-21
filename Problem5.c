//
//  Problem5.c
//  
//
//  Created by Blake Tucker on 12/21/13.
//
//

#include <stdio.h>
#include <omp.h>

int evenCheck(int n){
    int index = 1;
    int checkResult = 0;
    
    for (index; index < 21; index++) {
        if (n%index == 0) {
            checkResult = 1;
        }
        else{
            checkResult = 0;
            break;
        }
    }
    
    return checkResult;
}

void main(){
    int index = 2520;
    int resultFound = 0;
    
    #pragma omp parallel
    while (resultFound != 1) {
        index++;
        resultFound = evenCheck(index);
    }
    
    printf("Index = %d", index);
}