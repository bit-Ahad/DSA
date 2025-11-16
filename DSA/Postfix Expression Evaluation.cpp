#include <iostream>
#include <stack>
using namespace std;

int post_exp_val(string ex) {
    stack<int> st;
    for (int i = 0; i < ex.length(); i++) {
        char ch = ex[i];
        
	        if (isdigit(ch)) {
	            st.push(ch - '0');  // convert char to int
	        }
        else {
            int op1 = st.top(); 
			st.pop();
            int op2 = st.top(); 
			st.pop();

            switch (ch) {
                case '+':
                    st.push(op2 + op1);
                    break;
                case '-':
                    st.push(op2 - op1);
                    break;
                case '*':
                    st.push(op2 * op1);
                    break;
                case '/':
                    st.push(op2 / op1);
                    break;
                default:
                    cout << "Invalid operator: " << ch << endl;
                    return -1;
            }
        }
    }
    return st.top();
}

int main() {
    string exp;
    cout << "\nEnter Postfix Expression: ";
    cin >> exp;
//	cout<<exp[0]<<exp[1]<<exp[2]<<exp[3];

    cout << "\nResult is: " << post_exp_val(exp) << endl;

    return 0;
}
