// X班 complex.c

#include "complex.h"

#include <math.h>
#include <stdio.h>

// テスト作成者は雛形までを作成し、コンパイルができるまでを責任とします。
// コンパイルができたところで、コミットしてください。

//////////////////////////////////////////////////////////////////////////////////////////

//↓↓↓↓ 33xx XXXX 記述部(雛形まで。この範囲以外には追加しない)
complex makeComp(double real, double image) {
    complex result;
    result.real = real;
    result.image = image;
    return result;
}

complex makeCompRT(double r, double theta) {
    complex result;
    result.real = r * cos(theta);
    result.image = r * sin(theta);
    return result;
}

complex addComp(complex a, complex b) {
    complex result;
    result.real = a.real + b.real;
    result.image = a.image + b.image;
    return result;
}

complex subComp(complex a, complex b) {
    complex result;
    result.real = a.real - b.real;
    result.image = a.image - b.image;
    return result;
}

complex cmulComp(complex a, double k) {
    complex result;
    result.real = a.real * k;
    result.image = a.image * k;
    return result;
}

complex mulComp(complex a, complex b) {
    complex result;
    result.real = a.real * b.real - a.image * b.image;
    result.image = a.real * b.image + a.image * b.real;
    return result;
}

double getR2(complex a) {
    return a.real * a.real + a.image * a.image;
}

complex conjComp(complex a) {
    complex result;
    result.real = a.real;
    result.image = -a.image;
    return result;
}


//↑↑↑↑ ここまでを 33xx XXXX が記述(この範囲以外には追加しない)

//////////////////////////////////////////////////////////////////////////////////////////

//↓↓↓↓ 33yy YYYY 記述部(雛形まで。この範囲以外には追加しない)
complex invComp(complex a) {
    complex result;
    complex conj = conjComp(a);
    double denom = getR2(a);
    result.real = conj.real / denom;
    result.image = conj.image / denom;
    return result;
}

complex divComp(complex a, complex b) {
    complex result;
    complex a_mul_invb = mulComp(a, invComp(b));
    result.real = a_mul_invb.real;
    result.image = a_mul_invb.image;
    return result;
}

double getR(complex a) {
    return sqrt(getR2(a));
}

double getTheta(complex a) {
    return atan2(a.image, a.real);
}

void printComp(complex a) {
    if (a.image >= 0) {
        printf("%.2f + j%.2f\n", a.real, a.image);
    } else {
        printf("%.2f - j%.2f\n",  a.real, -a.image);
    }
}

void printCompRT(complex a) {
    double r = getR(a);
    double theta = getTheta(a) * (180 / M_PI); // ラジアンを度に変換
    printf("r: %.2f, θ: %.2f degree\n", r, theta);
}
//↑↑↑↑ ここまでを 33yy YYYY が記述(この範囲以外には追加しない)

//////////////////////////////////////////////////////////////////////////////////////////

//↓↓↓↓ 33zz ZZZZ 記述部(雛形まで。この範囲以外には追加しない)

//↑↑↑↑ ここまでを 33zz ZZZZ が記述(この範囲以外には追加しない)

// ここから下には何も追記しないでください。