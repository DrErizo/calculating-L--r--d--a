#include<cmath>
#include <stdio.h>
#include<iostream>
int main(int argc, char** args){
    bool running;
    uint16_t type;
    uint16_t choice;
    int diameter;
    int radius;
    while(true){
        
        std::cout << "What do you want to calculate?\n1-radius\n2-diameter\n3-circumference?\n4-area" << std::endl;
        std::cin >> type ;
        
        switch(type){
            
            case 1:
                std::cout << "what is the radius?"<< std::endl;
                std::cin >> diameter;
                std::cout<< "The radius of your circle is:" << diameter / 2<< std::endl;
                break;
            
            case 2:
                std::cout <<"what is the diameter?"<< std::endl;
                std::cin >> radius;
                std::cout << "The diameter of your circle is:" << radius * 2<< std::endl;
                break;
            
            case 3:
                std::cout << "1-with radius\n2-with diameter"<< std::endl;
                std::cin >> type;
                
                switch(type){
                    case 1:
                        std::cout <<"what is the radius?"<< std::endl;
                        std::cin >> radius;
                        std::cout << "The circumference of your circle is:"<<2 * 3.141 * radius<< std::endl;
                        break;
                    
                    case 2:
                        std::cout << "what is the diameter?"<< std::endl;
                        std::cin >> diameter;
                        std::cout << "The circumference of your circle is:" <<3.141 * diameter<< std::endl;
                        break;
                }
                break;
            case 4:
            std::cout << "what is the radius?"<< std::endl;
                std::cin >> radius;
                std::cout <<"The area of your circle is:" << 3.141 * pow(radius,2)<< std::endl;
                break;
        }
        std::cout << "Do you want to calculate again?\n1-Yes\n2-No" << std::endl;
        std::cin >> choice;
        
        switch(choice){
        case 1:
            running = true;
            break;
        case 2:
            running = false;
            exit(0);
            break;
        }
    }
    return 0;
}