#include<iostream>
using namespace std;
 
int main (){
    int x, y;
    cin >> x >> y;
    int l = 0;

    while (x <= y)
    {
        l++;
        x = 3 * x;
        y = 2 * y;
    }
    cout << l;
    return 0;
}