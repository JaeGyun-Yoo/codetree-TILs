#include <iostream>
#include <vector>
#include <map>

int main() {
    int m1, d1, m2, d2;
    std::string day;
    std::cin >> m1 >> d1 >> m2 >> d2;
    std::cin >> day;

    std::vector<int> days_in_month = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    std::map<std::string, int> day_to_int = {{"Mon", 0}, {"Tue", 1}, {"Wed", 2}, {"Thu", 3}, {"Fri", 4}, {"Sat", 5}, {"Sun", 6}};
    
    // Calculate the day of the week for 2024-01-01 assuming it is a Monday
    int first_day_of_year = 0; // 2024-01-01 is a Monday
    
    // Calculate the day of the week for m1, d1
    int day_of_week_m1_d1 = first_day_of_year;
    for (int i = 1; i < m1; ++i) {
        day_of_week_m1_d1 += days_in_month[i];
    }
    day_of_week_m1_d1 += (d1 - 1);
    day_of_week_m1_d1 %= 7;
    
    // Calculate the offset of the target day from m1, d1
    int target_day_of_week = day_to_int[day];
    int day_offset = (target_day_of_week - day_of_week_m1_d1 + 7) % 7;
    
    // Total number of days from m1,d1 to m2,d2
    int total_days = day_offset; // start counting from the first target day
    for (int i = m1; i <= m2; ++i) {
        int days_this_month = (i == m1) ? (days_in_month[i] - d1 + 1) : days_in_month[i];
        if (i == m2) days_this_month = d2;
        total_days += days_this_month;
    }
    
    // Count how many times the target day appears
    int count = 0;
    for (int i = day_offset; i < total_days; i += 7) {
        count++;
    }

    std::cout << count << std::endl;

    return 0;
}