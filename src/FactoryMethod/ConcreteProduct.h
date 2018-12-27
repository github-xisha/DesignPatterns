/********************************************************************
  > File Name: ConcreteProduct.h
  > Author:xisha
  > Mail: 1540348087@qq.com
  > Created Time: 2018年12月22日 星期六 15时43分28秒
********************************************************************/

#ifndef _CONCRETEPRODUCT_H
#define _CONCRETEPRODUCT_H

#include "Product.h"

class ConcreteProduct : public Product{
public:
    ConcreteProduct();
    virtual ~ConcreteProduct();
    virtual void Use();
};

#endif
