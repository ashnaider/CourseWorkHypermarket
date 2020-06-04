#include <iostream>

#include "Laptop.h"
#include "Product.h"
#include "MobilePhone.h" 
#include "Smartphone.h"
#include "Customer.h"
#include "RegularCustomer.h"
#include "HypermarketHandler.h"


int main()
{

  HypermarketHandler hh;

  hh.Start();
    
  return 0;
}

/*
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


/*
    Smartphone sm = Smartphone("Appple", "iPhone 10", 500.90, 10, false, 1, "IOS", {"youtube", "gmail"});
    
    RegularCustomer rc = RegularCustomer(800.50, {"Anton", "Shnaider"}, 1000);
    Customer c = Customer(230.12);

    std::cout << "\nRegularCustomer\nName: " 
              << rc.GetName() << "\nMoney: " << rc.GetMoney() 
         << "\nTotal cost of bought products: " << rc.GetTotalCostOfBoughtProducts() << std::endl;

    std::cout << "\nUsual customer:\nMoney: " << c.GetMoney() << std::endl;

                
    rc.BuyProduct(sm);
    c.BuyProduct(sm);

    std::cout << "\nBoth are try to buy iPhone 10 that costs $500.90" << std::endl;

    Std::cout << "\nRegularCustomer\nName: " 
              << rc.GetName() << "\nMoney: " << rc.GetMoney() 
         << "\nTotal cost of bought products: " << rc.GetTotalCostOfBoughtProducts() << std::endl;

    std::cout << "\nUsual customer:\nMoney: " << c.GetMoney() << std::endl;
*/
