#include<stdio.h>
#include<iostream>
using namespace std;
 
int addOfdecimal(int n){
    int sum = 0;

    while (n)
    {
       sum = sum + n % 10;
    
       n = n / 10;
    }

    return sum;
}
int main (){
    int n, a, b;
    cin >> n >> a >> b;
    int res = 0;

    for (int i = 1; i <= n; i++)
    {
        int decAdd = addOfdecimal(i);
        if (decAdd >= a && decAdd <= b)
        {
            res = res + i;
        }
    }
    cout << res;

    return 0;
}