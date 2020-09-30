#include "simplepizzafactory.h"

SimplePizzaFactory::SimplePizzaFactory()
{

}
Pizza* SimplePizzaFactory::createPizza(QString type) {
    Pizza *pizza = nullptr;
   /*if (type == "cheese") {
        pizza = new CheesePizza();
    }*/

    return pizza;
}
