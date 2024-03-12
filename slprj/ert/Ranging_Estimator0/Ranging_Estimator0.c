/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Ranging_Estimator0.c
 *
 * Code generated for Simulink model 'Ranging_Estimator0'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Mon May 31 18:34:55 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Ranging_Estimator0.h"

/* Named constants for Chart: '<Root>/Chart1' */
#define Ranging_Esti_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define Ranging_Estimator0_IN_state_off ((uint8_T)1U)
#define Ranging_Estimator0_IN_state_on1 ((uint8_T)2U)

/* Named constants for Chart: '<Root>/Chart2' */
#define Ranging_Estimator0_IN_count    ((uint8_T)1U)
#define Ranging_Estimator0_IN_exit     ((uint8_T)2U)
#define Ranging_Estimator0_IN_start    ((uint8_T)3U)
#define Ranging_Estimator0_IN_wait     ((uint8_T)4U)

/* Named constants for Chart: '<S3>/Chart' */
#define Ranging_Estimator0_IN_OFF      ((uint8_T)1U)
#define Ranging_Estimator0_IN_START    ((uint8_T)2U)

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

P_Ranging_Estimator0_T Ranging_Estimator0_P = {
  /* Mask Parameter: CompareToConstant_const
   * Referenced by: '<S6>/Constant'
   */
  10.0,

  /* Mask Parameter: CompareToConstant1_const
   * Referenced by: '<S7>/Constant'
   */
  100.0,

  /* Mask Parameter: CompareToConstant2_const
   * Referenced by: '<S8>/Constant'
   */
  100.0,

  /* Mask Parameter: CompareToConstant3_const
   * Referenced by: '<S9>/Constant'
   */
  10.0,

  /* Mask Parameter: CompareToConstant5_const
   * Referenced by: '<S11>/Constant'
   */
  0.0,

  /* Mask Parameter: CompareToConstant4_const
   * Referenced by: '<S10>/Constant'
   */
  0.0,

  /* Expression: 0.0043
   * Referenced by: '<Root>/Gain'
   */
  0.0043,

  /* Expression: 0.001
   * Referenced by: '<S3>/Gain1'
   */
  0.001,

  /* Expression: 0.1
   * Referenced by: '<S3>/Constant'
   */
  0.1,

  /* Expression: 0.001
   * Referenced by: '<S3>/Gain3'
   */
  0.001,

  /* Expression: 1
   * Referenced by: '<Root>/Pulse Generator'
   */
  1.0,

  /* Computed Parameter: PulseGenerator_Period
   * Referenced by: '<Root>/Pulse Generator'
   */
  500000.0,

  /* Computed Parameter: PulseGenerator_Duty
   * Referenced by: '<Root>/Pulse Generator'
   */
  250000.0,

  /* Expression: 0
   * Referenced by: '<Root>/Pulse Generator'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/Pulse Generator1'
   */
  1.0,

  /* Computed Parameter: PulseGenerator1_Period
   * Referenced by: '<Root>/Pulse Generator1'
   */
  1.0E+6,

  /* Computed Parameter: PulseGenerator1_Duty
   * Referenced by: '<Root>/Pulse Generator1'
   */
  500000.0,

  /* Expression: 0
   * Referenced by: '<Root>/Pulse Generator1'
   */
  0.0
};

/* System initialize for referenced model: 'Ranging_Estimator0' */
void Ranging_Estimator0_Init(DW_Ranging_Estimator0_f_T *localDW)
{
  /* Start for DiscretePulseGenerator: '<Root>/Pulse Generator' */
  localDW->clockTickCounter = 0L;

  /* Start for DiscretePulseGenerator: '<Root>/Pulse Generator1' */
  localDW->clockTickCounter_a = 0L;

  /* SystemInitialize for Chart: '<Root>/Chart1' */
  localDW->temporalCounter_i1_f = 0U;
  localDW->is_active_c2_Ranging_Estimator0 = 0U;
  localDW->is_c2_Ranging_Estimator0 = Ranging_Esti_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Chart: '<Root>/Chart2' */
  localDW->is_active_c4_Ranging_Estimator0 = 0U;
  localDW->is_c4_Ranging_Estimator0 = Ranging_Esti_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Chart: '<S3>/Chart' */
  localDW->temporalCounter_i1 = 0UL;
  localDW->is_active_c3_Ranging_Estimator0 = 0U;
  localDW->is_c3_Ranging_Estimator0 = Ranging_Esti_IN_NO_ACTIVE_CHILD;
}

