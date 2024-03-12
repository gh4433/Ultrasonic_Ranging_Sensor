/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Ranging_Estimator0.h
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

#ifndef RTW_HEADER_Ranging_Estimator0_h_
#define RTW_HEADER_Ranging_Estimator0_h_
#include "rtwtypes.h"
#include <math.h>
#include <string.h>
#ifndef Ranging_Estimator0_COMMON_INCLUDES_
#define Ranging_Estimator0_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* Ranging_Estimator0_COMMON_INCLUDES_ */

#include "MW_target_hardware_resources.h"

/* Model Code Variants */

/* Forward declaration for rtModel */
typedef struct tag_RTM_Ranging_Estimator0_T RT_MODEL_Ranging_Estimator0_T;

/* Block signals for model 'Ranging_Estimator0' */
typedef struct {
  real_T echodis;                      /* '<Root>/Chart2' */
} B_Ranging_Estimator0_c_T;

/* Block states (default storage) for model 'Ranging_Estimator0' */
typedef struct {
  real_T counter;                      /* '<Root>/Chart2' */
  real_T loop;                         /* '<Root>/Chart2' */
  int32_T clockTickCounter;            /* '<Root>/Pulse Generator' */
  int32_T clockTickCounter_a;          /* '<Root>/Pulse Generator1' */
  uint32_T temporalCounter_i1;         /* '<S3>/Chart' */
  uint16_T temporalCounter_i1_f;       /* '<Root>/Chart1' */
  uint8_T is_active_c3_Ranging_Estimator0;/* '<S3>/Chart' */
  uint8_T is_c3_Ranging_Estimator0;    /* '<S3>/Chart' */
  uint8_T is_active_c4_Ranging_Estimator0;/* '<Root>/Chart2' */
  uint8_T is_c4_Ranging_Estimator0;    /* '<Root>/Chart2' */
  uint8_T is_active_c2_Ranging_Estimator0;/* '<Root>/Chart1' */
  uint8_T is_c2_Ranging_Estimator0;    /* '<Root>/Chart1' */
} DW_Ranging_Estimator0_f_T;

/* Parameters (default storage) */
struct P_Ranging_Estimator0_T_ {
  real_T CompareToConstant_const;     /* Mask Parameter: CompareToConstant_const
                                       * Referenced by: '<S6>/Constant'
                                       */
  real_T CompareToConstant1_const;   /* Mask Parameter: CompareToConstant1_const
                                      * Referenced by: '<S7>/Constant'
                                      */
  real_T CompareToConstant2_const;   /* Mask Parameter: CompareToConstant2_const
                                      * Referenced by: '<S8>/Constant'
                                      */
  real_T CompareToConstant3_const;   /* Mask Parameter: CompareToConstant3_const
                                      * Referenced by: '<S9>/Constant'
                                      */
  real_T CompareToConstant5_const;   /* Mask Parameter: CompareToConstant5_const
                                      * Referenced by: '<S11>/Constant'
                                      */
  real_T CompareToConstant4_const;   /* Mask Parameter: CompareToConstant4_const
                                      * Referenced by: '<S10>/Constant'
                                      */
  real_T Gain_Gain;                    /* Expression: 0.0043
                                        * Referenced by: '<Root>/Gain'
                                        */
  real_T Gain1_Gain;                   /* Expression: 0.001
                                        * Referenced by: '<S3>/Gain1'
                                        */
  real_T Constant_Value;               /* Expression: 0.1
                                        * Referenced by: '<S3>/Constant'
                                        */
  real_T Gain3_Gain;                   /* Expression: 0.001
                                        * Referenced by: '<S3>/Gain3'
                                        */
  real_T PulseGenerator_Amp;           /* Expression: 1
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  real_T PulseGenerator_Period;     /* Computed Parameter: PulseGenerator_Period
                                     * Referenced by: '<Root>/Pulse Generator'
                                     */
  real_T PulseGenerator_Duty;         /* Computed Parameter: PulseGenerator_Duty
                                       * Referenced by: '<Root>/Pulse Generator'
                                       */
  real_T PulseGenerator_PhaseDelay;    /* Expression: 0
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  real_T PulseGenerator1_Amp;          /* Expression: 1
                                        * Referenced by: '<Root>/Pulse Generator1'
                                        */
  real_T PulseGenerator1_Period;   /* Computed Parameter: PulseGenerator1_Period
                                    * Referenced by: '<Root>/Pulse Generator1'
                                    */
  real_T PulseGenerator1_Duty;       /* Computed Parameter: PulseGenerator1_Duty
                                      * Referenced by: '<Root>/Pulse Generator1'
                                      */
  real_T PulseGenerator1_PhaseDelay;   /* Expression: 0
                                        * Referenced by: '<Root>/Pulse Generator1'
                                        */
};

/* Parameters (default storage) */
typedef struct P_Ranging_Estimator0_T_ P_Ranging_Estimator0_T;

/* Real-time Model Data Structure */
struct tag_RTM_Ranging_Estimator0_T {
  const char_T **errorStatus;
};

typedef struct {
  B_Ranging_Estimator0_c_T rtb;
  DW_Ranging_Estimator0_f_T rtdw;
  RT_MODEL_Ranging_Estimator0_T rtm;
} MdlrefDW_Ranging_Estimator0_T;

extern P_Ranging_Estimator0_T Ranging_Estimator0_P;

/* Model reference registration function */
extern void Ranging_Estimator0_initialize(const char_T **rt_errorStatus,
  RT_MODEL_Ranging_Estimator0_T *const Ranging_Estimator0_M,
  B_Ranging_Estimator0_c_T *localB, DW_Ranging_Estimator0_f_T *localDW);
extern void Ranging_Estimator0_Init(DW_Ranging_Estimator0_f_T *localDW);
extern void Ranging_Estimator0(const real_T *rtu_echo, real_T *rty_tri, real_T
  *rty_signal, B_Ranging_Estimator0_c_T *localB, DW_Ranging_Estimator0_f_T
  *localDW);

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S4>/Scope6' : Unused code path elimination
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
 * '<Root>' : 'Ranging_Estimator0'
 * '<S1>'   : 'Ranging_Estimator0/Chart1'
 * '<S2>'   : 'Ranging_Estimator0/Chart2'
 * '<S3>'   : 'Ranging_Estimator0/calmodeone'
 * '<S4>'   : 'Ranging_Estimator0/mode_choose'
 * '<S5>'   : 'Ranging_Estimator0/calmodeone/Chart'
 * '<S6>'   : 'Ranging_Estimator0/mode_choose/Compare To Constant'
 * '<S7>'   : 'Ranging_Estimator0/mode_choose/Compare To Constant1'
 * '<S8>'   : 'Ranging_Estimator0/mode_choose/Compare To Constant2'
 * '<S9>'   : 'Ranging_Estimator0/mode_choose/Compare To Constant3'
 * '<S10>'  : 'Ranging_Estimator0/mode_choose/Compare To Constant4'
 * '<S11>'  : 'Ranging_Estimator0/mode_choose/Compare To Constant5'
 */
#endif                                 /* RTW_HEADER_Ranging_Estimator0_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
