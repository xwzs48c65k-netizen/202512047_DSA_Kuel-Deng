#include <iostream>
#include <vector>
#include <string>
using namespace std;

// ─────────────────────────────────────────────
// QUESTION 1: Linear Search Algorithm
// ─────────────────────────────────────────────

void linearSearch() {
    int n;
    cout << "How many family members? ";
    cin >> n;
    cin.ignore();

    vector<string> names(n);
    vector<int> ages(n);

    for (int i = 0; i < n; ++i) {
        cout << "Enter name of member " << i + 1 << ": ";
        getline(cin, names[i]);
        cout << "Enter age of " << names[i] << ": ";
        cin >> ages[i];
        cin.ignore();
    }

    string key;
    cout << "\nEnter a name to search: ";
    getline(cin, key);

    bool found = false;
    for (int i = 0; i < n; ++i) {
        if (names[i] == key) {
            cout << key << " was found and is aged " << ages[i] << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Not found" << endl;
    }
}

// ─────────────────────────────────────────────
// QUESTION 2: Bubble Sort – Names (Ascending)
// ─────────────────────────────────────────────

void bubbleSortNames() {
    vector<string> names = {"Zuck", "Shayd", "Emely", "Amjed", "Esther", "Manar", "Anne"};

    cout << "\nBefore sorting: ";
    for (const string& s : names) cout << s << " ";
    cout << endl;

    int n = names.size();
    for (int i = 0; i < n - 1; ++i) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (names[j] > names[j + 1]) {
                swap(names[j], names[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }

    cout << "After sorting:  ";
    for (const string& s : names) cout << s << " ";
    cout << endl;
}

// ─────────────────────────────────────────────
// QUESTION 3: Bubble Sort – Numbers (Ascending)
// ─────────────────────────────────────────────

void bubbleSortNumbers() {
    vector<int> numbers = {109, 99, 23, 45, 23, 2, 5, 1};

    cout << "\nBefore sorting: ";
    for (int x : numbers) cout << x << " ";
    cout << endl;

    int n = numbers.size();
    for (int i = 0; i < n - 1; ++i) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (numbers[j] > numbers[j + 1]) {
                swap(numbers[j], numbers[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }

    cout << "After sorting:  ";
    for (int x : numbers) cout << x << " ";
    cout << endl;
}

// ─────────────────────────────────────────────
// MAIN
// ─────────────────────────────────────────────

int main() {
    cout << "===== QUESTION 1: Linear Search =====" << endl;
    linearSearch();

    cout << "\n===== QUESTION 2: Bubble Sort (Names) =====" << endl;
    bubbleSortNames();

    cout << "\n===== QUESTION 3: Bubble Sort (Numbers) =====" << endl;
    bubbleSortNumbers();

    return 0;
}
