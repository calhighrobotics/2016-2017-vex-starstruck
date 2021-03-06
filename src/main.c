#pragma config(Motor,  port1,            ,             tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port2,           DRIVE_RB,      tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           DRIVE_RF,      tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           LIFT_TL,       tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port5,           LIFT_BR,       tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           LIFT_BL,       tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port7,           LIFT_TR,       tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           DRIVE_LF,      tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port9,           DRIVE_LB,      tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port10,           ,             tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*
 * TAYLOR HANSEN, HAMZA LAWAI
 *
 * This is the main program for Team B's Starstruck competition robot.
 *
 * When compiled, this file will #include all the other related C files
 * for the drive train and autonomous. It also contains the motor configs.
 *
 * Symbolic constants:
 * -MOTOR_DEBUG: If defined, enables debug controls. More info in drive.c.
 *
 * Dependencies: Vex_Competition_Includes.c, auto.c, drive.c, lib.c.
 */

#pragma platform(VEX)
#pragma competitionControl(Competition)
#pragma autonomousDuration(20)
#pragma userControlDuration(120)

// uncomment this line to enable debug controls
//#define MOTOR_DEBUG

#include "VEX_Competition_Includes.c"

#include "auto.c"
#include "drive.c"
#include "lib.c"
