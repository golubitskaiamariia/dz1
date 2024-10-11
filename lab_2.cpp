#include <iostream>
#include <cmath> 

int main()
{
    int start, end, step; 
    double result = 0;
    std::cout << "Еnter starting value: \n"; // Вводим исходные данные стороны а
    std::cin >> start;
    std::cout << "Еnter final value: \n"; // Вводим исходные данные стороны b
    std::cin >> end;
    std::cout << "Еnter step: \n"; // Вводим исходные данные стороны c
    std::cin >> step;

//Вычисление корня с конечного значения и прибавление уменьшенного последующего значение
    for (int i = end; i >= start; i -= step) { 
        result = std::sqrt(i + result);        
        }
    std::cout << "Result: " << result << std::endl; //Вывод результата

    return 0;
}