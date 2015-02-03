//
//  Project4.c
//  
//
//  Created by Blake Tucker on 12/11/13.
//
//

#include <stdio.h>
#include <stdlib.h>
#include <omp.h>


char* strrev(char* s) {
    char *s1, *s2;
    char c;
    
    s1 = s2 = s;
    while (*s2)
        s2++;
    
    while (s1 < s2) {
        c = *(--s2);
        *s2 = *s1;
        *s1++ = c;
    }
    return s;
}

int main(){
    int index, innerIndex;
    int largest = -1;
    char s1[7];
    char s2[7];
    
    for (index = 100; index < 1000; ++index) {
        for (innerIndex = index; innerIndex < 1000; ++innerIndex) {
            int sum = index * innerIndex;
            sprintf(s1, "%d",sum);
            strcpy(s2, s1);
            strrev(s2);
            if (strcmp(s1, s2) == 0 && sum > largest) {
                largest = sum;
            }
        }
    }
    
    printf("%d\n", largest);
    
    return 0;
}