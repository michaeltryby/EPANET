/*
 * hydbuffer.c
 *
 *  Created on: Oct 15, 2018
 *      Author: mtryby
 */

#include "types.h"
#include "hydbuffer.h"


buffer_t *new_hydbuffer() {

    buffer_t *hydbuffer;
    hydbuffer = (buffer_t*)calloc(1, sizeof(buffer_t));

    return hydbuffer;
}

void dst_hydbuffer(buffer_t *h_buffer)
{
    ;
}

void hydbuffer_passthru(EN_Project *pr, buffer_t *h_buffer)
{
    ;
}


