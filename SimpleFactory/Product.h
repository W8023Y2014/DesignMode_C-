#pragma once

#include <string>
using namespace std;

// �����ӿ�
class ICar
{
public:
    ICar();
    virtual ~ICar();
    virtual string Name() = 0;  // ��������
};

//����
class BenCar : public ICar
{
public:
    BenCar();
    ~BenCar();
    string Name();  // ��������
private:

};

//����
class BmwCar : public ICar
{
public:
    BmwCar();
    ~BmwCar();
    string Name();  // ��������
private:

};

// �µ�
class  AudiCar : public ICar
{
public:
     AudiCar();
    ~ AudiCar();
    string Name();  // ��������
private:

};
