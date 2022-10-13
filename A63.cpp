#include <iostream>
#include <cmath>
using namespace std;

int getsum(int x) {
    int result = 0;
    int number;
    int minimum, maximum;

    for (int i= 0; i < x; i++) {
        cout << "Enter number: ";
        cin >> number;
        result += number;
        if (i == 0) {
            minimum = number; 
            maximum = number;
        } else {
            minimum = min(minimum, number);
            maximum = max(maximum, number);
        }

    }
    return result - minimum - maximum;
}

int main() {
    int N;
    int sum;

    do {
        cout << "Enter number of inputs: ";
        cin >> N;
    } while (N < 3);

    sum = getsum(N);
    cout << "The sum is " << sum << endl;
}