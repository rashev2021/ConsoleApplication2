#include <Windows.h>
#include <iostream>

using namespace std;

int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "*Добро пожаловать в нашу пицерию*\n";
    cout << " ОБЩЕЕ МЕНЮ.\n\n" << "Пицца\n" << "-------------\n"
        << "- Пицца \"Италия\" стоимость = 10$\n" << "- Пицца \"Чили\" стоимость = 5$\n"
        << "- Пицца \"Острая\" стоимость = 8,5$\n" << "- Пицца \"Пикантная\" стоимость = 15$\n\n"
        << "Напитки\n" << "-------------\n"
        << "- Кофе \"Американо\" стоимость = 1,5$\n" << "- Кофе  \"Капучино\" стоимость = 3$\n"
        << "- Кофе \"Латте\"  стоимость = 2$\n\n";
    cout << "Наши бонусы: \n" << "-------------\n"
        << "- Если вы сделаете заказ на сумму более 50$, то Ваша скидка составит 20%\n"
        << "А так же:\n" << "- У нас каждая пятая пицца в подарок\n"
        << "- И если количество напитков, с ценой от 2$, заказано более трех, то скидка на них составит 15% \n\n";
    cout << "*Теперь сделайте Ваш заказ*\n\n" << " Открыть меню \"Пицца\" - введите ......(1)\n" << " Открыть меню \"Напитки\" - введите ....(2)\n"
        << " Закрыть меню - введите ..............(0)\n\n";

    float italia = 10, chili = 5, spicy = 8.5, piquant = 15;
    float americano = 1.5, cappuccino = 3, latte = 2;
    char flag, pizza, coffee;
    int quantity = 0;
    int gift = 0;
    float prize_italia = 0, prize_chili = 0, prize_spicy = 0, prize_piquant = 0;
    float prize_americano = 0, prize_cappuccino = 0, prize_latte = 0;
    float sum_p1 = 0, sum_p2 = 0, sum_p3 = 0, sum_p4 = 0;
    float sum_c1 = 0, sum_c2 = 0, sum_c3 = 0;
    float summa_pizza = 0;
    float summa_coffee = 0;
    float  general_summa = 0;
    float discount = 0;
    float discount_summa = 0;

    cin >> flag;

    if (flag != '1' && flag != '2' && flag != '3' && flag != '0') {
        cout << "Введены неверные значения. " << "Перезапустите программу и попробуйте еще раз\n";
        return 0;
    }

    while (true) {

        if (flag == '1') {
            cout << "Меню пиццы:\n"
                << "- Пицца \"Италия\" стоимость = 10$ - для заказа введите .......(1)\n"
                << "- Пицца \"Чили\"  стоимость = 5$ - для заказа введите .........(2)\n"
                << "- Пицца \"Острая\"  стоимость = 8.5$ - для заказа введите .....(3)\n"
                << "- Пицца \"Пикантная\" стоимость = 15$ -  для заказа введите ...(4)\n"
                << "- Закрыть меню  - введите ...................................(0)\n";
            cin >> pizza;

            if (pizza != '1' && pizza != '2' && pizza != '3' && pizza != '4' && pizza != '0') {
                cout << "Введены неверные значения. " << "Перезапустите программу и попробуйте еще раз\n";
                break;
            }

            if (pizza == '1') {
                cout << "Пицца \"Италия\"\n" << "Введите количество: ";
                cin >> quantity;
                gift = quantity / 5;
                if (quantity >= 5) {
                    quantity = quantity - gift;
                }
                prize_italia = quantity * italia;
                cout << endl;
                cout << "Заказано: \n" << "------------ \n" << "Пицца \"Италия\": \n"
                    << "К оплате: " << quantity << " шт." << " " << "Сумма: " << prize_italia << "$\n"
                    << "В подарок: " << gift << " шт.\n\n";
                if (sum_p1 < prize_italia) {
                    sum_p1 = prize_italia;
                }
                /* if (sum_p1 != NULL) {
                     sum_p1 = sum_p1 + prize_italia;
                 }*/
                cout << "Заказать еще пиццу - введите (1)\n" << "Перейти к напиткам - введите (2)\n" << "Перейти к счету - введите (3)\n\n";
                cin >> flag;
                if (flag != '1' && flag != '2' && flag != '3') {
                    cout << "Введены неверные значения. " << "Перезапустите программу и попробуйте еще раз\n\n";
                    break;
                }
            }

            if (pizza == '2') {
                cout << "Пицца \"Чили\"\n" << "Введите количество: ";
                cin >> quantity;
                gift = quantity / 5;
                if (quantity >= 5) {
                    quantity = quantity - gift;
                }
                prize_chili = quantity * chili;
                cout << endl;
                cout << "Заказано: \n" << "------------ \n" << "Пицца \"Чили\": \n"
                    << "К оплате: " << quantity << " шт." << " " << "Сумма: " << prize_chili << "$\n"
                    << "В подарок: " << gift << " шт.\n\n";
                if (sum_p2 < prize_chili) {
                    sum_p2 = prize_chili;
                }
                /* if (sum_p2 != NULL) {
                     sum_p2 = sum_p2 + prize_chili;
                 }*/
                cout << "Заказать еще пиццу - введите (1)\n" << "Перейти к напиткам - введите (2)\n" << "Перейти к счету - введите (3)\n\n";
                cin >> flag;
                if (flag != '1' && flag != '2' && flag != '3') {
                    cout << "Введены неверные значения. " << "Перезапустите программу и попробуйте еще раз\n\n";
                    break;
                }
            }
            if (pizza == '3') {
                cout << "Пицца \"Острая\"\n" << "Введите количество: ";
                cin >> quantity;
                gift = quantity / 5;
                if (quantity >= 5) {
                    quantity = quantity - gift;
                }
                prize_spicy = quantity * spicy;
                cout << endl;
                cout << "Заказано: \n" << "------------ \n" << "Пицца \"Острая\": \n"
                    << "К оплате: " << quantity << " шт." << " " << "Сумма: " << prize_spicy << "$\n"
                    << "В подарок: " << gift << " шт.\n\n";
                if (sum_p3 < prize_spicy) {
                    sum_p3 = prize_spicy;
                }
                /* if (sum_p3 != NULL) {
                     sum_p3 = sum_p3 + prize_spicy;
                 }*/
                cout << "Заказать еще пиццу - введите (1)\n" << "Перейти к напиткам - введите (2)\n" << "Перейти к счету - введите (3)\n\n";
                cin >> flag;
                if (flag != '1' && flag != '2' && flag != '3') {
                    cout << "Введены неверные значения. " << "Перезапустите программу и попробуйте еще раз\n\n";
                    break;
                }
            }
            if (pizza == '4') {
                cout << "Пицца \"Пикантная\"\n" << "Введите количество: ";
                cin >> quantity;
                gift = quantity / 5;
                if (quantity >= 5) {
                    quantity = quantity - gift;
                }
                prize_piquant = quantity * piquant;
                cout << endl;
                cout << "Заказано: \n" << "------------ \n" << "Пицца \"Пикантная\": \n"
                    << "К оплате: " << quantity << " шт." << " " << "Сумма: " << prize_piquant << "$\n"
                    << "В подарок: " << gift << " шт.\n\n";
                if (sum_p4 < prize_piquant) {
                    sum_p4 = prize_piquant;
                }
                /* if (sum_p4 != NULL) {
                     sum_p4 = sum_p4 + prize_piquant;
                 }*/
                cout << "Заказать еще пиццу - введите (1)\n" << "Перейти к напиткам - введите (2)\n" << "Перейти к счету - введите (3)\n\n";
                cin >> flag;
                if (flag != '1' && flag != '2' && flag != '3') {
                    cout << "Введены неверные значения. " << "Перезапустите программу и попробуйте еще раз\n\n";
                    break;
                }
            }
            if (pizza == '0') {
                cout << "Вы вышли из меню\n\n";
                break;
            }

        }

        if (flag == '2') {
            cout << "Меню напитков: \n"
                << "- Кофе \"Американо\" стоимость = 1.3$ - для заказа введите .......(1)\n"
                << "- Кофе \"Капучино\"  стоимость = 3$ - для заказа введите .........(2)\n"
                << "- Кофе \"Латте\"  стоимость = 2$ - для заказа введите ............(3)\n"
                << "- Закрыть меню  - введите ......................................(0)\n";
            cin >> coffee;

            if (coffee != '1' && coffee != '2' && coffee != '3' && coffee != '0') {
                cout << "Введены не верные значения. " << "Перезапустите программу и попробуйте еще раз\n\n";
                break;
            }
            if (coffee == '1') {
                cout << "Кофе \"Американо\"\n" << "Введите количество: ";
                cin >> quantity;
                prize_americano = quantity * americano;
                cout << "Заказано: Кофе \"Американо\" " << quantity << " шт." << " " << "Сумма: " << prize_americano << "$\n\n";
                if (sum_c1 < prize_americano) {
                    sum_c1 = prize_americano;
                }
                /* if (sum_c1 != NULL) {
                     sum_c1 = sum_c1 + prize_americano;
                 }*/
                cout << "Перейти в меню пиццы - введите (1)\n" << "Заказать еще напитки - введите (2)\n" << "Перейти к счету - введите (3)\n\n";
                cin >> flag;
                if (flag != '1' && flag != '2' && flag != '3') {
                    cout << "Введены неверные значения. " << "Перезапустите программу и попробуйте еще раз\n\n";
                    break;
                }
            }
            if (coffee == '2') {
                cout << "Кофе \"Капучино\"\n" << "Введите количество: ";
                cin >> quantity;
                prize_cappuccino = quantity * cappuccino;
                cout << "Заказано: Кофе \"Капучино\" " << quantity << " шт." << " " << "Сумма: " << prize_cappuccino << "$\n\n";
                if (sum_c2 < prize_cappuccino) {
                    sum_c2 = prize_cappuccino;
                }
                /* if (sum_c2 != NULL) {
                     sum_c2 = sum_c2 + prize_cappuccino;
                 }*/
                cout << "Перейти в меню пиццы - введите (1)\n" << "Заказать еще напитки - введите (2)\n" << "Перейти к счету - введите (3)\n\n";
                cin >> flag;
                if (flag != '1' && flag != '2' && flag != '3') {
                    cout << "Введены неверные значения. " << "Перезапустите программу и попробуйте еще раз\n\n";
                    break;
                }
            }
            if (coffee == '3') {
                cout << "Кофе \"Латте\"\n" << "Введите количество: ";
                cin >> quantity;
                prize_latte = quantity * latte;
                cout << "Заказано: Кофе \"Латте\" " << quantity << " шт." << " " << "Сумма: " << prize_latte << "$\n\n";
                if (sum_c3 < prize_latte) {
                    sum_c3 = prize_latte;
                }
                /* if (sum_c3 != NULL) {
                     sum_c3 = sum_c3 + prize_latte;
                 }*/
                cout << "Заказать еще пиццу - введите (1)\n" << "Перейти к напиткам - введите (2)\n" << "Перейти к счету - введите (3)\n\n";
                cin >> flag;
                if (flag != '1' && flag != '2' && flag != '3') {
                    cout << "Введены неверные значения. " << "Перезапустите программу и попробуйте еще раз\n\n";
                    break;
                }
            }
            if (coffee == '0') {
                cout << "Вы вышли из меню\n\n";
                break;
            }
        }
        if (flag == '3') {
            summa_pizza = sum_p1 + sum_p2 + sum_p3 + sum_p4;
            summa_coffee = sum_c1 + sum_c2 + sum_c3;
            general_summa = summa_pizza + summa_coffee;
            if (general_summa > 50) {
                discount = general_summa * 20 / 100;
                discount_summa = general_summa * (1 - 0.2);
            }

            cout << "Сумма заказа: \n" << "Пицца: " << "К оплате: " << summa_pizza << "$," << " "
                << "В подарок: " << gift << " шт.\n" << "Кофе: " << "К оплате: " << summa_coffee << "$\n"
                << "Скидка составила: " << discount << "%\n"
                << "Сумма с учетом скидки: " << discount_summa << "$\n\n";
            break;
        }
        if (flag == '0') {
            cout << "Вы вышли из меню";
            break;
        }
    }
}

