// Playground - noun: a place where people can play

import Cocoa

func multiples() -> Int{
    var sum = 0
    var index = 0
    while (index < 1000){
        if(index % 3 == 0 || index % 5 == 0){
            sum += index
        }
        index++
    }
    return sum
}

func generators() -> Int{
    var threes = 3
    var fives = 5
    
    var fiveSum = 0
    var threesSum = 0
    
    while(fives < 1000){
        fives += 5
        fiveSum += fives
    }
    
    while(threes < 1000){
        threes += 3
        threesSum += threes
    }
    
    return threesSum + fiveSum
}

//println(multiples())
//println(generators())

func tMultiples() -> Int{
    var values = [Int: Int]()
    
    var threes = 3
    var fives = 5
    var sum = 0
    
    while (threes < 1000){
        values.updateValue(threes, forKey: threes)
        threes += 3
    }
    
    while (fives < 1000){
        values.updateValue(fives, forKey: fives)
        fives += 5
    }
    
    for key in values.keys{
        sum += key
    }
    
    return sum
}

println(tMultiples())

