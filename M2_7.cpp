//7. Write a program to convert infix expression to postfix expression (basic).
#include <iostream>
#include <cctype>      // for isalnum()
using namespace std;

const int n = 100;

char stackArr[n];
int top = -1;

void push(char c) {
    if (top < n - 1) {
        top++;
        stackArr[top] = c;
    }
}

char pop() {
    if (top >= 0) {
        return stackArr[top--];
    }
    return '\0';
}

char peek() {
    if (top >= 0) return stackArr[top];
    return '\0';
}

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
}

int main() {
    char infix[n], postfix[n];
    int j = 0;

    cout << "Enter infix expression: ";
    cin >> infix;

    for (int i = 0; infix[i] != '\0'; i++) {
        char ch = infix[i];

        // If it's an operand, add to postfix
        if (isalnum(ch)) {
            postfix[j++] = ch;
        }
        // Opening bracket
        else if (ch == '(') {
            push(ch);
        }
        // Closing bracket
        else if (ch == ')') {
            while (top != -1 && peek() != '(') {
                postfix[j++] = pop();
            }
            pop(); // pop '('
        }
        // Operator
        else {
            while (top != -1 && precedence(peek()) >= precedence(ch)) {
                postfix[j++] = pop();
            }
            push(ch);
        }
    }

    // Pop remaining
    while (top != -1) {
        postfix[j++] = pop();
    }

    postfix[j] = '\0';

    cout << "Postfix expression: " << postfix << endl;

    return 0;
}
