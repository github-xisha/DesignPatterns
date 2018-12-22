/********************************************************************
  > File Name: Factory.h
  > Author:xisha
  > Mail: 1540348087@qq.com
  > Created Time: 2018年12月22日 星期六 15时53分04秒
********************************************************************/

#ifndef _FACTORY_H
#define _FACTORY_H

#include <string>
#include "Product.h"

class Factory{
public:
    Factory();
    virtual ~Factory();
    static Product* CreateProduct(std::string product_name);
};

#endif
