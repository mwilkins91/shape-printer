#include <iostream>

using namespace std;

void tryAgain() {
    while (true) { // user must hit return or exit
        string choice;
        cout << endl << "Do you want to go again?: ";
        cin >> choice;

        if (choice == "y" || choice == "yes") {
            return;
        } else if (choice == "n" || choice == "no") {
            exit(0);
        } else {
            cout << endl << choice << " is not a valid option! Please choose yes/no or y/n.";
        };
    }
}

void printShape(string choice) {
    string fullLine = "* * * * *";
    if (choice == "square") {
        for (size_t i = 0; i <= (fullLine.length() / 2); i++) {
            cout << fullLine << endl;
        }
    } else if (choice == "triangle") {
        for (size_t i = 0; i <= (fullLine.length() / 2); i++) {
            cout << fullLine.substr(0,(i * 2)) << endl;
        }
    } else if (choice == "circle") {
        for (size_t i = 0; i <= (fullLine.length() / 2); i++) {
            if (i == (fullLine.length() / 2) || i == 0) {
                cout << "  * * *  " << endl;
            } else {
                cout << fullLine << endl;
            }
        }
    } else {
        cout << choice << " is not a valid shape! Please select \"square\", \"triangle\", or \"circle\"." << endl;
    };

    tryAgain();
};

int main() {
    while (true) {
        string shapeChoice;
        cout << endl << "What shape would you like to print?" << endl;
        cout << "Options: \"square\", \"triangle\", or \"circle\"." << endl;
        cout << "Please enter your selection: ";
        cin >> shapeChoice;
        printShape(shapeChoice);
    }
}

