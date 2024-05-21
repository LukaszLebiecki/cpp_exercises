#include <iostream>

int main() {
    float number1;
    float number2;
    char sign;
    float result;
    float result2;

    std::cout << "Wprowadz pierwsza liczbe: ";
    std::cin >> number1;

    std::cout << "Wprowadz druga liczbe: ";
    std::cin >> number2;

    std::cout << "Wprowadz znak dzialania: ";
    std::cin >> sign;

    switch(sign) {
        case '+': 
            result = number1 + number2;
            break;
        case '-': 
            result = number1 - number2;
            result2 = number2 - number1;
            if (result != result2) {
                std::cout << "Wynik dzialania " << number2 << " " << sign << " " << number1 << " = " << result2 << std::endl;            }
            break;
        case '*': 
            result = number1 * number2;
            break;
        case '/': 
            if (number2 != 0 and number1 !=0) {
                result = number1 / number2;
                result2 = number2 / number1;
                if (result != result2) {
                std::cout << "Wynik dzialania " << number2 << " " << sign << " " << number1 << " = " << result2 << std::endl;
            }
            } else {
                std::cout << "nie dziel przez 0!!!";
                return 1;
            }
            break;
        default:
            std::cout << "Nieznany operator";
            return 1;

    }

    std::cout << "Wynik dzialania " << number1 << " " << sign << " " << number2 << " = " << result;

    return 0;
}