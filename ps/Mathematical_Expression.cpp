#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;

    if (static_cast<int>(s) == 42){
        if(a * b == c)
            cout << "Yes";
        else
            cout << a*b;
    }else if(static_cast<int>(s) == 43){
        if(a + b == c)
            cout << "Yes";
        else
            cout << a+b;
    }else if(static_cast<int>(s) == 45){
        if(a - b == c)
            cout << "Yes";
        else
            cout << a-b;
    }else if(static_cast<int>(s) == 47){
        if(a / b == c)
            cout << "Yes";
        else
            cout << a/b;
    }

        return 0;
}