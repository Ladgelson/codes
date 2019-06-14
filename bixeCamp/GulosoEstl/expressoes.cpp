#include <bits/stdc++.h>

using namespace std;

int main(void) {

    int N;

    cin >> N >> ws;

    while (N-- > 0) {
        string expression;
        stack<char> elements;
        bool valid = true;

        getline(cin, expression);


        for (char el : expression) {
            if (el == '{' || el == '[' || el == '(') {
                elements.push(el);
            }
            else if (elements.empty()) {
                valid = false;
            }
            else {
                char opening = elements.top();
                elements.pop();

                if (el == '}' && opening != '{'
                    || el == ']' && opening != '['
                    || el == ')' && opening != '(') {
                    valid = false;
                }
            }

            if (!valid) break;
        }

        if (valid && elements.empty()) {
            cout << "S" << endl;
        }
        else {
            cout << "N" << endl;
        }
    }

    return 0;
}
