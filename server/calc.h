#pragma once
#include <vector>
#include <iostream>
#include <limits>
#include <stdlib.h>

class calc {
public:
    uint32_t res; 


    calc(std::vector<uint32_t> chisla);

   
    uint32_t send_res();
};
