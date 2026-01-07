#include <iostream> 
#include <thread>
#include <chrono>

int main(){

    using namespace std::chrono_literals;

    bool state=true; 
    int counter=0;


    while ( true) {
        if (state) {
            std::cout<< "HIGH" <<std::endl;

            std::this_thread::sleep_for(5s);

            std::cout<< "LOW" <<std::endl;

            std::this_thread::sleep_for(5s);

           counter++;

           std::this_thread::sleep_for(5s);

           std::cout<< "COUNTER: " << counter << std::endl;
           
           std::this_thread::sleep_for(5s);
            if (counter>=5) {
                state=false;
            }
        }

        

        
    }
    return 0;
}