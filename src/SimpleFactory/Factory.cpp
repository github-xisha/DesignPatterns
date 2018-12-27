/********************************************************************
  > File Name: Factory.cpp
  > Author:xisha
  > Mail: 1540348087@qq.com
  > Created Time: 2018年12月22日 星期六 15时57分35秒
********************************************************************/

#include <iostream>
#include "Factory.h"
#include "ConcreteProductA.h"
#include "ConcreteProductB.h"

Factory::Factory(){}
Factory::~Factory(){}

Product* Factory::CreateProduct(std::string product_name)
{
    if(product_name.compare("A")==0){
        return new ConcreteProductA;
    }else if(product_name.compare("B")==0){
        return new ConcreteProductB;
    }else{
        return NULL;
    }
}


