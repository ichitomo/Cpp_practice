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
    // insert code here...
    char c;     //１文字を格納する変数
    char s[6];   //文字列を格納する変数
    //データを格納する
    c = 'A';
    strcpy(s, "hello");
    //データを表示する
    cout << c << "\n";
    cout << s << "\n";
    return 0;
}
