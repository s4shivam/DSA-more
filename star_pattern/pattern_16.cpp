//     1
//    12
//   123
//  1234
// 12345
//  1234
//   123
//    12
//     1
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 9; i++)
    {
        int k = 1;
        for (int j = 1; j <= 5; j++)
        {
            if (i <= 5)
            {
                if (j >= 6 - i)
                {
                    cout << k++;
                }
                else
                {
                    cout << " ";
                }
            }
            else
            {
                if (j >= i - 4)
                {
                    cout << k++;
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
}