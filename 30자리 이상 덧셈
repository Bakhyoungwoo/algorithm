#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string addLongNumbers(const string& num1, const string& num2) {
    string result;
    int carry = 0;

    int i = num1.size() - 1;
    int j = num2.size() - 1;

    while (i >= 0 || j >= 0 || carry > 0) {
        int digit1 = (i >= 0) ? num1[i] - '0' : 0;
        int digit2 = (j >= 0) ? num2[j] - '0' : 0;

        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        int digit = sum % 10;

        result.push_back(digit + '0');

        if (i >= 0) i--;
        if (j >= 0) j--;
    }

    reverse(result.begin(), result.end());
    return result;
}

int main() {
    string num1;
    string num2;
    cin >> num1 >> num2;

    string sum = addLongNumbers(num1, num2);

    cout << "Sum: " << sum << endl;

    return 0;
}