/* Output and update for referenced model: 'Ranging_Estimator0' */
void Ranging_Estimator0(const real_T *rtu_echo, real_T *rty_tri, real_T
  *rty_signal, B_Ranging_Estimator0_c_T *localB, DW_Ranging_Estimator0_f_T
  *localDW)
{
  real_T rtb_Gain;
  real_T rtb_Product2;
  real_T rtb_PulseGenerator1;
  int16_T rtb_LEVEL;

  /* Chart: '<Root>/Chart1' */
  if (localDW->temporalCounter_i1_f < MAX_uint16_T) {
    localDW->temporalCounter_i1_f++;
  }

  if (localDW->is_active_c2_Ranging_Estimator0 == 0U) {
    localDW->is_active_c2_Ranging_Estimator0 = 1U;
    localDW->is_c2_Ranging_Estimator0 = Ranging_Estimator0_IN_state_on1;
    localDW->temporalCounter_i1_f = 0U;
    *rty_tri = 1.0;
  } else if (localDW->is_c2_Ranging_Estimator0 ==
             Ranging_Estimator0_IN_state_off) {
    *rty_tri = 0.0;
    if (localDW->temporalCounter_i1_f >= 60000U) {
      localDW->is_c2_Ranging_Estimator0 = Ranging_Estimator0_IN_state_on1;
      localDW->temporalCounter_i1_f = 0U;
      *rty_tri = 1.0;
    }
  } else {
    /* case IN_state_on1: */
    *rty_tri = 1.0;
    if (localDW->temporalCounter_i1_f >= 10U) {
      localDW->is_c2_Ranging_Estimator0 = Ranging_Estimator0_IN_state_off;
      localDW->temporalCounter_i1_f = 0U;
      *rty_tri = 0.0;
    }
  }

  /* End of Chart: '<Root>/Chart1' */

  /* Chart: '<Root>/Chart2' */
  if (localDW->is_active_c4_Ranging_Estimator0 == 0U) {
    localDW->is_active_c4_Ranging_Estimator0 = 1U;
    localDW->is_c4_Ranging_Estimator0 = Ranging_Estimator0_IN_start;
    localDW->loop = 0.0;
    localDW->counter = 5.0;
  } else {
    switch (localDW->is_c4_Ranging_Estimator0) {
     case Ranging_Estimator0_IN_count:
      if (*rtu_echo == 0.0) {
        localDW->loop++;
        localB->echodis = localDW->counter;
        localDW->is_c4_Ranging_Estimator0 = Ranging_Estimator0_IN_wait;
      } else {
        localDW->counter++;
      }
      break;

     case Ranging_Estimator0_IN_exit:
      break;

     case Ranging_Estimator0_IN_start:
      localDW->is_c4_Ranging_Estimator0 = Ranging_Estimator0_IN_wait;
      break;

     default:
      /* case IN_wait: */
      if (*rtu_echo == 1.0) {
        localDW->is_c4_Ranging_Estimator0 = Ranging_Estimator0_IN_count;
      } else {
        if (localDW->loop > 3.0) {
          localDW->is_c4_Ranging_Estimator0 = Ranging_Estimator0_IN_exit;
        }
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart2' */

  /* Gain: '<Root>/Gain' */
  rtb_Gain = Ranging_Estimator0_P.Gain_Gain * localB->echodis;

  /* Chart: '<S3>/Chart' incorporates:
   *  Constant: '<S3>/Constant'
   *  DataTypeConversion: '<S3>/Data Type Conversion1'
   *  Gain: '<S3>/Gain1'
   *  Gain: '<S3>/Gain3'
   *  Sum: '<S3>/Sum'
   */
  if (localDW->temporalCounter_i1 < MAX_uint32_T) {
    localDW->temporalCounter_i1++;
  }

  if (localDW->is_active_c3_Ranging_Estimator0 == 0U) {
    localDW->is_active_c3_Ranging_Estimator0 = 1U;
    localDW->is_c3_Ranging_Estimator0 = Ranging_Estimator0_IN_START;
    localDW->temporalCounter_i1 = 0UL;
    rtb_LEVEL = 1;
  } else if (localDW->is_c3_Ranging_Estimator0 == Ranging_Estimator0_IN_OFF) {
    rtb_LEVEL = 0;
    if (localDW->temporalCounter_i1 >= (uint32_T)ceil((real32_T)
         (Ranging_Estimator0_P.Constant_Value - Ranging_Estimator0_P.Gain3_Gain *
          rtb_Gain) / 1.0E-6 - 1.0E-14)) {
      localDW->is_c3_Ranging_Estimator0 = Ranging_Estimator0_IN_START;
      localDW->temporalCounter_i1 = 0UL;
      rtb_LEVEL = 1;
    }
  } else {
    /* case IN_START: */
    rtb_LEVEL = 1;
    if (localDW->temporalCounter_i1 >= (uint32_T)ceil
        (Ranging_Estimator0_P.Gain1_Gain * rtb_Gain / 1.0E-6 - 1.0E-14)) {
      localDW->is_c3_Ranging_Estimator0 = Ranging_Estimator0_IN_OFF;
      localDW->temporalCounter_i1 = 0UL;
      rtb_LEVEL = 0;
    }
  }

  /* End of Chart: '<S3>/Chart' */

  /* DiscretePulseGenerator: '<Root>/Pulse Generator' */
  rtb_Product2 = (localDW->clockTickCounter <
                  Ranging_Estimator0_P.PulseGenerator_Duty) &&
    (localDW->clockTickCounter >= 0L) ? Ranging_Estimator0_P.PulseGenerator_Amp :
    0.0;
  if (localDW->clockTickCounter >= Ranging_Estimator0_P.PulseGenerator_Period -
      1.0) {
    localDW->clockTickCounter = 0L;
  } else {
    localDW->clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<Root>/Pulse Generator' */

  /* DiscretePulseGenerator: '<Root>/Pulse Generator1' */
  rtb_PulseGenerator1 = (localDW->clockTickCounter_a <
    Ranging_Estimator0_P.PulseGenerator1_Duty) && (localDW->clockTickCounter_a >=
    0L) ? Ranging_Estimator0_P.PulseGenerator1_Amp : 0.0;
  if (localDW->clockTickCounter_a >= Ranging_Estimator0_P.PulseGenerator1_Period
      - 1.0) {
    localDW->clockTickCounter_a = 0L;
  } else {
    localDW->clockTickCounter_a++;
  }

  /* End of DiscretePulseGenerator: '<Root>/Pulse Generator1' */

  /* Sum: '<Root>/Add1' incorporates:
   *  Constant: '<S10>/Constant'
   *  Constant: '<S11>/Constant'
   *  Constant: '<S6>/Constant'
   *  Constant: '<S7>/Constant'
   *  Constant: '<S8>/Constant'
   *  Constant: '<S9>/Constant'
   *  Logic: '<S4>/Logical Operator'
   *  Logic: '<S4>/Logical Operator1'
   *  Logic: '<S4>/Logical Operator2'
   *  Product: '<Root>/Product'
   *  Product: '<Root>/Product1'
   *  Product: '<Root>/Product2'
   *  RelationalOperator: '<S10>/Compare'
   *  RelationalOperator: '<S11>/Compare'
   *  RelationalOperator: '<S6>/Compare'
   *  RelationalOperator: '<S7>/Compare'
   *  RelationalOperator: '<S8>/Compare'
   *  RelationalOperator: '<S9>/Compare'
   *  Sum: '<Root>/Add'
   */
  *rty_signal = ((real_T)((rtb_Gain >=
    Ranging_Estimator0_P.CompareToConstant2_const) || ((rtb_Gain <
    Ranging_Estimator0_P.CompareToConstant3_const) && (rtb_Gain >
    Ranging_Estimator0_P.CompareToConstant5_const))) * rtb_Product2 + (real_T)
                 ((rtb_Gain >= Ranging_Estimator0_P.CompareToConstant_const) &&
                  (rtb_Gain < Ranging_Estimator0_P.CompareToConstant1_const)) *
                 (real_T)rtb_LEVEL) + (real_T)(rtb_Gain ==
    Ranging_Estimator0_P.CompareToConstant4_const) * rtb_PulseGenerator1;
}

/* Model initialize function */
void Ranging_Estimator0_initialize(const char_T **rt_errorStatus,
  RT_MODEL_Ranging_Estimator0_T *const Ranging_Estimator0_M,
  B_Ranging_Estimator0_c_T *localB, DW_Ranging_Estimator0_f_T *localDW)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(Ranging_Estimator0_M, rt_errorStatus);

  /* block I/O */
  (void) memset(((void *) localB), 0,
                sizeof(B_Ranging_Estimator0_c_T));

  /* states (dwork) */
  (void) memset((void *)localDW, 0,
                sizeof(DW_Ranging_Estimator0_f_T));
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
