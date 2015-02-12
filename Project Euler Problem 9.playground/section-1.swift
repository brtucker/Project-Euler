// Playground - noun: a place where people can play

import Cocoa

func gcd(a: Int, b: Int) -> Int{
    var x = 0
    var y = 0
    
    if(a > b){
        x = a
        y = b
    }
    else{
        x = b
        y = a
    }
    
    while(x % y != 0){
        var temp = x
        x = y
        y = temp % x
    }
    return y
}

func test(){
    var m = 0
    var n = 0
    var k = 0
    var d = 0
    
    var a = 0
    var b = 0
    var c = 0
    
    var limit = Int(sqrt(1000.0))

    for m = 2; m <= limit; ++m{
        if((1000/2) % m == 0){
            if(m % 2 == 0){
                k = m + 1
            }
            else{
                k = m + 2
            }
            while(k < 2 * m && k <= 1000 / (2*m)){
                if(1000 / (2*m) % k == 0 && gcd(k, m) == 1){
                    d = 500 / (k*m)
                    n = k - m
                    a = d*(m*n-n*n)
                    b = 2*d*n*m
                    c = d * (m * m + n*n)
                    println("A = \(a) B = \(b) C = \(c)")
                    println(a*b*c)
                }
            }
        }
    }
}

test()


