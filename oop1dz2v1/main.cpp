#include "Time.h"
#include "Tire.h"
#include "SummerTire.h"
#include "WinterTire.h"
#include "AllSeasonTire.h"
#include "List.h"
#include <iostream>

int main() {
    try {
        Time time1(15, 23, 30, 12, 2023);
        Time time2(15, 23, 30, 12, 2023);

        std::cout << "Time 1: " << time1 << std::endl;
        std::cout << "Time 2: " << time2 << std::endl;

        if (time1 == time2) {
            std::cout << "Time 1 is equal to Time 2." << std::endl;
        } else {
            std::cout << "Time 1 is not equal to Time 2." << std::endl;
        }

        if (time1 < time2) {
            std::cout << "Time 1 is before Time 2." << std::endl;
        } else {
            std::cout << "Time 1 is not before Time 2." << std::endl;
        }

        time1 += 30;
        std::cout << "Time 1 after adding 30 minutes: " << time1 << std::endl;

        SummerTire summer_tire(205, 60, 16, 8, 100, time1);
        WinterTire winter_tire(215, 65, 17, 10, 120, time2);
        AllSeasonTire all_season_tire(195, 55, 15, 7, 90, time2);

        std::cout << "Summer Tire: " << summer_tire << std::endl;
        std::cout << "Winter Tire: " << winter_tire << std::endl;
        std::cout << "All Season Tire: " << all_season_tire << std::endl;

        List<int> my_list;
        my_list.add_element(44);
        my_list.add_element(20);
        my_list.add_element(30);

        std::cout << "Size of the list: " << my_list.get_number_of_elements() << std::endl;
        std::cout << "Element at index 1: " << my_list[1] << std::endl;

        my_list.remove_element(0);
        std::cout << "Size of the list after removal: " << my_list.get_number_of_elements() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
