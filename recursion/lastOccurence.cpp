#include <iostream>
#include <string>
using namespace std;

int lastOccurence(string& name, char target) {
    for (int i = name.length() - 1; i >= 0; i--) {
        if (name[i] == target) {
            return i;
        }
    }
    return -1; // If not found
}

int main() {
    string name = "AMANMQWERTA";
    cout << "String is: " << name << endl;

    char target = 'A';  // Correct type
    int index = lastOccurence(name, target);

    if (index != -1)
        cout << "Last occurrence of '" << target << "' is at index: " << index << endl;
    else
        cout << "Character not found!" << endl;

    return 0;
}
