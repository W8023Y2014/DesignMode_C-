#pragma once

class IReplaceAlgorithm
{
public:
    IReplaceAlgorithm();
    virtual ~IReplaceAlgorithm();
    virtual void Replace() = 0;
};

class LRU_ReplaceAlgorithm : public IReplaceAlgorithm
{
public:
    LRU_ReplaceAlgorithm();
    virtual ~LRU_ReplaceAlgorithm();
    void Replace() override;
private:

};

class Random_ReplaceAlgorithm : public IReplaceAlgorithm
{
public:
    Random_ReplaceAlgorithm();
    virtual ~Random_ReplaceAlgorithm();
    void Replace() override;
private:

};
 
class FIFO_ReplaceAlgorithm : public IReplaceAlgorithm
{
public:
    FIFO_ReplaceAlgorithm();
    virtual ~FIFO_ReplaceAlgorithm();
    virtual void Replace();
private:

};
 
