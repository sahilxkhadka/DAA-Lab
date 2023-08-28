#include<bits/stdc++.h>
using namespace std;
int fibo(int n)
{
 int f[100];
 f[0] = 0;
 f[1] = 1;
 for(int i=2; i<=n; i++)
 f[i] = f[i-1] + f[i-2];
 return f[n];
}
int main()
{
 int num;
 cout << "Enter n to print nth fibonacci number: ";
 cin >> num;
 cout << "Fibonacci number " << num << " is " << fibo(num);
 return 0;
}