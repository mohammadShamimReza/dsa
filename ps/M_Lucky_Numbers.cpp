#include<stdio.h>
#include<iostream>
using namespace std;

int luckyFunction(int n){
    bool res = true;
  

    while (n)
    {
        int nn = n % 10;
        if (nn != 4 && nn != 7)
        {

            res = false;
            break;
        }
        n = n / 10;
    }
    return res;
}

int main (){
    int a, b;
    cin >> a >> b;
    int t = 0;
    for (int i = a; i <= b; i++)
    {
      bool res =  luckyFunction(i);
        if(res == true){
            cout << i <<  " ";
            t++;
        }
        }
        if(t == 0){
            cout << -1;
        }
    return 0;
}