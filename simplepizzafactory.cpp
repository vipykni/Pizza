#include "simplepizzafactory.h"

SimplePizzaFactory::SimplePizzaFactory()
{

}
Pizza* SimplePizzaFactory::createPizza(QString type) {
    Pizza *pizza = nullptr;
   if (type == "CheesePizza") {
        pizza = new CheesePizza();
    }

    return pizza;
}
