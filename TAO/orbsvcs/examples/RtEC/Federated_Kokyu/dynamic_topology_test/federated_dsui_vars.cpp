// $Id$

#include <datastream_common.h>
#include <dsui_types.h>
#include "federated_dsui_families.h"
counter_t TEST_ONE_COUNTERS[NUM_COUNTERS_TEST_ONE] = {
};
histogram_t TEST_ONE_HISTOGRAMS[NUM_HISTOGRAMS_TEST_ONE] = {
};
family_t TEST_ONE = {
        "TEST_ONE",
        NUM_EVENTS_TEST_ONE,
        NUM_COUNTERS_TEST_ONE,
        NUM_HISTOGRAMS_TEST_ONE,
        TEST_ONE_COUNTERS,
        TEST_ONE_HISTOGRAMS,
        0,
        0,
        0,
        0
};

counter_t WORKER_GROUP_COUNTERS[NUM_COUNTERS_WORKER_GROUP] = {
};
histogram_t WORKER_GROUP_HISTOGRAMS[NUM_HISTOGRAMS_WORKER_GROUP] = {
};
family_t WORKER_GROUP = {
        "WORKER_GROUP",
        NUM_EVENTS_WORKER_GROUP,
        NUM_COUNTERS_WORKER_GROUP,
        NUM_HISTOGRAMS_WORKER_GROUP,
        WORKER_GROUP_COUNTERS,
        WORKER_GROUP_HISTOGRAMS,
        0,
        0,
        0,
        0
};

counter_t MAIN_GROUP_COUNTERS[NUM_COUNTERS_MAIN_GROUP] = {
};
histogram_t MAIN_GROUP_HISTOGRAMS[NUM_HISTOGRAMS_MAIN_GROUP] = {
};
family_t MAIN_GROUP = {
        "MAIN_GROUP",
        NUM_EVENTS_MAIN_GROUP,
        NUM_COUNTERS_MAIN_GROUP,
        NUM_HISTOGRAMS_MAIN_GROUP,
        MAIN_GROUP_COUNTERS,
        MAIN_GROUP_HISTOGRAMS,
        0,
        0,
        0,
        0
};

int federated_table_offset= 1;
family_t *federated_family_table[NUM_FAMILIES] = {

        &TEST_ONE,
        &MAIN_GROUP,
        &WORKER_GROUP,
};

