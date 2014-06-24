#include <iostream>
using namespace std;
int main() {
	unsigned long long settime = 0;
    cin >> settime;
    settime >>= 22;
    settime += 1288834974657;
    int settime_ms = settime % 1000;
    int settime_sec = settime / 1000;
    int time_sec = settime_sec % 60;
    int time_min = (settime_sec % 3600) / 60;
    cout << time_min << ":" << time_sec << "." << settime_ms << endl;
	return 0;
}