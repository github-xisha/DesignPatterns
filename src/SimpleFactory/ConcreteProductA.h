/********************************************************************
  > File Name: ConcreteProductA.h
  > Author:xisha
  > Mail: 1540348087@qq.com
  > Created Time: 2018年12月22日 星期六 15时43分28秒
********************************************************************/

#ifndef _CONCRETEPRODUCTA_H
#define _CONCRETEPRODUCTA_H

#include "Product.h"

class ConcreteProductA : public Product{
public:
    ConcreteProductA();
    virtual ~ConcreteProductA();
    virtual void Use();
};

#endif
