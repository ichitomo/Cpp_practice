//
//  main.cpp
//  sampleCpp
//
//  Created by 一ノ瀬智太 on 2015/08/28.
//  Copyright (c) 2015年 ichinose.tomohiro. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    // 余裕をもった要素数の配列を用意しておく
    char s1[100];
    char s2[100];
    //文字列を格納する
    strcpy(s1, "apple");
    strcpy(s2, "orange");
    //データを表示する
    cout << "s1の内容 = " << s1 << "\n";
    cout << "s2の内容 = " << s2 << "\n\n";
    //文字列の長さを求める
    cout << "s1の長さ = " << strlen(s1) << "\n";
    cout << "s2の長さ = " << strlen(s2) << "\n\n";
    //文字列を比較する
    int cmp = strcmp(s1, s2);
    if (cmp > 0) {
        cout << s1 << "は" << s2 << "よりも大きい\n\n";
    }else if (cmp == 0){
        cout << s1 << "は" << s2 << "と等しい\n\n";
    }else{
        cout << s1 << "は" << s2 << "よりも小さい\n\n";
    }
    
    //文字列を連結する
    strcat(s1, s2);
    cout << "s1にs2を連結 = " << s1 << "\n\n";
    return 0;
}
