#include <iostream>
#include <string>
using namespace std;

string addTwoString(string& num1, string& num2) {
    string result = "";
    int carry = 0;

    int i = num1.length() - 1;
    int j = num2.length() - 1;

    while (i >= 0 || j >= 0 || carry > 0) {
        int digit1 = (i >= 0) ? num1[i] - '0' : 0;
        int digit2 = (j >= 0) ? num2[j] - '0' : 0;

        int sum = digit1 + digit2 + carry;
        result = char((sum % 10) + '0') + result;
        carry = sum / 10;

        i--;
        j--;
        
    }
    return result;
}

int main() {
    string number1 = "123";
    string number2 = "456";

    string result = addTwoString(number1, number2);
    cout << "Sum is: " << result << endl;

    return 0;

}
