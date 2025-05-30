#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

void infectado(int v[5][5], int **e, int i, int j) {
    e[i][j] = 1;

    if (i + 1 < 4 && v[i+1][j] == 0)
    {
        infectado(v, e, i+1, j);
    }
    if (i - 1 >= 0 && v[i-1][j] == 0)
    {
        infectado(v, e, i-1, j);
    }
    if (j + 1 < 4 && v[i][j+1] == 0) {
        infectado(v, e, i, j+1);
    }
    if (j - 1 >= 0 && v[i][j-1] == 0) {
        infectado(v, e, i, j-1);
    }
}

int main(int argc, char const *argv[])
{
    int n, count = 0;
    int T[5][5];

    cin >> n ;

    while (count < n) {
        for (int i = 0; i < 5; i++)
        {
            cin >> T[i][0] >> T[i][1] >> T[i][2] >> T[i][3] >> T[i][4];
        }

        int verificar[5][5] = {0};

        infectado(T, verificar, 0, 0);
        
        /* vector<int> pilha;
        vector<bool> visitados(25, false) ;

        if (T[0][0] == 0) pilha.push_back(0);

        bool flag = false;

        
        
        while (!pilha.empty())
        {
            int pop = pilha.back();
            visitados[pop] = true;
            pilha.pop_back();
            
            if (!pop % 5 - 1 < 0 && T[pop / 5][pop % 5 - 1] == 0 && !visitados[pop]) {
                pilha.push_back(pop - 1);
            }
            
            if (!pop / 5 - 1 < 0 && T[pop / 5 - 1][pop % 5] == 0 && !visitados[pop]) {
                pilha.push_back(pop - 5);
            }
            
            if (!pop % 5 + 1 > 4 && T[pop / 5][pop % 5 + 1] == 0 && !visitados[pop]) {
                if (pop == 24)
                {
                    flag = true;
                    break;
                }
                
                pilha.push_back(pop + 1);
            }
            
            if (!pop / 5 + 1 > 0 && T[pop / 5 + 1][pop % 5] == 0 && !visitados[pop]) {
                if (pop == 24)
                {
                    flag = true;
                    break;
                }
                
                pilha.push_back(pop + 5);
            }
        }
         */
        if (flag)
            cout << "COPS" << endl;
        else 
            cout << "ROBBERS" << endl;

        count++;
    }

    return 0;
}
