// Practice-5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>

using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    /*
    char w;
    std::cout << "Введите направление движения: V - Вперед, L - налево, P - направо, Z - назад. -> ";
    std::cin >> w;
    if (w == 'V') {
        std::cout << "Едем прямо";
    }
    else if (w == 'L') {
        std::cout << "Едем налево";
    }
    else if (w == 'P') {
        std::cout << "Едем направо";
    }
    else if (w == 'Z') {
        std::cout << "Едем назад";
    }
    else {
        std::cout << "Введены некорректные данные!\n";
    }
    */

    //int str;

    //std::cin >> str;
    /*
    if (str == 1)
        std::cout << "Едем прямо";
    else if (str == 2)
        std::cout << "Едем вправо";
    else if (str == 3)
        std::cout << "Едем влево";
    else
        std::cout << "Едем назад";
        */

    /*
    enum directions {Ahead=1, Right, Left, Back};
    switch (str) {
    case Ahead:
        std::cout << "Едем прямо";
        break;
    case Right:
        std::cout << "Едем вправо";
        break;
    case Left:
        std::cout << "Едем влево";
        break;
    case Back:
        std::cout << "Едем назад";
        break;
    default:
        std::cout << "Введены некорректные данные";
    }
    */

    /*
    //task 1
    int number;
    cout << "Введите число ->";
    cin >> number;
    if (number % 2 == 0) {
        cout << "Число четное\n";
    }
    else {
        cout << "Число нечетное\n";
    }

    (number % 2 == 0) ? cout << "Четное!" : cout << "Нечетное!";


    //task 2

    int number1, number2;
    cout << "Введите первое число:";
    cin >> number1;
    cout << "Введите второе число:";
    cin >> number2;
    if (number1 > number2) {
        cout << "Меньшее число из двух: " << number2 << endl;
    }
    else if (number1 == number2) {
        cout << "Числа равны!" << endl;
    }
    else {
        cout << "Меньшее число из двух: " << number1 << endl;
    }

    (number1 > number2) ? cout << number2 : cout << number1;
    */

    //task 3
    /*
    int number;
    cout << "Введите число -> ";
    cin >> number;

    if (number == 0) {
        cout << "Число равно нулю!\n";
    }
    else if (number < 0) {
        cout << "Число отрицательное\n";
    }
    else {
        cout << "Число положительное\n";
    }

    (number < 0) ? cout << "Число отрицательное!\n" : cout << "Число положительное!\n";

    //task 4
    int number1, number2;
    cout << "Введите первое число:";
    cin >> number1;
    cout << "Введите второе число:";
    cin >> number2;

    if (number1 == number2) {
        cout << "Числа равны!";
    }
    else if (number1 > number2) {
        cout << "Числа в порядке возрастания: " << number2 << " " << number1;
    }
    else {
        cout << "Числа в порядке возрастания: " << number1 << " " << number2;
    }

    (number1 > number2) ? cout << number2 << " " << number1 : cout << number1 << " " << number2;
    */

//task 4
/*
int number1 = 18;
int number2 = 15;

    if (number1 % 3 == 0) {
        cout << "Число 18 кратно 3\n";
    }

    if (number1 % 6 == 0) {
        cout << "Число 18 кратно 6\n";
    }

    if (number1 % 9 == 0) {
        cout << "Число 18 кратно 9\n";
    }

    if (number2 % 3 == 0) {
        cout << "Число 15 кратно 3\n";
    }

    if (number2 % 6 == 0) {
        cout << "Число 15 кратно 6\n";
    }

    if (number2 % 9 == 0) {
        cout << "Число 15 кратно 9\n";
    }
    */

//task 5
/*
int number;
cout << "Введите число, если число четное оно будет умножено на 3, иначе будет разделено на два - > ";
cin >> number;
if(number% 2 == 0) {
    cout << "Число четное, умножаем на три: " << number * 3 << endl;
}
else {
    double result;
    result = (double)number;
    cout << "Число нечетное, делим на два: " << result/2 << endl;
}

double c1, c2, c3, c4, c5;
cout << "Введите первую оценку: ";
cin >> c1;
cout << "Введите вторую оценку: ";
cin >> c2;
cout << "Введите третью оценку: ";
cin >> c3;
cout << "Введите четвертую оценку: ";
cin >> c4;
cout << "Введите пятую оценку: ";
cin >> c5;
double result;
result = (c1 + c2 + c3 + c4 + c5) / 5;

if (result >= 4) {
    cout << "Студент допущен до экзамена!";
}
else {
    cout << "Студент не допущен до экзамена!";
}
*/

//task 6

/*
enum Numbers {
        zero,
        one,
        two,
        three,
        four,
        five,
        six,
        seven
    };

int num;
cout << "Введите число -> ";
cin >> num;
switch (num) {
    case zero:
        cout << 1;
        break;
    case one:
        cout << pow(num, 1);
        break;
    case two:
        cout << pow(num, 2);
        break;    
    case three:
        cout << pow(num, 3);
        break;
    case four:
        cout << pow(num, 4);
        break;
    case five:
        cout << pow(num, 5);
        break;
    case six:
        cout << pow(num, 6);
        break;
    case seven:
        cout << pow(num, 7);
        break;
    default:
        break;
}
*/



enum Colors {
    black,
    blue,
    green,
    superBlue,
    red,
    purple, 
    yellow, 
    white, 
    grey, 
    light_blue
};

void f(int c) {
    switch (c) {
    case black:
        system("color 00");
        break;
    case blue:
        system("color 01");
        break;
    }
}

int colorBackground, colorText;
cout << "Выбор цветов:\n" << " 0- черный\n 1 - синий\n 2 - зеленый\n 3 - голубой\n 4 - красный\n 5 - лиловый\n 6 - желтый\n 7- белый\n 8 - серый\n 9 - светло-синий\n";
cout << "Цвет фона: "; 
cin >> colorBackground;
cout << "Цвет текста: "; 
cin >> colorText;
switch (colorBackground) {
    case black:
        switch (colorText)
        case black:
            system("color 00");
            break;
        case blue:
            system("color 01");
            break;
        case green:
            system("color 03");
            break;
}
}

