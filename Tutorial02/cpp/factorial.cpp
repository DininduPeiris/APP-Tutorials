#include <iostream> 
using namespace std; 
 
int main() 
{ 

    int x; 
 
    cout << "Enter a number: "; 
    cin >> x;

    // Lambda function example
    auto factorial = [](int n, auto& self) -> int 
    { 
        if (n == 0) 
            return 1; 
 
        return n * self(n - 1, self); 
    }; 
 
    int result = factorial(x, factorial); 
 
    cout << "Factorial = " << result << endl; 
 
    return 0; 
}