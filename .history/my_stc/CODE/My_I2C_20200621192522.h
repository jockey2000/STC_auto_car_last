/*
 * @Description  : 
 * @Version      : 
 * @Author       : yan_wen
 * @Date         : 2020-06-18 16:22:51
 * @LastEdiors   : yan_wen
 * @LastEditTime : 2020-06-21 19:25:21
 */ 
#ifndef __My_I2C_H__
#define __My_I2C_H__
#include "common.h"
#include "headfile.h"

void I2C_Start(void);
void I2C_Stop(void);
void I2C_SendByte(uchar dat);
uchar I2C_RecvByte(bit _ack);
uchar I2C_Single_Write(uchar REG_Address,uchar REG_data);
uchar I2C_Single_Read(uchar REG_Address);
uchar I2C_reads(uchar addr,uchar length,uchar *Data);
uchar I2C_read(uchar addr,uchar *Data);
uchar I2C_WriteBits(uchar addr,uchar bitStart,uchar length,uchar Data);
uchar I2C_WriteBit(uchar addr,uchar bitNum,uchar Data);
uchar I2C_readBit(uchar addr,uchar bitNum,uchar *Data);
uchar I2C_readBits(uchar addr,uchar bitStart,uchar length,uchar *Data);
