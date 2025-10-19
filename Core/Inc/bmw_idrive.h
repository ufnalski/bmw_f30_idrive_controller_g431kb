/*
 * bmw_idrive.h
 *
 *  Created on: Oct 19, 2025
 *      Author: user
 */

#ifndef INC_BMW_IDRIVE_H_
#define INC_BMW_IDRIVE_H_

#include "fdcan.h"

void send_wake_up(uint32_t delay_before_send);
void send_keep_active(uint32_t delay_before_send);
void send_init(uint32_t delay_before_send);

#endif /* INC_BMW_IDRIVE_H_ */
