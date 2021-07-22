#include <iostream>
#include <string>
using namespace std;

class Context
{
public:
    Context(){}
    ~Context(){}
};

class AbstractExpression
{
public:
    virtual ~AbstractExpression() {}
    virtual void Interpret(const Context &c) = 0;

protected:
    AbstractExpression();
};

class TerminalExpression : public AbstractExpression
{
private:
    string statement;

public:
    TerminalExpression(const string &statement)
    {
        this->statement = statement;
    }
    ~TerminalExpression() {}
    void Interpret(const Context &c) override
    {
        cout << this->statement << "TerminalExpression\n";
    }
};

class NonterminalExpression : public AbstractExpression
{
private:
    AbstractExpression *expression = nullptr;
    int times;

public:
    NonterminalExpression(AbstractExpression *expression, int times)
    {
        this->expression = expression;
        this->times = times;
    }
    ~NonterminalExpression() { expression = nullptr; }
    void Interpret(const Context &c) override
    {
        for (int i = 0; i < times; i++)
            this->expression->Interpret(c);
    }
};

int main()
{
    Context *c = new Context();
    AbstractExpression *te = new TerminalExpression("hello");
    AbstractExpression *nte = new NonterminalExpression(te, 2);
    nte->Interpret(*c);
    delete c;
    delete te;
    delete nte;
}