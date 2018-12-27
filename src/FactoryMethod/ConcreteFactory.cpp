/********************************************************************
  > File Name: ConcreteFactory.cpp
  > Author:xisha
  > Mail: 1540348087@qq.com
  > Created Time: 2018年12月27日 星期四 21时28分18秒
********************************************************************/

#include <iostream>
#include "ConcreteFactory.h"

ConcreteFactory::ConcreteFactory()
{
    std::cout<<"ConcreteFactory"<<std::endl;
}

ConcreteFactory::~ConcreteFactory()
{
    std::cout<<"~ConcreteFactory"<<std::endl;
}

Product * ConcreteFactory::FactoryMethod()
{
    return new ConcreteProduct;
}


