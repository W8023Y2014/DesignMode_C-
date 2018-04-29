// Prototype.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<stdio.h>
#include<string.h> 
#include<iostream> 

using namespace std;
 
class Resume;
class ResumeA;
class ResumeB;

int main()
{
    Resume* r1 = new ResumeA("A");
    Resume* r2 = new ResumeB("B");
    Resume* r3 = r1->Clone();
    Resume* r4 = r2->Clone();
    r1->Show();
    r2->Show();
    //删除r1,r2  
    delete r1; delete r2;
    r1 = r2 = NULL;
    //深拷贝所以对r3,r4无影响  
    r3->Show();
    r4->Show();
    delete r3;
    delete r4;
    r3 = r4 = NULL;

    getchar();
    return 0;
}


class Resume 
{
public:
    Resume();
    virtual ~Resume();
    virtual Resume* Clone() { return nullptr; };
    virtual void Set(char* name) {}
    virtual void Show() {}
protected:
    char* name;
};

Resume::Resume()
{
}

Resume::~Resume()
{
}

class  ResumeA : public Resume
{
public:
    ResumeA(const char* str);  //构造函数
    ResumeA(const ResumeA &str);  //拷贝构造函数
    virtual ~ ResumeA();
    ResumeA* Clone();   //克隆
    void Show() override; 
private:

};

 ResumeA:: ResumeA(const char* str)
{
     if (str == NULL)
     {
         name = new char[1];
         name[0] = '\0';
     }
     else
     {
         name = new char[strlen(str) + 1];
         strcpy_s(name, strlen(str) + 1, str);
     }
}

 ResumeA::ResumeA(const ResumeA &r)
 {
     name = new char[strlen(r.name) + 1];
     strcpy_s(name, strlen(r.name) + 1,  r.name);
 }

 ResumeA* ResumeA::Clone()
 {
     return new ResumeA(*this);
 }

 void ResumeA::Show() 
 {
     cout << "ResumeA name : " << name << endl;
 }

 ResumeA::~ ResumeA()
{
     delete[] name;
}


 class  ResumeB : public Resume
 {
 public:
     ResumeB(const char* str);  //构造函数
     ResumeB(const ResumeB &str);  //拷贝构造函数
     virtual ~ResumeB();
     ResumeB* Clone();   //克隆
     void Show();
 private:

 };

 ResumeB::ResumeB(const char* str)
 {
     if (str == NULL)
     {
         name = new char[1];
         name[0] = '\0';
     }
     else
     {
         name = new char[strlen(str) + 1];
         strcpy_s(name, strlen(str) + 1, str);
     }
 }

 ResumeB::ResumeB(const ResumeB &r)
 {
     name = new char[strlen(r.name) + 1];
     strcpy_s(name, strlen(r.name) + 1,  r.name);
 }

 ResumeB* ResumeB::Clone()
 {
     return new ResumeB(*this);
 }

 void ResumeB::Show()
 {
     cout << "ResumeA name : " << name << endl;
 }

 ResumeB::~ResumeB()
 {
     delete[] name;
 }


