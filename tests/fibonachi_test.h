#ifndef FIBONACHI_H
#define FIBONACHI_H
#include <unistd.h>
#include <gtest/gtest.h>
#include <string>
#include <stdio.h>
using namespace std;

extern "C" {
    #include "../app/common.h"
    #include "../app/text/_text.h"
    #include "../app/text/text.h"
}


TEST(revTest, num0) {
    text txt = create_text();
    char path[] = "TestRev0.in";
    load(txt, path);
    if(!txt->begin)
        FAIL();

    FILE *o = stdout;
    stdout = fopen("TestRev0.txt", "w");
    showrev(txt);
    fclose(stdout);
    stdout = o;
    SUCCEED();
}
#endif // FIBONACHI_H
