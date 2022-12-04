#include <iostream>
using namespace std;

int main(){
    int seconds, minutes, hours;
    cin >> seconds;

    hours = seconds / 3600;
    seconds = seconds - (hours * 3600);
    minutes = seconds / 60;
    seconds = seconds - (minutes * 60);

    cout << hours << ":" << minutes << ":" << seconds << endl;

return 0;
}