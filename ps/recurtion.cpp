#include<bits/stdc++.h>
using namespace std;
int fibo(int n)
{
    if (n <= 1)
    {
        return n;
    }

    int p = fibo(n - 1) + fibo(n - 2);
    return p;
};
int main()
{
    int p = fibo(6);
    // cout << p;
    return 0;
}