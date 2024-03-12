/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Ultrasonic_Ranging_Sensor0.h
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

#ifndef RTW_HEADER_Ultrasonic_Ranging_Sensor0_h_
#define RTW_HEADER_Ultrasonic_Ranging_Sensor0_h_
#include <math.h>
#include <string.h>
#ifndef Ultrasonic_Ranging_Sensor0_COMMON_INCLUDES_
#define Ultrasonic_Ranging_Sensor0_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                         /* Ultrasonic_Ranging_Sensor0_COMMON_INCLUDES_ */

#include "MW_target_hardware_resources.h"

/* Model Code Variants */

/* Forward declaration for rtModel */
typedef struct tag_RTM_Ultrasonic_Ranging_Se_T RT_MODEL_Ultrasonic_Ranging_S_T;

/* Block states (default storage) for model 'Ultrasonic_Ranging_Sensor0' */
typedef struct {
  real_T echodu;                       /* '<Root>/Chart' */
  uint32_T temporalCounter_i1;         /* '<Root>/Chart' */
  uint8_T is_active_c1_Ultrasonic_Ranging;/* '<Root>/Chart' */
  uint8_T is_c1_Ultrasonic_Ranging_Sensor;/* '<Root>/Chart' */
} DW_Ultrasonic_Ranging_Senso_f_T;

/* Real-time Model Data Structure */
struct tag_RTM_Ultrasonic_Ranging_Se_T {
  const char_T **errorStatus;
};

typedef struct {
  DW_Ultrasonic_Ranging_Senso_f_T rtdw;
  RT_MODEL_Ultrasonic_Ranging_S_T rtm;
} MdlrefDW_Ultrasonic_Ranging_S_T;

/* Model reference registration function */
extern void Ultrasonic_Ranging_S_initialize(const char_T **rt_errorStatus,
  RT_MODEL_Ultrasonic_Ranging_S_T *const Ultrasonic_Ranging_Sensor0_M,
  DW_Ultrasonic_Ranging_Senso_f_T *localDW);
extern void Ultrasonic_Ranging_Sensor0_Init(DW_Ultrasonic_Ranging_Senso_f_T
  *localDW);
extern void Ultrasonic_Ranging_Sensor0(const real32_T *rtu_tri, const real_T
  *rtu_dis, real_T *rty_echo, DW_Ultrasonic_Ranging_Senso_f_T *localDW);

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Data Type Conversion' : Eliminate redundant data type conversion
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Ultrasonic_Ranging_Sensor0'
 * '<S1>'   : 'Ultrasonic_Ranging_Sensor0/Chart'
 */
#endif                            /* RTW_HEADER_Ultrasonic_Ranging_Sensor0_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
