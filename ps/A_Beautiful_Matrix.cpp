#include <iostream>
using namespace std;

int main (){
    int l, f;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int x;

            cin >> x;
            if(x == 1){
                l = i;
                f = j;

                cout << abs(l - 2) + abs(f - 2);

                return 0;
            }
        }
    }

  


}