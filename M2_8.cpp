//8. Write a program to evaluate a postfix expression using stack. 
#include <iostream>
#include <cctype>   // for isdigit()
using namespace std;

const int n = 100;

int stackArr[n];
int top = -1;

void push(int x) {
    if (top < n - 1)
        stackArr[++top] = x;
}

int pop() {
    if (top >= 0)
        return stackArr[top--];
    return -1;   // error case (not needed here)
}

int evaluatePostfix(char exp[]) {
    for (int i = 0; exp[i] != '\0'; i++) {
        char ch = exp[i];

        // If operand → push to stack
        if (isdigit(ch)) {
            push(ch - '0');    // convert char digit to integer
        }
        // If operator → pop two values and apply
        else {
            int val2 = pop();
            int val1 = pop();

            switch (ch) {
                case '+': push(val1 + val2); break;
                case '-': push(val1 - val2); break;
                case '*': push(val1 * val2); break;
                case '/': push(val1 / val2); break;
            }
        }
    }

    // Final result on top
    return pop();
}

int main() {
    char postfix[n];

    cout << "Enter postfix expression: ";
    cin >> postfix;

    int result = evaluatePostfix(postfix);
    cout << "Result = " << result << endl;

    return 0;
}
