#include <iostream>
#include <cmath> 

int main()
{
    int start = 3; //Начальное значение
    int end = 63; //Конечное значение
    int step = 3; //Шаг 
    double result = 0;

//Вычисление корня с конечного значения и прибавление уменьшенного последующего значение
    for (int i = end; i >= start; i -= step) { 
        result = std::sqrt(i + result);        
        }
    std::cout << "Result: " << result << std::endl; //Вывод результата

    return 0;
}