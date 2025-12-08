#include <math.h>
#include <stdio.h>
#include "complex.h"
#include "complex.c"


// 複素数構造体を使う時には次の行を活かす
// #include "complex.h"
#include "testCommon.h"
#include "testCommon.c"

// 各自の場所に記載してください。順番が違ってもテストには問題ないので気にしないでください。

/* テスト関数の記述部 */
// ↓↓↓↓ 33xx XXXX 記述部(この範囲以外には追加しない)

void testFirst() {
    testStart("first");
    assertEqualsInt(1 * 1, 1);
    assertEqualsInt(2 * 2, 4);
}

// ↑↑↑↑ ここまでを 33xx XXXX が記述(この範囲以外には追加しない)

//////////////////////////////////////////////////////////////////////////////////////////

// ↓↓↓↓ 33yy YYYY 記述部(この範囲以外には追加しない)

void testSecond() {
    testStart("second");
    assertEqualsDouble(sqrt(4.0), 2.0);
    assertEqualsDouble(sqrt(9.0), 3.0);
}

// ↑↑↑↑ ここまでを 33yy YYYY が記述(この範囲以外には追加しない)

//////////////////////////////////////////////////////////////////////////////////////////

// ↓↓↓↓ 33zz ZZZZ 記述部(この範囲以外には追加しない)

void testThird() {
    testStart("third");
    assertEqualsDouble(sqrt(1.0 * 1.0 + 2.0 * 2.0), sqrt(5.0));
    assertEqualsDouble(sqrt(3.0 * 3.0 + 4.0 * 4.0), 5.0);
}

// ↑↑↑↑ ここまでを 33zz ZZZZ が記述(この範囲以外には追加しない)

// ここから main の始まりまでは追加・変更しないでください。


void testMakeComp() {
    complex ans;
    testStart("makeComp");
    // 1+2jを作成
    ans = makeComp(1.0, 2.0);
    assertEqualsDouble(ans.real, 1.0);
    assertEqualsDouble(ans.image, 2.0);
    // 3.4+5.6jを作成
    ans = makeComp(3.4, 5.6);
    assertEqualsDouble(ans.real, 3.4);
    assertEqualsDouble(ans.image, 5.6);
}

void testMakeCompRT() {
    complex  ans;
    testStart("makeCompRT");
    // 3∠0
    ans = makeCompRT(3.0, 0);
    assertEqualsComplex(ans, makeComp(3.0,0));
    // 2∠π/2
    ans = makeCompRT(2.0, M_PI/2.0);
    assertEqualsComplex(ans, makeComp(0,2.0));
    // 1∠(-π/4)
    ans = makeCompRT(1.0, -M_PI/4.0);
    assertEqualsComplex(ans, makeComp(1.0/sqrt(2.0),-1.0/sqrt(2.0)));
}

/* main関数の記述部 */
int main() {
    // ↓↓↓↓ 33xx XXXX 記述部(この範囲以外には追加しない)
    testFirst();
    // ↑↑↑↑ ここまでを 33xx XXXX が記述(この範囲以外には追加しない)

    //////////////////////////////////////////////////////////////////////////////////////////

    // ↓↓↓↓ 33yy YYYY 記述部(この範囲以外には追加しない)
    testSecond();
    // ↑↑↑↑ ここまでを 33yy YYYY が記述(この範囲以外には追加しない)

    //////////////////////////////////////////////////////////////////////////////////////////

    // ↓↓↓↓ 33zz ZZZZ 記述部(この範囲以外には追加しない)
    testThird();
    // ↑↑↑↑ ここまでを 33zz ZZZZ が記述(この範囲以外には追加しない)

    // ここから下は追加・変更しないでください。
    testMakeComp();
    testMakeCompRT();
    testErrorCheck();  // これは消さないこと
    return 0;
}
