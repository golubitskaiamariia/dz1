//Заданы стороны треугольника: a, b, c. Проверить, является ли этот треугольник остроугольным.

#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
    double a, b, c; // Объявляем переменные. 
    cout << "Еnter side a: \n"; // Вводим исходные данные стороны а
    cin >> a;
    cout << "Еnter side b: \n"; // Вводим исходные данные стороны b
    cin >> b;
    cout << "Еnter side c: \n"; // Вводим исходные данные стороны c
    cin >> c;

    if (a == b){
        if(a > c){
        cout << "A triangle is an acute triangle";
        }
        if(c > a){
        cout << "A triangle is not an acute triangle" << endl;
        }
    }
    if (a == c){
        if(a > b){
        cout << "A triangle is an acute triangle";
        }
        if(a < b){
        cout << "A triangle is not an acute triangle";
        }
    }
    if (b == c){
        if(b > a){
        cout << "A triangle is an acute triangle";
        }
        if(b < a){
        cout << "A triangle is not an acute triangle";
        }
    }
    
    if((a == b) && (a==c) && (b==c)){
        cout << "A triangle is an acute triangle";
    }

    if((a > b) && (a > c) && (b != c)){ //Проверяем сторону а на наибольшее значение
        if(pow(a, 2) < (pow(b, 2) + pow(c, 2))){ // Проверяем, чтобы квадрат наибольшей стороны был меньше суммы квадратов двух остальных
            cout << "A triangle is an acute triangle";
        }
        else{ cout << "A triangle is not an acute triangle";}
    }
    if((b > a) && (b > c) && (a != c)){ //Проверяем сторону а на наибольшее значение
        if(pow(b, 2) < (pow(a, 2) + pow(c, 2))){ // Проверяем, чтобы квадрат наибольшей стороны был меньше суммы квадратов двух остальных
            cout << "A triangle is an acute triangle";
        }
        else{ cout << "A triangle is not an acute triangle";}
    }
    if((c > a) && (c > b) && (a != b)){ //Проверяем сторону а на наибольшее значение
        if(pow(c, 2) < (pow(a, 2) + pow(b, 2))){ // Проверяем, чтобы квадрат наибольшей стороны был меньше суммы квадратов двух остальных
            cout << "A triangle is an acute triangle";
        }
        else{ cout << "A triangle is not an acute triangle";}

    }

    return 0;
}