#include <iostream>
#include <cmath>
using namespace std;

bool Tile_check(long long x, long long y) {
    return (x + y) % 2 == 0;
}

long long Min_motion(long long Sx, long long Sy, long long Tx, long long Ty) {

    bool start = Tile_check(Sx, Sy);
    bool goal = Tile_check(Tx, Ty);

    long long deltaX = abs(Sx - Tx);
    long long deltaY = abs(Sy - Ty);

    if (Sx == Tx && Sy == Ty) {
        return 0;
    }

    if (deltaX == 1 && deltaY == 0) {
        return 0;
    }

    if (start == goal) {
        return max(deltaX, deltaY);
    } else {
        return max(deltaX, deltaY) + 1;
    }
}

int main() {
    long long Sx, Sy;
    long long Tx, Ty;

    cin >> Sx >> Sy;
    cin >> Tx >> Ty;

    long long ans = Min_motion(Sx, Sy, Tx, Ty);

    cout << ans << endl;

    return 0;
}
