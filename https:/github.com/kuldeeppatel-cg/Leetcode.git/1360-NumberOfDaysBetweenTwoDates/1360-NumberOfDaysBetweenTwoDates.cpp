// Last updated: 07/09/2026, 13:46:03
class Solution {
public:
    bool isLeap(int year) {
        return (year % 400 == 0) || 
               (year % 4 == 0 && year % 100 != 0);
    }

    int daysFromStart(string date) {
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));

        int days = 0;

        // Days in previous years
        days += 365 * (year - 1);
        days += (year - 1) / 4;
        days -= (year - 1) / 100;
        days += (year - 1) / 400;

        // Days in previous months
        vector<int> monthDays = {
            31, 28, 31, 30, 31, 30,
            31, 31, 30, 31, 30, 31
        };

        for (int m = 1; m < month; m++) {
            days += monthDays[m - 1];

            if (m == 2 && isLeap(year))
                days++;
        }

        days += day;

        return days;
    }

    int daysBetweenDates(string date1, string date2) {
        return abs(daysFromStart(date1) - daysFromStart(date2));
    }
};
