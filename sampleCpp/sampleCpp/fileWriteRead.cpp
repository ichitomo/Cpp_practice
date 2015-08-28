//
//  fileWriteRead.cpp
//  sampleCpp
//
//  Created by 一ノ瀬智太 on 2015/08/28.
//  Copyright (c) 2015年 ichinose.tomohiro. All rights reserved.
//

#include <iostream>
#include <string>
#include <fstream>//ファイルの入出力のために使う
using namespace std;

int main(){
    ofstream fout;  //出力のストリーム
    string s;   //ファイルに書き込む文字列
    //ファイルを開く
    fout.open("test.txt");
    //エラーチェックを行う
    if (!fout) {
        cout << "ファイルを開けません\n";
        return -1;
    }
    while (true) {
        //文字列をキー入力すうr
        getline(cin, s);
        //ドットだけの入力なら終了する
        if (s == ".") {
            break;
        }
        //文字列をファイルに書き込む
        fout << s << "\n";
    }
    fout.close();
    cout << "ファイルに書き込みました。\n";
    return 0;
}
