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

// by: hubert.bouma@gmail.com

#include <iostream>
#include <stdio.h>

using namespace std;

// Functions declared
int enterend(int);  // Enter number of steps for the stair
//int fib(int n=0); // fibonacci one or two steps serires 
//int countWays(int x);  // fibonacci series three steps

//Parameters
int numsteps=0;   // total no. steps global param


// Functions INPUT
// Enter no. steps total 

int enterend(int)
 {
 
  cout << " Enter number of steps to climb (max.500):" ;
  cin >> numsteps;
  return numsteps;
 }

// using fibonacci 

int fib(int n) 
{ 
  /* Declare an array to store Fibonacci numbers. */
  int f[n+2];   // 1 extra to handle case, n = 0 
  int i; 
  
  /* 0th and 1st number of the series are 0 and 1*/
  f[0] = 0; 
  f[1] = 1; 
  

  for (i = 2; i <= n; i++) 
  { 
      /* Add the previous 2 numbers in the series 
         and store it */
      f[i] = f[i-1] + f[i-2];
      cout << "f(x): " << f[i] << endl; 
  } 

   return f[n]; 
} 

// Returns number of ways to reach s'th stair 
int countWays(int s) 
{ 
    return fib(s); 
} 
  

// MAIN 
int  main()
        {
                 enterend(numsteps); // Enter  number of steps
                 if (numsteps <=1 || numsteps >=501) { 
                     cout << "invalid value " << endl;
                     return 0;
                 }
                                
                //cout << "Total is: " << numsteps << endl;
                        
 //Fibonacci
                 int n = numsteps; 
                 //cout << "One or Two steps climbed series added : " << fib(n) << endl;
                 cout << "Ways:" << countWays(numsteps+1) << endl;
                 getchar(); 

// Print build info
                cout << "Building stairs calcultor link https://www.calculator.net/stair-calculator.html" << endl;
                return 0;
        }

