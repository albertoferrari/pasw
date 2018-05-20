/*
 * testThread06c.cpp
 */

#include <iostream>			// std::cout
#include <thread>			// std::thread

static const int num_threads = 10;


void call_from_thread() {
    std::cout << "Launched by thread ";
    std::cout << std::this_thread::get_id() << std::endl;
}

int main() {
    std::thread t[num_threads];

    //Launch a group of threads
    for (int i = 0; i < num_threads; ++i) {
        t[i] = std::thread(call_from_thread);
    }

    std::cout << "Launched from the main\n";

    //Join the threads with the main thread
    for (int i = 0; i < num_threads; ++i) {
        t[i].join();
    }

    return 0;
}
