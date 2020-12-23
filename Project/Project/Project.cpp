#include <iostream>
#include "Birthday.h"

int main()
{
    Birthday n(9, 12, 2020, "Ivan"), n1(10, 10, 2020, "Ann");
    
    Birthday result = n.Equals(n1);

    result.Print1();

    system("pause");

    return 0;
}