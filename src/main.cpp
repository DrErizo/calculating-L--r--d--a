#include<iostream>
int main(int argc, char** args){
    uint8_t type;
    int diameter;
    int radius;
    std::cout << "What do you want to calculate?\n1-radius\n2-diameter\n3-circumference?";
    std::cin >> type ;
    switch(type){
        case 1:
            std::cout << "what is the diameter?";
            std::cin >> diameter;
            std::cout << diameter / 2;
            break;
        case 2:
            std::cout <<"what is the radius?";
            std::cin >> radius;
            std::cout << diameter * 2;
            break;
        case 3:
            std::cout << "1-with diameter\n2-with radius";
            std::cin >> type;
            
            if(type == 1){
                std::cout <<"what is the radius?";
                int radius;
                std::cout <<2 * 3.141 * radius;
            }
            if(type == 2){
                std::cout << "what is the diameter?";
                std::cin >> diameter;
                std::cout <<3.141 * diameter;
            }
            break;
    }
    return 0;
}