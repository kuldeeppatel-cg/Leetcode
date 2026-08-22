// Last updated: 22/08/2026, 23:39:11
class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        vector<string> days = {
            "Sunday", "Monday", "Tuesday", "Wednesday",
            "Thursday", "Friday", "Saturday"
        };

        if (month < 3) {
            month += 12;
            year--;
        }

        int k = year % 100;
        int j = year / 100;

        int h = (day + (13 * (month + 1)) / 5 + k + k / 4 +
                 j / 4 + 5 * j) % 7;

        int index = (h + 6) % 7;

        return days[index];
    }
};