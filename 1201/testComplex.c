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

void testaddComp(){
    complex ans[2];
    ans[0] = makeComp(2.0, 3.0);
    ans[1] = makeComp(2.0, 3.0);
    complex anss = addComp(ans[0], ans[1]);
    assertEqualsDouble(anss.real, 4.0);
    assertEqualsDouble(anss.image, 6.0);
}

void testsubComp(){
    complex ans[2];
    ans[0] = makeComp(4.0, 5.0);
    ans[1] = makeComp(2.0, 3.0);
    complex anss = subComp(ans[0], ans[1]);
    assertEqualsDouble(anss.real, 2.0);
    assertEqualsDouble(anss.image, 2.0);
}

void testcmulComp(){
    complex ans;
    ans = makeComp(2.0, 3.0);
    ans = cmulComp(ans, 4);
    assertEqualsDouble(ans.real, 8.0);
    assertEqualsDouble(ans.image, 12.0);
}

void testmulComp(){
    complex ans[2];
    ans[0] = makeComp(4.0, 5.0);
    ans[1] = makeComp(2.0, 3.0);
    complex anss = mulComp(ans[0], ans[1]);
    assertEqualsDouble(anss.real, -7.0);
    assertEqualsDouble(anss.image, 22.0);
}


void testgetR2(){
    double ans;
    complex anss = makeComp(2.0, 3.0);
    ans = getR2(anss);
    assertEqualsDouble(ans, 13.0);

}

void testconjComp(){
    complex ans;
    ans = makeComp(2.0, 3.0);
    ans = conjComp(ans);
    assertEqualsDouble(ans.real, 2.0);
    assertEqualsDouble(ans.image, -3.0);
}

void testinvComp(){
    complex ans;
    ans = makeComp(2.0, 3.0);
    ans = invComp(ans);
    assertEqualsDouble(ans.real, (double)2/13);
    assertEqualsDouble(ans.image, (double)-3/13);
}

void testdivComp(){
    complex ans1;
    complex ans2;
    complex r;
    ans1 = makeComp(3.0, 4.0);
    ans2 = makeComp(5.0, 3.0);
    r = divComp(ans1, ans2);
    assertEqualsDouble(r.real, (double)27/34);
    assertEqualsDouble(r.image, (double)11/34);
}

void testgetR(){
    double ans;
    complex anss;
    anss = makeComp(3.0, 4.0);
    ans = getR(anss);
    assertEqualsDouble(ans, 5.0);
}

void testgetTheta(){
    complex ans;
    ans = makeComp(2.0, 2.0);
    double anss = getTheta(ans);
    assertEqualsDouble(anss, M_PI/4);
}

void testprintComp(){
    complex ans;
    ans = makeComp(3.0, 7.0);
    printComp(ans); 
}
void testprintCompRT(){
    complex ans;
    ans = makeComp(2.0, 4.0);
    printCompRT(ans);
}

/* main関数の記述部 */
int main() {
    // ↓↓↓↓ 3321 鈴木博智 記述部(この範囲以外には追加しない)
    testFirst();

    testMakeComp();
    testMakeCompRT();
    testaddComp();
    testsubComp();
    testcmulComp();
    testmulComp();
    testgetR2();
   
    // ↑↑↑↑ ここまでを 3321 鈴木博智 が記述(この範囲以外には追加しない)

    //////////////////////////////////////////////////////////////////////////////////////////

    // ↓↓↓↓ 3335 古川剛琉 記述部(この範囲以外には追加しない)
    testSecond();

    testconjComp();
    testinvComp();
    testdivComp();
    testgetR();
    testgetTheta();
    testprintComp();
    testprintCompRT();
    testErrorCheck();  // これは消さないこと
    
    // ↑↑↑↑ ここまでを 3335 古川剛琉 が記述(この範囲以外には追加しない)

    //////////////////////////////////////////////////////////////////////////////////////////

    // ↓↓↓↓ 33zz ZZZZ 記述部(この範囲以外には追加しない)
    testThird();
    // ↑↑↑↑ ここまでを 33zz ZZZZ が記述(この範囲以外には追加しない)

    // ここから下は追加・変更しないでください。
    
    return 0;
}
