#include<cmath>
#include<iostream>
int main(int argc, char** args){
    uint16_t type;
    int diameter;
    int radius;
    std::cout << "What do you want to calculate?\n1-radius\n2-diameter\n3-circumference?\n4-area" << std::endl;
    std::cin >> type ;
    switch(type){
        case 1:
            std::cout << "what is the radius?"<< std::endl;
            std::cin >> diameter;
            std::cout<< "The radius of your circle is:" << diameter / 2;
            break;
        case 2:
            std::cout <<"what is the diameter?"<< std::endl;
            std::cin >> radius;
            std::cout << "The diameter of your circle is:" << radius * 2;
            break;
        case 3:
            std::cout << "1-with diameter\n2-with radius"<< std::endl;
            std::cin >> type;
            switch(type){
                case 1:
                    std::cout <<"what is the radius?"<< std::endl;
                    int radius;
                    std::cout << "The circumference of your circle is:"<<2 * 3.141 * radius;
                    break;
                case 2:
                    std::cout << "what is the diameter?"<< std::endl;
                    std::cin >> diameter;
                    std::cout << "The circumference of your circle is:" <<3.141 * diameter;
                    break;
            }
            break;
        case 4:
        std::cout << "what is the radius?"<< std::endl;
            std::cin >> radius;
            std::cout <<"The area of your circle is:" << 3.141 * pow(radius,2);
            break;
    }
    return 0;
}