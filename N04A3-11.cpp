#include<bits/stdc++.h>
long long odds [10000000];
long long evens[10000000];
int main()
{

    int n,indx_odd = 0,indx_even = 0;
    std::cin >> n;
    int x,temp;
    for (int i = 0; i < n; i++)
    {
        std::cin >> x;
        if (x & 1)
        {
           odds[indx_odd++] = x;
            for (int j = indx_odd-1; j > 0; j--)
            {
                if (odds[j] < odds[j - 1])
                {
                     temp = odds[j];
                    odds[j] = odds[j - 1];
                    odds[j - 1] = temp;
                }
                else
                {
                    break;
                }
            }
        }

        else
        {
             // push back to evens, sort
            evens[indx_even++] = x;
            // transverse from end to beginning, if the current number is greater than the previous number, swap
            // else break
            for (int j = indx_even-1; j > 0; j--)
            {
                if (evens[j] > evens[j - 1])
                {
                     temp = evens[j];
                    evens[j] = evens[j - 1];
                    evens[j - 1] = temp;
                }
                else
                {
                    break;
                }
            }
            
        }
    }

    // cout
    for (int i = 0; i < indx_odd; i++)
        std::cout << odds[i] << " ";
    std::cout << std::endl;
    for (int i = 0; i < indx_even; i++)
        std::cout << evens[i] << " ";
}