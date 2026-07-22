#include<iostream>
#include<cmath>
using namespace std;

void increment(int *a,int *b){
    int res1 = *a + *b;
    cout << res1 << endl;
    int res2 = *a - *b ;
    cout << abs(res2);
};

int main (){
    int a, b;
    cin >> a;
    cin >> b;
    increment(&a, &b);
    return 0;
}