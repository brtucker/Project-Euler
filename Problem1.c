//
//  Problem1.c
//  
//
//  Created by Blake Tucker on 12/3/13.
//
//

#include <stdio.h>
#include <omp.h>


int main(){
    int index = 0, sum = 0;
    while (index < 1000) {
        if (index % 3 == 0 || index % 5 == 0) {
            sum+=index;
        }
        index++;
    }
    printf("%d",sum);
}