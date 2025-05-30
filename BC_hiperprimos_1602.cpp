#include <iostream>
#include <cmath>

using namespace std;


long long fatores(long long n) {
    long long count = 1;
    long long i = 2;
    long long a = n;

    while (i <= a)
    {
        if (n%i==0)
        {
            count++;
        }
        
       /*  while (n%i == 0) {
            n /= i;
            count++;
        } */
        
        i++;
    }

    /* if (n > 1)
    {
        count++;
    } */
    
    return count;
}

bool e_primo(int n) {
    if (n == 2)
    {
        return true;
    }
    
    for(int i = 3; i * i <= n; i += 2){
        if (n%i == 0)
        {
            return false;
        }
    }

    return true;
}

int main(int argc, char const *argv[])
{
    long long input;

    while (cin >> input) {

        int count = 0;

        for (int i = 2; i <= input; i++)
        {
            long divisores = fatores(i);
            cout << i << " divisores " << divisores << endl;
            long divisor_do_divisor = e_primo(divisores);

            if (divisor_do_divisor)
            {
                count++;
            }
        }
        
        cout << count << endl;

    }


    return 0;
}
