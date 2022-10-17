// wap to implement queue data structure

#include <iostream>
using namespace std;
int main()
{

    int n, consonant = 0, vow = 0, dig = 0, spc = 0, temp;
    cout << "enter the size of ary: ";
    cin >> n;
    char ary[n];
    cout << "enter the elements of ary: ";
    cin >> ary;
    for (int i = 0; i < n; i++)
    {

        if (ary[i] == 'a' || ary[i] == 'e' || ary[i] == 'i' || ary[i] == 'o' || ary[i] == 'u')
        {
            vow++;
        }
        else if (ary[i] >= '0' && ary[i] <= '9')
        {
            dig++;
        }
        else if (ary[i] == NULL)
        {
            spc++;
        }
        else
        {
            consonant++;
        }
    }
    cout << "Number of consonant: " << consonant;
    cout << "\n Number of vowels: " << vow;
    cout << "\n Number of digits : " << dig;
    cout << "\n Number of space : " << spc;

    return 0;
}