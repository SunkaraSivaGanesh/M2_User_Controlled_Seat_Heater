/*
 * fuse.c
 *
 * Created: 21-04-2022 10.18.28 AM
 *  Author: Siva
 */ 
#include <avr/io.h>

FUSES = {
	.low = LFUSE_DEFAULT,
	.high = HFUSE_DEFAULT,
	.extended = EFUSE_DEFAULT
};

