/********************************************************************
  > File Name: ConcreteProductB.h
  > Author:xisha
  > Mail: 1540348087@qq.com
  > Created Time: 2018年12月22日 星期六 15时43分28秒
********************************************************************/

#ifndef _CONCRETEPRODUCTB_H
#define _CONCRETEPRODUCTB_H

#include "Product.h"

class ConcreteProductB : public Product{
public:
    ConcreteProductB();
    virtual ~ConcreteProductB();
    virtual void Use();
};

#endif
