/********************************************************************
  > File Name: ConcreteProductB.cpp
  > Author:xisha
  > Mail: 1540348087@qq.com
  > Created Time: 2018年12月22日 星期六 15时47分03秒
********************************************************************/

#include <iostream>
#include "ConcreteProductB.h"

ConcreteProductB::ConcreteProductB(){}

ConcreteProductB::~ConcreteProductB()
{
    std::cout<<"~ConcreteProductB"<<std::endl;
}

void ConcreteProductB::Use()
{
    std::cout<<"use product B"<<std::endl;
}


