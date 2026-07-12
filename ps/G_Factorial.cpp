#include <stdio.h>
#include <iostream>

using namespace std;
 
int main (){
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n1;
        cin >> n1;
       long long int res = 1;
        for (int j = 1; j <= n1; j++)
        {
            res = res * j;
        }
        cout << res << endl;
        res = 1;
    }

    return 0;
}