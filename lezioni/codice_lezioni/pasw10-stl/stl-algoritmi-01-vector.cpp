#include <iostream>
#include <vector>

using namespace std;

int main( )
{
    vector<int> container;

    for (int i = 1; i <= 4; i++)
        container.push_back(i*10);

    cout << "Here is what is in the container" << endl;
    vector<int>::iterator p;
    for (p = container.begin( ); p != container.end( ); p++)
        cout << *p << " ";
    cout << endl;
    for (unsigned int i = 0; i<container.size(); i++)
        cout << "container[" << i << "] == " << container[i] << endl;

    cout << "Change entries values:" << endl;
    for (p = container.begin( ); p != container.end( ); p++)
         *p = *p+*p;
    cout << "Container now contains" << endl;
 
    for (p = container.begin( ); p != container.end( ); p++)
        cout << *p << " ";
    cout << endl;

	cout << "Reverse:" << endl;
    vector<int>::reverse_iterator rp;
    for (rp = container.rbegin( ); rp != container.rend( ); rp++)
        cout << *rp << " ";
    cout << endl;


    return 0;
}
