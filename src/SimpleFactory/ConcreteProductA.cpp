/********************************************************************
  > File Name: ConcreteProductA.cpp
  > Author:xisha
  > Mail: 1540348087@qq.com
  > Created Time: 2018年12月22日 星期六 15时47分03秒
********************************************************************/

#include <iostream>
#include "ConcreteProductA.h"

ConcreteProductA::ConcreteProductA(){}

ConcreteProductA::~ConcreteProductA()
{
    std::cout<<"~ConcreteProductA"<<std::endl;
}

void ConcreteProductA::Use()
{
    std::cout<<"use product A"<<std::endl;
}


