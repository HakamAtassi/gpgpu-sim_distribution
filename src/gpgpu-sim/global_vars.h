#ifndef GLOBAL_VARS_H_
#define GLOBAL_VARS_H_

#include "gpu-sim.h"
#include "nlohmann/json.hpp" //sudo apt-get install nlohmann-json3-dev
#include <vector>
#include <string>

using json = nlohmann::json;



extern json statistics;
extern std::string current_kernel_name;
extern int current_kernel_uid;


extern json custom_memory_stats;

extern unsigned int* num_DRAM_channels;
extern unsigned int* num_HBM_channels;


extern int derived_kernel_id;

extern std::vector<int> channel_access;

extern HBM_memory_config HBM_m_memory_config;


extern int chip_id_to_partition(int chipID);

//extern const HBM_memory_config *HBM_m_memory_config;

#endif