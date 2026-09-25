#pragma once


struct aday {
    int level{};
    int day_num;
    int last_time_on_day;
    int next_time_on_day;
};

void create(int days_num);