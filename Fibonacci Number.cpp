// Given a number N, figure out if it is a member of fibonacci series or not. Return true if the number is member of fibonacci series else false.
// Fibonacci Series is defined by the recurrence
//     F(n) = F(n-1) + F(n-2)
// where F(0) = 0 and F(1) = 1.



bool checkMember(int n){

    int first = 0, second = 1, fib = 0;
    
    while(fib < n)
    {   if((first + second) <= n){
        fib = first + second;
        first = second;
        second = fib;
    	}
     	else 
            return 0;
    }
    if(fib == n)
          return '1';

}

