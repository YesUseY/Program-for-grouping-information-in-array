#include <iostream>

using namespace std;

int main()
{
    int S[10] = {56, 84, 10, 9, 4, 78, 25, 36, 47};

    for (int i = 0; i < 10; i++) {
        for (int j = i; j < 10; j++) {
            if (S[i] > S[j]) {
                swap(S[i], S[j]);
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        cout << S[i] << endl;
    }

    return 0;
}
