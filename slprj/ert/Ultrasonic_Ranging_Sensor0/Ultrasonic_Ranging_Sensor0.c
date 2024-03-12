/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Ultrasonic_Ranging_Sensor0.c
 *
 * Code generated for Simulink model 'Ultrasonic_Ranging_Sensor0'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Thu Jun  3 18:45:00 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Ultrasonic_Ranging_Sensor0.h"

/* Named constants for Chart: '<Root>/Chart' */
#define Ultrasonic_R_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define Ultrasonic_Ranging_IN_echo_down ((uint8_T)1U)
#define Ultrasonic_Ranging_S_IN_echo_up ((uint8_T)2U)
#define Ultrasonic_Ranging_Sen_IN_start ((uint8_T)3U)

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         (*((rtm)->errorStatus))
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    (*((rtm)->errorStatus) = (val))
#endif

#ifndef rtmGetErrorStatusPointer
#define rtmGetErrorStatusPointer(rtm)  (rtm)->errorStatus
#endif

#ifndef rtmSetErrorStatusPointer
#define rtmSetErrorStatusPointer(rtm, val) ((rtm)->errorStatus = (val))
#endif

/* System initialize for referenced model: 'Ultrasonic_Ranging_Sensor0' */
void Ultrasonic_Ranging_Sensor0_Init(DW_Ultrasonic_Ranging_Senso_f_T *localDW)
{
  /* SystemInitialize for Chart: '<Root>/Chart' */
  localDW->temporalCounter_i1 = 0UL;
  localDW->is_active_c1_Ultrasonic_Ranging = 0U;
  localDW->is_c1_Ultrasonic_Ranging_Sensor = Ultrasonic_R_IN_NO_ACTIVE_CHILD;
}

/* Output and update for referenced model: 'Ultrasonic_Ranging_Sensor0' */
void Ultrasonic_Ranging_Sensor0(const real32_T *rtu_tri, const real_T *rtu_dis,
  real_T *rty_echo, DW_Ultrasonic_Ranging_Senso_f_T *localDW)
{
  /* Chart: '<Root>/Chart' */
  if (localDW->temporalCounter_i1 < MAX_uint32_T) {
    localDW->temporalCounter_i1++;
  }

  if (localDW->is_active_c1_Ultrasonic_Ranging == 0U) {
    localDW->is_active_c1_Ultrasonic_Ranging = 1U;
    localDW->is_c1_Ultrasonic_Ranging_Sensor = Ultrasonic_Ranging_Sen_IN_start;
    *rty_echo = 0.0;
  } else {
    switch (localDW->is_c1_Ultrasonic_Ranging_Sensor) {
     case Ultrasonic_Ranging_IN_echo_down:
      *rty_echo = 0.0;
      if (*rtu_tri == 0.0F) {
        localDW->is_c1_Ultrasonic_Ranging_Sensor =
          Ultrasonic_Ranging_Sen_IN_start;
        *rty_echo = 0.0;
      }
      break;

     case Ultrasonic_Ranging_S_IN_echo_up:
      *rty_echo = 1.0;
      if (localDW->temporalCounter_i1 >= (uint32_T)ceil(localDW->echodu * 58.0))
      {
        localDW->is_c1_Ultrasonic_Ranging_Sensor =
          Ultrasonic_Ranging_IN_echo_down;
        *rty_echo = 0.0;
      }
      break;

     default:
      /* case IN_start: */
      *rty_echo = 0.0;
      if (*rtu_tri == 1.0F) {
        localDW->is_c1_Ultrasonic_Ranging_Sensor =
          Ultrasonic_Ranging_S_IN_echo_up;
        localDW->temporalCounter_i1 = 0UL;
        *rty_echo = 1.0;
        localDW->echodu = *rtu_dis;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */
}

/* Model initialize function */
void Ultrasonic_Ranging_S_initialize(const char_T **rt_errorStatus,
  RT_MODEL_Ultrasonic_Ranging_S_T *const Ultrasonic_Ranging_Sensor0_M,
  DW_Ultrasonic_Ranging_Senso_f_T *localDW)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(Ultrasonic_Ranging_Sensor0_M, rt_errorStatus);

  /* states (dwork) */
  (void) memset((void *)localDW, 0,
                sizeof(DW_Ultrasonic_Ranging_Senso_f_T));
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
