#include <iostream>
#include <cstdlib>
#include "BigDecimalInt.h"
#include "string"
#include <cstring>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    BigDecimalInt num1("123456789012345678901234567890");
    BigDecimalInt num2("113456789011345678901134567890");
    cout << "num1 = " << num1 << endl ;
    cout << "num2 = " << num2 << endl ;
    BigDecimalInt num3("-20");
    BigDecimalInt num4("-20");
    cout << (num3 + num4) << endl ;



    return 0;
}

