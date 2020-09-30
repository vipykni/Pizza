#include <QCoreApplication>
#include "pizza.h"
#include "simplepizzafactory.h"
#include "pizzastore.h"
#include "cheesepizza.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

     PizzaStore *pStore = new SimplePizzaFactory();

    Pizza *pizza1 = pStore->orderPizza("CheesePizza");
    return a.exec();
}
