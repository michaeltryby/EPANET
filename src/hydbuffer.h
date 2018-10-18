/*
 * hydbuffer.h
 *
 *  Created on: Oct 15, 2018
 *      Author: mtryby
 */

#ifndef SRC_HYDBUFFER_H_
#define SRC_HYDBUFFER_H_

// Forward declare EN_Project
typedef struct EN_Project EN_Project;


typedef struct hydresult_s {
    double *node_demand,
           *node_head,
           *link_flow,
           *link_setting;

    int    *link_status;
} hydresult_t;

typedef struct buffer_s {
    long hyd_time;
    long hyd_step;

    hydresult_t result;

} buffer_t;


buffer_t *new_buffer();
void dst_buffer(buffer_t *buffer);

// Prepare buffer for quality simulation
int buffer_init();

// Reuse case: read from hydraulics results file
void buffer_cache();

// Single-threaded: pass calls on the quality buffer thru to the hyd buffer
void buffer_passthru();

// Multi-threaded: swap the leading buffer with the lagging buffer
void buffer_swap();


#endif /* SRC_HYDBUFFER_H_ */
