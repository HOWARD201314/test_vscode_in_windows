#include <iostream>
#include <string>
#include "file1.h"
#include "file2.h"
#include "mathadd.h"
using namespace std;

int main()
{
    string s = "hello world";
    cout<<s<< endl;

    testFile1();
    testFile2();

    int a = 1;
    int b = 2;
    cout<<add(a,b)<<endl;

    char *p = (char *)malloc(100);
    if (p == nullptr)
    {
        cout << "malloc failed" << endl;
        exit(1);
    }
    cout << "malloc success" << endl;
    free(p);

    return 0;
}