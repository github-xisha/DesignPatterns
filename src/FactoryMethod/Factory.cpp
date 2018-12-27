/********************************************************************
  > File Name: Factory.cpp
  > Author:xisha
  > Mail: 1540348087@qq.com
  > Created Time: 2018年12月22日 星期六 15时57分35秒
********************************************************************/

#include <iostream>
#include "Factory.h"
#include "ConcreteProduct.h"

Factory::Factory()
{
    std::cout<<"Factory"<<std::endl;
}

Factory::~Factory()
{
    std::cout<<"~Factory"<<std::endl;
}

Product* Factory::FactoryMethod()
{
    return NULL;
}


