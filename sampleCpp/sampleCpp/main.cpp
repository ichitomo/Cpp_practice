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
    char s[6];   //文字列を格納する変数
    int i;
    //データを格納する
    strcpy(s, "hello");
    //データを表示する
    cout << s[i] << "文字\t" << "文字コード\n";
    for (i = 0; i < 6; i++) {
        cout << s[i] << "\t" << (int)s[i] << "\n";
    }
    
    return 0;
}
