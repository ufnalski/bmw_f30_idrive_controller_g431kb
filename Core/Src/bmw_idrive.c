/*
 * bmw_idrive.c
 *
 *  Created on: Oct 19, 2025
 *      Author: user
 */

#include "main.h"
#include "bmw_idrive.h"

FDCAN_TxHeaderTypeDef TxHeader;
uint8_t TxData8[8];
uint8_t TxData1[1];

// https://www.bimmerfest.com/threads/k-can2-messages-to-wake-a-cic-idrive-controller.890419/?nested_view=1&post_id=13182279#post-13182279
void send_wake_up(uint32_t delay_before_send)
{
	HAL_Delay(delay_before_send);

	TxHeader.DataLength = FDCAN_DLC_BYTES_1;
	TxHeader.Identifier = 0x202;
	TxData1[0] = 0xFD;

	if (HAL_FDCAN_AddMessageToTxFifoQ(&hfdcan1, &TxHeader, TxData1) != HAL_OK)
	{
		Error_Handler();
	}

}

// https://www.bimmerfest.com/threads/k-can2-messages-to-wake-a-cic-idrive-controller.890419/?nested_view=1&post_id=13182279#post-13182279
void send_keep_active(uint32_t delay_before_send)
{
	HAL_Delay(delay_before_send);

	TxHeader.DataLength = FDCAN_DLC_BYTES_1;
	TxHeader.Identifier = 0x563;
	TxData1[0] = 0x63;

	if (HAL_FDCAN_AddMessageToTxFifoQ(&hfdcan1, &TxHeader, TxData1) != HAL_OK)
	{
		Error_Handler();
	}

}

// https://www.bimmerfest.com/threads/k-can2-messages-to-wake-a-cic-idrive-controller.890419/?nested_view=1&post_id=13182279#post-13182279
void send_init(uint32_t delay_before_send)
{
	HAL_Delay(delay_before_send);

	TxHeader.DataLength = FDCAN_DLC_BYTES_8;
	TxHeader.Identifier = 0x273;
	TxData8[0] = 0x1D;
	TxData8[1] = 0xE1;
	TxData8[2] = 0x00;
	TxData8[3] = 0xF0;
	TxData8[4] = 0xFF;
	TxData8[5] = 0x7F;
	TxData8[6] = 0xDE;
	TxData8[7] = 0x00;

	if (HAL_FDCAN_AddMessageToTxFifoQ(&hfdcan1, &TxHeader, TxData8) != HAL_OK)
	{
		Error_Handler();
	}

}
