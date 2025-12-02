#ifndef __COMPLEX_H__
#define __COMPLEX_H__

// 二重読み込みを防ぐために、complex 構造体の定義などはここに記述

// ↓↓↓↓ complex の定義 by 33aa AAAA

//↑↑↑↑ ここまでを 33aa AAAA が記述

//////////////////////////////////////////////////////////////////////////////////////////

// プロトタイプ宣言部
//↓↓↓↓ 33xx XXXX 記述部(この範囲以外に追加しない)

complex makeComp(double real, double image);    //複素構造体生成
complex makeCompRT(double r, double theta);     //極形式から複素構造体生成
complex addComp(complex a, complex b);          //加算
complex subComp(complex a, complex b);          //減算
complex cmulComp(complex a, double k);          //定数倍
complex mulComp(complex a, complex b);          //乗算
double getR2(complex a);                        //2乗
complex conjComp(complex a);                    //共役複素数  


//↑↑↑↑ ここまでを 33xx XXXX が記述(この範囲以外に追加しない)

//////////////////////////////////////////////////////////////////////////////////////////

//↓↓↓↓ 33yy YYYY 記述部(この範囲以外に追加しない)

complex invComp(complex a);                     //逆数  
complex divComp(complex a, complex b);          //除算
double getTheta(complex a);                     //なす角(radian)
void printComp(complex a);                      //表示
void printCompRT(complex a);                    //極形式で表示


//↑↑↑↑ ここまでを 33yy YYYY が記述(この範囲以外に追加しない)

//////////////////////////////////////////////////////////////////////////////////////////

//↓↓↓↓ 33zz ZZZZ 記述部(この範囲以外に追加しない)



//↑↑↑↑ ここまでを 33zz ZZZZ が記述(この範囲以外に追加しない)

// ここから下には何も追記しないでください。

#endif