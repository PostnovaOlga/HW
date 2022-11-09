#include <iostream>
#include <math.h>
void numbering(int n) {
    std::cout <<"Ex. number:";
    std::cout << n << std::endl;

}
float num1(float b1, float b2, float h)
{
    float S = (b1 + b2) * 0.5 * h;
    return S;
}
void num2() 
{
    const float PI = 3.1415926;
    float r;
    std::cout << "Input r:";
    std::cin >> r;
    float S = r * r * PI;
    float C = 2 * r * PI;
    std::cout << "S:";
    std::cout << S << std::endl;
    std::cout << "C:";
    std::cout << C << std::endl;

}
float num31(float fside, float sside)
{
    float S = 0.5 * fside * sside;
    return S;
}
float num32(float fside, float sside)
{
    float tside = sqrt(fside * fside + sside * sside);
    return tside;
}
int num4(int fdnum) 
{
    int fdnum4 = fdnum % 10;
    int fdnum3 = ((fdnum % 100) - fdnum4) / 10;
    int fdnum2 = ((fdnum % 1000) - fdnum4 - fdnum3) / 100;
    int fdnum1 = (fdnum - fdnum4 - fdnum3 - fdnum2) / 1000;
    int Sum = fdnum1 + fdnum2 + fdnum3 + fdnum4;
    return Sum;
}
void num7()
{
    int fc, sc, tc;
    std::cout << "First coefficient:";
    std::cin >> fc;
    std::cout << "Second coefficient:";
    std::cin >> sc;
    std::cout << "Third coefficient:";
    std::cin >> tc;
    float D = sc * sc - 4 * fc * tc;
    //считаем дискриминант, а потом в зависимости от его значения выводим разные корни (или не выводим). Используется оператор ветвления if/else
    if (D < 0.0)
        std::cout << "No equation roots" <<std::endl;
    else if (D == 0.0)
    {
        std::cout << "The equation root :";
        float Root = (-sc) / (2 * fc);
        std::cout << Root << std::endl;
    }
    else
    {
        std::cout << "The equation roots :";
        float Root1 = (-sc + sqrt(D)) / (2 * fc);
        float Root2 = (-sc - sqrt(D))/ (2 * fc);
        std::cout << Root1;
        std::cout << ",";
        std::cout << Root2 << std::endl;
    }
}
float median(float a,float b,float c) {
    float med = sqrt(2 * b * b + 2 * c * c - a * a) * 0.5;
    return med;
}
void num8()
{
    float a, b, c;
    std::cout << "Input a:";
    std::cin >> a;
    std::cout << "Input b:";
    std::cin >> b;
    std::cout << "Input c:";
    std::cin >> c;
    //находим медианы с помощью доп функции, которая считает медиану, проведённую к стороне а
    float meda, medb, medc;
    meda = median(a, b, c);
    medb = median(b, a, c);
    medc = median(c, a, b);
    //находим медианы к медианам, считаем найденный медианы как стороны
    float med1, med2, med3;
    med1 = median(meda, medb, medc);
    med2 = median(medb, meda, medc);
    med3 = median(medc, medb, meda);
    //выводим значения
    std::cout << "Firt median:";
    std::cout << med1 << std::endl;
    std::cout << "Second median:";
    std::cout << med2 << std::endl;
    std::cout << "Third median:";
    std::cout << med3 << std::endl;
}
int main()
{
    //номер 1 (Ввод в main, выводит S)
    numbering(1);
    float b1, b2, h;
    std::cout << "Input b1:";
    std::cin >> b1;
    std::cout << "Input b2:";
    std::cin >> b2;
    std::cout << "Input h:";
    std::cin >> h;
    std::cout << "S:";
    std::cout << num1(b1,b2,h) << std::endl;

    //номер 2 (Ввод в функции, ничего не выводит)
    numbering(2);
    num2();
    //номер 3 (Ввод в main, одна функция выводит площадь, а другая гипотенузу) 
    numbering(3);
    float fside, sside;
    std::cout << "First side:";
    std::cin >> fside;
    std::cout << "Second side:";
    std::cin >> sside;
    std::cout << "S:";
    std::cout << num31(fside, sside) << std::endl;
    std::cout << "The hypotenuse:";
    std::cout << num32(fside, sside) << std::endl;
    //номер 4 (Ввод в main, выводит сумму) 
    numbering(4);
    int fdnumber;
    std::cout << "Four-digit number:";
    std::cin >> fdnumber;
    std::cout << "Sum of digits:";
    std::cout << num4(fdnumber) << std::endl;
    //номер 5
    // номер 6
    //номер 7 (Ввод в функции, ничего не выводит)
    numbering(7);
    num7();
    //номер 8 (Имеется треугольник со сторонами а, b, с.Найти медианы треугольника, сторонами которого являются медианы исходного треугольника)
    numbering(8);
    num8();

    return 0;
}