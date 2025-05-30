#include <iostream>
#include <cmath>


const int maxp = 100000;
const int limtp = std::ceil(std::sqrt(maxp));

int np[limtp];

void ePrimo() {
    for (int i = 0; i < limtp; i++)
        np[i] = -1;

    for (int i = 2; i <= limtp; i++)
    {
        if (np[i] == -1)
        {
            np[i] = 1;

            for (int j = i+i; j <= limtp; j++)
            {
                np[j] = 0;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    ePrimo();
    int t;

    std::cin >> t;

    for (int i = 0; i < t; i++)
    {

        int n;
        std::cin >> n;

        int c[n];
        int p = 2;

        for (int i = 1; i <= n; i++)
        {
            if (i >= 2) p = 3;
            for (int j = 3; j <= i; j++)
            {
                p = p + j;
            }
            
            c[i-1] = std::ceil((double)p/i);
        }

        for (int i = 0; i < n; i++)
        {
            if (np[c[i]] == 1)
            std::cout << c[i] << " ";
        }
    }
    
    return 0;
}
