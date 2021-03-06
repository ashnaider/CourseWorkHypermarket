#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}


/*

Варіант 21а. Створення ієрархії класів на тему «Гіпермаркет»
Создать классы:
  «Товар» (фирма, наименование, цена, максимальный процент скидки),
  «Мобильный телефон» (с полем – с контрактом или без, максимальное поддерживаемое количество SIM-карт),
  «Смартфон» (наследник Мобильного телефона с дополнительными полями: ОС, список установленных программ),
  «Ноутбук» (размер диагонали, вес, количество ядер процессора, память).

  Также реализовать класс «Покупатель» (поле: количество денег),
  и его наследника «Постоянный покупатель» (поле: ФИО, общая стоимость купленных товаров).
  Реализовать виртуальный метод «индивидуальная скидка покупателя»
    – для обычного покупателя возвращает 0%,
    для постоянного = ФИО, общая стоимость купленных товаров делить на 1000, но не более 15%.

Также реализовать метод купить товар, который вычисляет цену товара, учитывая скидку покупателя
(если скидка покупателя больше максимальной скидки для этого товара,
то применяется максимальный процент скидки товара).

При этом проверяется, хватит ли покупателю денег,
и если да, то от его денег вычитается стоимость товара (учитывая скидку).

Для постоянного покупателя после покупки
также соответственно увеличивается общая стоимость купленных товаров.

В основном проекте предусмотреть возможность вводить информацию о товарах и покупателях.

Также предусмотреть возможность осуществлять покупки товаров покупателями.
*/
