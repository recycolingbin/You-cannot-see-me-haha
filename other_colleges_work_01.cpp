#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numAttendees, startTime, endTime;
    char isHoliday, isStudent;
    double feePerHour = 0.0, totalFee = 0.0;
    cin >> numAttendees;
    cin >> startTime;
    cin >> endTime;
    cin >> isHoliday;
    cin >> isStudent;

    if (numAttendees >= 1 && numAttendees <= 6) {
        feePerHour = 50.0;
    } else if (numAttendees >= 7 && numAttendees <= 12) {
        feePerHour = 98.0; 
    } else {
        feePerHour = 188.0;
    }

    if (isHoliday == 'y') {
        feePerHour *= 1.5;
    }
    
    int bookingDuration = endTime - startTime;
    if (startTime >= 8 && startTime <= 17) {
        int peakHoursDuration, nonPeakHoursDuration;
        if (endTime > 17) {
            peakHoursDuration = 17 - startTime;
            nonPeakHoursDuration = endTime - 17;
            totalFee = peakHoursDuration * feePerHour * 1.2 + nonPeakHoursDuration * feePerHour;
        } else {
            peakHoursDuration = endTime - startTime;
            totalFee = peakHoursDuration * feePerHour * 1.2;
        }
    } else if (startTime < 8) {
        int nonPeakHoursDuration = 8 - startTime;
        int peakHoursDuration = endTime - 8;
        totalFee = peakHoursDuration * feePerHour * 1.2 + nonPeakHoursDuration * feePerHour;
    }

    if (isStudent == 'y') {
        totalFee *= 0.9; 
        if (bookingDuration >= 4) {
            totalFee *= 0.8; 
        } 
    } else if (bookingDuration >= 4) {
        totalFee *= 0.8; 
    } 

    cout << fixed << setprecision(2);
    cout << totalFee << endl;

    return 0;
}
