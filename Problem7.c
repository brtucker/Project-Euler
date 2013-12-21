//
//  Problem7.c
//  
//
//  Created by Blake Tucker on 12/21/13.
//
//

#include <stdio.h>

int main()
{
    int count=0;
    long a = 2;
    while(count<10001)
    {
        long b = 2;
        int prime = 1;// to check if found a prime
        while(b * b <= a)
        {
            if(a % b == 0)
            {
                prime = 0;
                break;
            }
            b++;
        }
        if(prime)
            count++;
        a++;
    }
    printf("%d st prime no. : %ld\n",count,--a);
    return 0;
}