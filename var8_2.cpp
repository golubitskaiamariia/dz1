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
        cout << "A triangle is an acute triangle1";
        }
        if(c > a){
        cout << "A triangle is not an acute triangle2" << endl;
        }
    }
    else if (a == c){
        if(a > b){
        cout << "A triangle is an acute triangle3";
        }
        if(a < b){
        cout << "A triangle is not an acute triangle4";
        }
    }
    else if (b == c){
        if(b > a){
        cout << "A triangle is an acute triangle5";
        }
        if(b < a){
        cout << "A triangle is not an acute triangle6";
        }
    }
    
    else if((a == b) && (a==c) && (b==c)){
        cout << "A triangle is an acute triangle7";
    }

    else if((a > b) && (a > c) && (b != c)){ //Проверяем сторону а на наибольшее значение
        if(pow(a, 2) < (pow(b, 2) + pow(c, 2))){ // Проверяем, чтобы квадрат наибольшей стороны был меньше суммы квадратов двух остальных
            cout << "A triangle is an acute triangle8";
        }
        else{ cout << "A triangle is not an acute triangle9";}
    }
    else if((b > a) && (b > c) && (a != c)){ //Проверяем сторону а на наибольшее значение
        if(pow(b, 2) < (pow(a, 2) + pow(c, 2))){ // Проверяем, чтобы квадрат наибольшей стороны был меньше суммы квадратов двух остальных
            cout << "A triangle is an acute triangle10";
        }
        else{ cout << "A triangle is not an acute triangle11";}
    }
    else if((c > a) && (c > b) && (a != b)){ //Проверяем сторону а на наибольшее значение
        if(pow(c, 2) < (pow(a, 2) + pow(b, 2))){ // Проверяем, чтобы квадрат наибольшей стороны был меньше суммы квадратов двух остальных
            cout << "A triangle is an acute triangle12";
        }
        else{ cout << "A triangle is not an acute triangle13";}

    }

    return 0;
}