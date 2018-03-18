#include <iostream>                                     //Line 1
#include "clock.h"                                  //Line 2

using namespace std;                                    //Line 3

int main()                                              //Line 4
{                                                       //Line 5
    clock myClock;                                  	//Line 6
    clock yourClock;                                	//Line 7

    int hours;                                          //Line 8
    int minutes;                                        //Line 9
    int seconds;                                        //Line 10

    myClock.setTime(5, 4, 30); //Set the time of myClock; Line 11

    cout << "Line 12: myClock: ";                       //Line 12
    myClock.printTime();  //print the time of myClock;    Line 13
    cout << endl;                                       //Line 14

    cout << "Line 15: yourClock: ";                     //Line 15
    yourClock.printTime(); //print yourClock              Line 16
    cout << endl;                                       //Line 17
 
    yourClock.setTime(5, 45, 16); //Set the time of 
                                  //yourClock;            Line 18

    cout << "Line 19: After setting, yourClock: ";      //Line 19
    yourClock.printTime(); //print yourClock ;            Line 20
    cout << endl;                                       //Line 21

        
    if (myClock.equalTime(yourClock)) //Compare myClock 
                                      //and yourClock;    Line 22
        cout << "Line 23: Both times are equal."
             << endl;                                   //Line 23
    else                                                //Line 24
        cout << "Line 25: The two times are not equal."
             << endl;                                   //Line 25

    cout << "Line 26: Enter the hours, minutes, and "
         << "seconds: ";                                //Line 26
    cin >> hours >> minutes >> seconds;                 //Line 27
    cout << endl;                                       //Line 28

        
    myClock.setTime(hours, minutes, seconds); //Set the time 
                   //of myClock using the value of the variables
                   //hours, minutes, and seconds.         Line 29

    cout << "Line 30: New myClock: ";                   //Line 30
    myClock.printTime();   //print the time of myClock;   Line 31
    cout << endl;                                       //Line 32

        
    myClock.incrementSeconds();  //Increment the time of 
                                 //myClock by one second; Line 33

    cout << "Line 34: After incrementing myClock by " 
         << "one second, myClock: ";                    //Line 34
    myClock.printTime();   //print the time of myClock    Line 35
    cout << endl;                                       //Line 36

        
    myClock.getTime(hours, minutes, seconds);  //Retrieve the 
               //hours, minutes, and seconds of myClock;  Line 37

    cout << "Line 38: hours = " << hours 
         << ", minutes = " << minutes 
         << ", seconds = " << seconds << endl;          //Line 38

    return 0;                                           //Line 38
}//end main                                             //Line 40

