#include <bits/stdc++.h>

int main() {
  int H, W, N;
  std::cin >> H >> W >> N;

  std::string T;
  std::cin >> T;
  std::vector<std::string> S(H);
  for (auto &&e : S) {
    std::cin >> e;
  }

  int ans = 0;
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (S[i][j] == '#') continue;
      int I = i, J = j;
      bool ok = true;
      for (auto &&e : T) {
        if (e == 'L') J--;
        if (e == 'R') J++;
        if (e == 'U') I--;
        if (e == 'D') I++;
        if (S[I][J] == '#') {
          ok = false;
          break;
        }
      }
      if (ok) ans++;
    }
  }
  std::cout << ans << std::endl;
}
