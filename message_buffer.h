/*	"message_buffer.h"
 *	Assignment 2
 *	CPS590 - Intro to Operating Systems
 *
 *	Written By:		Sam Dindyal
 * 	Description:	Header file for the message buffer.
 *	Date Written:	March, 2015
 */ 

//"message_buffer"
typedef struct{
	long mtype;		//mtype for message queue
	char text[256];		//Storage for text
}message_buffer;
