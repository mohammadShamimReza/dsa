#include<bits/stdc++.h>
using namespace std;
 
int main (){
    string numbers;
    cin >> numbers;
    for (int i = 0; i < numbers.size(); i++)
    {
        if(numbers[i] == '+'){
            numbers.erase(i, 1);
        }
    }

    for (int i = 0; i < numbers.size(); i++)
    {

        for (int j = i+1; j < numbers.size(); j++)
        {
            if (numbers[i] > numbers[j])
            {

                int temp = numbers[j];
                numbers[j] = numbers[i];
                numbers[i] = temp;
            }
        }
        
    }

    for (int i = 0; i < numbers.size(); i++)
    {

        cout << numbers[i] << (i+1 < numbers.size() ? "+" : "");
    }
     return 0;
}