/********************************************************************
  > File Name: main.cpp
  > Author:xisha
  > Mail: 1540348087@qq.com
  > Created Time: 2018年12月22日 星期六 16时04分47秒
********************************************************************/

#include <iostream>
#include "Factory.h"
#include "ConcreteFactory.h"
#include "Product.h"

int main()
{
    Factory* fac=new ConcreteFactory;
    Product *pProduct=fac->FactoryMethod();
    pProduct->Use();
    delete pProduct;
    delete fac;
    return 0;
}


