#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int d = 0, k = n;

    while (k != 0) {
        k /= 10;
        ++d;
    }

    int freq[10] = {0}; 
    k = n;

    while (k != 0) {
        int x = k % 10;
        freq[x]++;
        k /= 10;
    }

    cout << "Frequency of each digit:" << endl;
    for (int i = 0; i < 10; ++i) {
        if (freq[i] > 0) {
            cout << i << " : " << freq[i] << " times" << endl;
        }
    }

    return 0;
}

