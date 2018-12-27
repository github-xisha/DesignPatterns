/********************************************************************
  > File Name: ConcreteFactory.h
  > Author:xisha
  > Mail: 1540348087@qq.com
  > Created Time: 2018年12月22日 星期六 22时28分51秒
********************************************************************/

#ifndef _CONCRETEFACTORY_H
#define _CONCRETEFACTORY_H

#include "Factory.h"
#include "Product.h"
#include "ConcreteProduct.h"

class ConcreteFactory : public Factory
{
public:
    ConcreteFactory();
    ~ConcreteFactory();

    Product* FactoryMethod(); 

};

#endif
