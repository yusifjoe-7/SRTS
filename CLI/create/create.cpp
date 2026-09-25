#include "create.hpp"
#include <iostream>
#include <vector>
#include "../colors.hpp"

int levels_list[] = {1, 3, 7, 14, 30, 60, 120, 240, 360};


void day_update(aday& day, int& num_of_day){
    day.last_time_on_day = num_of_day;
    day.next_time_on_day = levels_list[day.level] + num_of_day;
    day.level += 1;
}

void cout_aday(int& day_num){
    std::cout<<"Day "<< day_num << " chapter"<<std::endl;
}


void create(int days_num){

    std::vector<aday> days_list;
    
    for(int i{}; i< days_num; i++){
        int num_of_day = i+1;
        aday day;
        day.day_num = num_of_day;
        //day.level = 0;
        day_update(day, num_of_day);
        days_list.push_back(day);

        std::cout<<std::endl<<GREEN<<" -------- day "<<num_of_day<<" --------"<<RESET<<std::endl<<std::endl;
        std::cout<<std::endl<<BB<<"=> "<<RESET;
        cout_aday(day.day_num);
        std::cout<<std::endl;
        for (aday& y : days_list) {
            if(y.next_time_on_day == num_of_day){
                day_update(y, num_of_day);
                cout_aday(y.day_num);
            }

        }
        
    }
}