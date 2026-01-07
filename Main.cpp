#include <iostream> 
#include <thread>
#include <chrono>

int main(){

    using namespace std::chrono_literals;

    bool state=true; 

    while (true) {
        if (state) {
            std::cout<< "HIGH" <<std::endl;
        } else {
            std::cout<< "LOW" <<std::endl;
        }

        std::this_thread::sleep_for(1s);

        state =!state;
    }
    return 0;
}