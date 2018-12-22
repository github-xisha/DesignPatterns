/********************************************************************
  > File Name: Product.h
  > Author:xisha
  > Mail: 1540348087@qq.com
  > Created Time: 2018年12月22日 星期六 15时38分09秒
********************************************************************/

#ifndef _PRODUCT_H
#define _PRODUCT_H

class Product{
public:
    Product();
    //~Product();
    virtual ~Product();//这里为虚函数,在delete时既调用基类的析构函数,也调用派生类的析构函数
    virtual void Use()=0;
};


#endif
