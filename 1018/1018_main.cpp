#include <iostream>
using namespace std;

int chass_min = 64;

char** make_solve(int a) {
    char** chass = new char* [8];
    for (int i = 0; i < 8; i++) {
        chass[i] = new char[8];
        for (int j = 0; j < 8; j++) {
            if ((i + a) % 2 == a)
                chass[i][j] = (j % 2 == a) ? 'B' : 'W';
            else
                chass[i][j] = (j % 2 == a) ? 'W' : 'B';
        }
    }
    return chass;
}

void brute_force(char** chass, char** chass_s, int n, int m) {
    int sum;
    for (int i = 0; i <= n - 8; i++) {
        for (int j = 0; j <= m - 8; j++) {
            sum = 0;
            for (int a = 0; a < 8; a++) {
                for (int b = 0; b < 8; b++) {
                    sum += (chass[i + a][j + b] == chass_s[a][b]) ? 0 : 1;
                    //printf("%c", chass[i + a][j + b]);
                }
                //printf("\n");
            }
            chass_min = (chass_min < sum) ? chass_min : sum;
        }
    }
}
/*
void print(char** solve) {          //  흑/백 출력
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%c", solve[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    cout << chass_min << endl;
}
*/

int main() {
    int n, m; scanf_s("%d %d", &n, &m);
    //입력
    char** chass = new char* [n];
    for (int i = 0; i < n; i++) {
        chass[i] = new char[m];
        for (int j = 0; j < m; j++) {
            do {
                scanf_s("%c",&chass[i][j]);
            } while (chass[i][j] == '\n');
        }
    }
    //printf("\n");

    char** solve = make_solve(1);
    brute_force(chass, solve, n, m);

    //print(solve);

    for (int i = 0; i < 8; i++) delete[] solve[i];
    delete[] solve;

    solve = make_solve(0);
    brute_force(chass, solve, n, m);

    //print(solve);


    for (int i = 0; i < 8; i++) delete[] solve[i];
    delete[] solve;

    printf("%d", chass_min);

    for (int i = 0; i < n; i++) delete[] chass[i];
    delete[] chass;

    return 0;
}
