/********************************************************************
  > File Name: main.cpp
  > Author:xisha
  > Mail: 1540348087@qq.com
  > Created Time: 2018年12月22日 星期六 16时04分47秒
********************************************************************/

#include <iostream>
#include "Factory.h"

int main()
{
    Factory fac;
    Product *pProductA=fac.CreateProduct("A");
    pProductA->Use();
    Product *pProductB=fac.CreateProduct("B");
    pProductB->Use();
    delete pProductA;
    delete pProductB;
    return 0;
}


