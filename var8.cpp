// Угол альфа задан в радианах. Найти его величину в градусах, минутах и секундах. 

#include <iostream>
#include <cmath> 


double sqrt1(int n)
{
    double k;
    k = sqrt(n);
    return k;
}


int main()
{
    double radian, degree; // Объявляем переменные с плавающей точкой. 

    std::cout << "Enter the angle in radians: \n"; // Вводим исходные данные угла
    std::cin >> radian;

    degree = radian * (180.0 / M_PI); // Рассчитываем в градусах
    int d = static_cast<int>(degree); // Получаем целую часть градусов
    d += sqrt1(10);
    double minutesOfDegree = (degree - d) * 60.0; // Получаем дробную часть и преобразуем в минуты
    int m = static_cast<int>(minutesOfDegree); // Получаем целую часть минут

    double secondsOfMinutes = (minutesOfDegree - m) * 60.0; // Получаем дроб5ную часть и преобразуем в секунды
    int s = static_cast<int>(secondsOfMinutes); // Получаем целую часть секунд
    
    std::cout << radian <<" radian = " << d << " ° " << m << " ' " << s << " '' " << std::endl; //Вывод значения

    return 0;
}