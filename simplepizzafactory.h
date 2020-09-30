#ifndef SIMPLEPIZZAFACTORY_H
#define SIMPLEPIZZAFACTORY_H

#include "pizza.h"
#include "pizzastore.h"

class SimplePizzaFactory : public PizzaStore
{
public:
    SimplePizzaFactory();
    Pizza* createPizza(QString type);

};

#endif // SIMPLEPIZZAFACTORY_H
