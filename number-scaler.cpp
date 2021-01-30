#include <iostream>

double multiplier(double inputNum, int scaler) {
    return inputNum * scaler;
}

int main()
{
    //get user input
    double inputNum{};
    int scaler{};
    std::cout << "What number would you like to multiply? ";
    std::cin >> inputNum;
    std::cout << std::endl << "What is your scaler? ";
    std::cin >> scaler;
    
    //multiply input
    double multipliedInput = multiplier(inputNum, scaler);

    //print output
    std::cout << "\n\nThe output is: " << multipliedInput;
    return 0;
}
