// Number of permutations climbing a stairway (steps)
// Problem description,  you can climb the stairs by  one step or by two steps up but never backwards.
// There is nth steps total.

// Logical table assuming 5 total steps
// 7 ways to climb up
//step 1  2  3  4  5  sp sp 
// 1.  0  0  0  0  0  3  3   // Initialize stairway 3 is space delimiters boundry
// 2.  1  1  1  1  1  3  3   // each step climbed  f(x)=1,1,1,1,1,3,3
// 3.  1  0  2  0  2  3  3   // 1st step then jump 2, note jumped in space on 2nd 3 f(x+1) 
// 4.  1  1  0  2  1  3  3   // 1st,2nd step then jump 2, f(x+2) 
// 5.  0  2  0  2  1  3  3   // 2nd step jump f(x+3) 
// 6.  0  2  1  0  2  3  3   // 2nd steps jump permutations f(x+4)
// 7.  0  2  1  1  1  3  3   // 2nd steps jump permutations f(x+5)

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
int fib(int n); // 2nd serires 
int fib3(int n);  // fibonacci series

//Parameters
int numsteps=0;   // total no. steps global param


// Functions INPUT
// Enter no. steps total 

int enterend(int)
 {
 
  cout << " Enter number of steps to climb:" ;
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
      cout << "f(x):" << f[i]; 
  } 
  
  return f[n]; 
} 

int fib3(int n) 
{ 
  /* Declare an array to store Fibonacci numbers. */
  int f3[n+2];   // 1 extra to handle case, n = 0 
  int i; 
  
  /* 0th and 1st number of the series are 0 and 1*/
  f[0] = 0; 
  f[1] = 1; 
  
  for (i = 2; i <= n; i++) 
  { 
      /* Add the previous 2 numbers in the series 
         and store it */
      f3[i] = f3[i-1] + f3[i-2] + f3[i-3];
      cout << "f3(x):" << f3[i]; 
  } 
  
  return f3[n]; 
} 

// MAIN 
int  main()
        {
                cout << "Enter no. steps to climb :"   << endl;
                enterend(numsteps); // Get number of steps
                cout << "Total is: " << numsteps << endl;
                        
 //Fibonacci
                 int n = numsteps; 
                 printf("%d FibResult:", fib(n)); 
                  printf("%d FibResult 3 steps:", fib3(n));
                 getchar(); 

                return 0;
        }

