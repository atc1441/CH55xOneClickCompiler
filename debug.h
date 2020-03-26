#pragma once

#include <stdint.h>

#ifndef  UART0_BUAD
#define  UART0_BUAD    9600
#endif

#ifndef UART1_BAUD
#define  UART1_BUAD    9600
#endif

void	CfgFsys( );

void	mDelayuS( uint16_t n );
void	mDelaymS( uint16_t n );


void  CH554UART0Alter();
void	mInitSTDIO( );
uint8_t CH554UART0RcvByte( );
void  CH554UART0SendByte(uint8_t SendDat);

void	UART1Setup( );
uint8_t CH554UART1RcvByte( );
void  CH554UART1SendByte(uint8_t SendDat);


void CH554WDTModeSelect(uint8_t mode);
void CH554WDTFeed(uint8_t tim);

typedef void(* __data FunctionReference)();
extern FunctionReference runBootloader;
