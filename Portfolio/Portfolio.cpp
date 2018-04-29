// Portfolio.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

class Scanner
{
public:
    Scanner() {}
    ~Scanner() {}
    void Scan() { printf("Scan->"); } 
};
 
class GenMidCode
{
public:
    GenMidCode() {}
    ~GenMidCode() {}
    void GenCode() { printf("GenCode->"); }
};

class GenMachineCode
{
public:
    void GenCode() { printf("GenMachineCode->"); }
};


class Parser
{
public:
    Parser() {}
    ~Parser() {}
    void Parse() { printf("Parse->"); }
};


//高层接口  
class Compiler
{
public:
    static void Run()
    {
        Scanner scanner;
        Parser parser;
        GenMidCode genMidCode;
        GenMachineCode genMacCode;
        scanner.Scan();
        parser.Parse();
        genMidCode.GenCode();
        genMacCode.GenCode();
    }
};




int main()
{
    Compiler::Run();


    getchar();
    return 0;
}

