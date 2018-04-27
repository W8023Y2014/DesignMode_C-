#pragma once

#include <string>
using namespace std;

// 汽车接口
class ICar
{
public:
    ICar();
    virtual ~ICar();
    virtual string Name() = 0;  // 汽车名称
};

//奔驰
class BenCar : public ICar
{
public:
    BenCar();
    ~BenCar();
    string Name();  // 汽车名称
private:

};

//宝马
class BmwCar : public ICar
{
public:
    BmwCar();
    ~BmwCar();
    string Name();  // 汽车名称
private:

};

// 奥迪
class  AudiCar : public ICar
{
public:
     AudiCar();
    ~ AudiCar();
    string Name();  // 汽车名称
private:

};
