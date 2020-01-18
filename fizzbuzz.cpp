#include <iostream>
#include <stdlib.h>

int main(int argc,char** argv){
    if(!(argc==3)){
        std::cout << "Usage: fizzbuzz min max" << std::endl;
    }else{
        int fizzbuzz_count=atoi(argv[1]);
        int max_fizzbuzz=atoi(argv[2]);
        while(fizzbuzz_count<=max_fizzbuzz){
            if(fizzbuzz_count % 3 == 0 && fizzbuzz_count % 5==0){
                std::cout << "FizzBuzz" <<  std::endl;
            }else if(fizzbuzz_count % 3==0){
                std::cout << "Fizz" << std::endl;
            }else if(fizzbuzz_count % 5==0){
                std::cout << "Buzz" << std::endl;
            }else{
                std::cout << fizzbuzz_count << std::endl;
            }
            fizzbuzz_count++;
        }
    }
    return 0;
}