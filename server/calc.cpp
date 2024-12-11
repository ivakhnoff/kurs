#include "calc.h"
#include "error.h"

calc::calc(std::vector<uint32_t> chisla) {
    if (chisla.empty()) {
        throw no_crit_err("Должен быть хотя бы один элемент в векторе");
    }
    uint32_t sum = 0;
    for (uint32_t i : chisla) {
        sum += i;
    }
    res = sum;
}

uint32_t calc::send_res() {
    return res;
}
