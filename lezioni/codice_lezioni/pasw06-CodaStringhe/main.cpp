#include <iostream>
#include <string>
#include "Queue.h"

using namespace std;

int main()
{
    Queue q;
    string s;
    
    q.enqueue("hello");
    cout << "q.enqueue(\"hello\");" << endl;
    q.enqueue("world");
    cout << "q.enqueue(\"world\");" << endl;
    cout << "q = " << q << endl;
    q.dequeue(s);
    cout << "q.dequeue(s);" << endl;
    cout << "s = " << s << endl;
    cout << "q = " << q << endl;
    return 0;
}
