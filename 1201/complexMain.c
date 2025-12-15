// ○班 complexMain.c

// 複素数構造体を使う時には次の行を活かす
#include "complex.h"
#include "complex.c"
#include <stdio.h>

/* このプログラムはブランチを分けてから個々に作成してください */

// このファイルは 33aa AAAAA dが3記述

int main() {
    complex a, b, c;
    a = makeComp(1.0, 2.0);  // 1
    //b = makeComp(3.0, 4.0);  // 3 + 4j
    c = addComp(a, b);       // c = a + b
    b = makeCompRT(5.0, (2/3)*M_PI); // b = 5∠3π
    printComp(a);
    printCompRT(a);
    printCompRT(b);
    printCompRT(b);
    printComp(c);
    printCompRT(c);

    complex d = addComp(c, b);
    printComp(d);
    printCompRT(d);

    complex e = subComp(b, c);
    printComp(e);
    printCompRT(e);

    complex f = cmulComp(a, 2.0);
    printComp(f);
    printCompRT(f);

    complex g = mulComp(a, b);
    printComp(g);
    printCompRT(g);

    double r2 = getR2(g);
    printf("R^2 of g: %f\n", r2);

    complex h = conjComp(g);
    printComp(h);
    printCompRT(h);

    complex i = invComp(a);
    printComp(i);
    printCompRT(i);

    complex j = divComp(b, a);
    printComp(j);
    printCompRT(j);

    double r = getR(b);
    printf("R of b: %f\n", r);

    double theta = getTheta(b);
    printf("Theta of b (radian): %f\n", theta);

    // printf("Hello, world.\n");
    return 0;
}
