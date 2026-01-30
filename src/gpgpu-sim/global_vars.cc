#include "addrdec.h"
#include <math.h>
#include <string.h>
#include "../option_parser.h"
#include "gpu-sim.h"
#include "hashing.h"
#include "global_vars.h"

int chip_id_to_partition(int chipID){ // chipID is the sub partition ID

    int dram_channels      = *num_DRAM_channels;
    int hbm_channels       = *num_HBM_channels;

    int dram_sub_per_chan  = 4;
    int hbm_sub_per_chan   = 4;

    int num_DRAM_subs = dram_channels * dram_sub_per_chan;

    // Case 1: This partition is a DRAM channel
    if (chipID < num_DRAM_subs) {
        return chipID/4;
    }else{

      int HBM_id = (chipID - num_DRAM_subs)/4;

      return dram_channels + HBM_id;
    }

}