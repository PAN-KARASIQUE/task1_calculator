#include "Calculator.h"
#include "BigNumber.h"
#include <iostream> 

BigNumber Calculator::Calculate(BigNumber x, char oper, BigNumber y)
{
    BigNumber result;
    result.init();
    switch (oper)
    {
    case '+':
        return x.add(y);
    case '-':
        return x.sub(y);
    case '*':
       return x.mul(y);
    case '/':
       return x.div(y);
    default:
        return result;
    }
}