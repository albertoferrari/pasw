#include <iostream>
#include <string>
#include "Stack.h"

using namespace std;

int main()
{
    Stack st;
    string s;
    
    st.push("world");
    cout << "st.push(\"world\");" << endl;
    st.push("hello");
    cout << "st.push(\"hello\");" << endl;
    cout << "st = " << st << endl;
    st.pop(s);
    cout << "st.pop(s);" << endl;
    cout << "s = " << s << endl;
    cout << "st = " << st << endl;
    return 0;
}
