/********************************************************************
  > File Name: ConcreteProduct.cpp
  > Author:xisha
  > Mail: 1540348087@qq.com
  > Created Time: 2018年12月22日 星期六 15时47分03秒
********************************************************************/

#include <iostream>
#include "ConcreteProduct.h"

ConcreteProduct::ConcreteProduct(){}

ConcreteProduct::~ConcreteProduct()
{
    std::cout<<"~ConcreteProduct"<<std::endl;
}

void ConcreteProduct::Use()
{
    std::cout<<"use product"<<std::endl;
}


