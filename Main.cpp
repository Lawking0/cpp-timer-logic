#include <iostream> 
#include <thread>
#include <chrono>


int main(){

    using namespace std::chrono_literals; 

    std::cout << "waiting 1 second..."<< std::endl;

    std::this_thread::sleep_for(1s);


 std::string first= "HIGH";
 std::string second="LOW";

 while (true) {
std::cout<< first <<std::endl;

std::cout << "Done waiting."<<std::endl;

std::cout <<second <<std::endl;
    
 }
    return 0;
}