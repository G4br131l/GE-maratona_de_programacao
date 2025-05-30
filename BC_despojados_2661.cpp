#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

long long int fatores(long long int n) {
    long long int count = 0;
    long long int i = 2;
    long long a = n;

    while (i * i <= a)
    {
        if (n%i==0)
        {
            count++;
        }
        
        while (n%i == 0) {
            n /= i;
        }
        
        i++;
    }

    if (n> 1)
    {
        count++;
    }

    return count;
}

int main(int argc, char const *argv[])
{
    long long int n;

    cin >> n;

    long long q = fatores(n);

    long long dois_elevado = 1;

    if (q < 2)
        cout << 0 << endl;
    else {
        long long result = (dois_elevado<<q) - q - 1;
        cout << result << endl;
    }
}
