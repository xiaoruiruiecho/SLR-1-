#ifndef UTILS_H
#define UTILS_H

#include <string>
#include <cstring>
#include <iostream>

#define tab "\t"
#define endl "\n"
#define fi first
#define se second
#define mst(arr, v) memset(arr, v, sizeof arr)
#define rep(i, a, b) for(int i = (a); i <= (b); i ++)
#define dbg_vec(vec) for(auto &t : vec) { std::cout << t << " "; } std::cout << endl;
#define dbg_map(mp) for(auto &t : mp) std::cout << t.fi << ": " << t.se << endl;
#define dbg_set(st) for(auto &t : st) { std::cout << t << " "; } std::cout << endl;

const char Empty = '$'; // 'ε'
const std::string EMPTY = "$"; // "ε"
const char End = '#';
const std::string END = "#";
const int MAX_V_LEN = 2e2 + 10;
const int MAX_T_LEN = 2e2 + 10;
const int MAX_P_LEN = 4e2 + 10;
const int MAX_DFA_LEN = 1e2 + 10;

void Decorate(int size);

bool IsLetter(char c);

bool IsChar(char c);

bool IsDigit(char c);

#endif //UTILS_H
