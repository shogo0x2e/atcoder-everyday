#include <bits/stdc++.h>

int main() {
  
  unsigned N, Q;
  std::string S;
  std::cin >> N >> S >> Q;

  std::string from, to;

  // a-z に対して、最終的な変換表を作る
  from = to = "abcdefghijklmnopqrstuvwxyz";

  for (int i = 0; i < Q; i++) {
    char c, d;
    std::cin >> c >> d;
    for (auto &&e: to) {
      if (e == c) e = d;
    }
  }

  for (auto &&e: S) {
    for (int i = 0; i < 26; i++) {
      if (e == from[i]) {
        std::cout << to[i];
      }
    }
  }

  std::cout << std::endl;

}