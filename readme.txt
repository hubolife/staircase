# stair.cpp requires gcc 
# To compile use the following
g++ -W -Wall -pedantic -o stair -p stair.cc -fpermissive

or gcc ..

// Number of permutations climbing a stairway (steps)
// Problem description,  you can climb the stairs by  one step or by two steps up but never backwards.
// There is nth steps total.


// Logical table assuming 5 total steps
// 6 ways to climb up array
//step 1  2  3  4  5  sp  
// 1.  1  1  1  1  1  3     // Each step climbed  f(x)=1,1,1,1,1,3,3
// 2.  1  0  2  0  2  3     // 1st step then jump 2, note jumped in space on 2nd 3 f(x+1) 
// 3.  1  1  0  2  1  3     // 1st,2nd step then jump 2, f(x+2) 
// 4.  0  2  0  2  1  3     // 2nd step jump f(x+3) 
// 5.  0  2  1  0  2  3     // 2nd steps jump f(x+4)
// 6.  0  2  1  1  1  3     // 2nd steps jump f(x+5)

// doing a 3 step jump add the top 
//step 1  2  3  4  5  sp  
// 7.  1  0  0  3  1  3  3   // 1st and jump 3
// 8.  0  0  0  3  1  3  3   // jump 3 and 1
// 9.  0  2  0  0  3  3  3   // jump 2 and 3


// We can easily find recursive nature in above problem.
// The person can reach n’th stair from either (n-1)’th stair or from (n-2)’th stair.
// Let the total number of ways to reach n’t stair be ‘ways(n)’.
// The value of ‘ways(n)’ can be written as following.


// fabonacci series function to solve problem 

//f(n)=f(n-1)+f(n-2)  one or two steps
//(f(n)=f(n-1)+f(n-2)+f(n-3) one , two or three steps 


// Building stairs calcultor link
//  https://www.calculator.net/stair-calculator.html
// You can use the problem to calculate how many ways to climp up or down stairs
// The run and rise is determine if a person ability to can climb two steps or even one if poorly designed stairway :)


