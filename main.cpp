#include <iostream>
#include "test_functions.h"
#include "sorts.h"

int main() {
    std::uint32_t Ni[] = {30000, 100000, 300000, 1000000};
    for(short type = 0; type<6; ++type) {
        if (type == STD_SORT) {
            std::cout << "std::sort\n";
        } else if (type == STD_STABLE_SORT) {
            std::cout << "std::stable_sort\n";
        } else if (type == STD_PARTIAL_SORT) {
            std::cout << "std::partial_sort\n";
        } else if (type == MSD_RADIX_SORT) {
            std::cout << "msd_radix_sort\n";
        } else if (type == INTRO_SORT) {
            std::cout << "intro_sort\n";
        } else if (type == SHELL_SORT) {
            std::cout << "shell_sort\n";
        }
        for (auto &N : Ni) {
            std::cout << "N = " << N << std::endl;
            ostreamVersion::uniform_0to2_in_pow_31_std_sort(N, type);
            ostreamVersion::uniform_0to2_in_pow_15_std_sort(N, type);
            ostreamVersion::uniform_0to2_N_1_std_sort(N, type);
            ostreamVersion::normal_0to2_in_pow_31_std_sort(N, type);
        }
    }

    return 0;
}
