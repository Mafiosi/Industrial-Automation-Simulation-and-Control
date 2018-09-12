/*******************************************/
/*     FILE GENERATED BY iec2c             */
/* Editing this file is not recommended... */
/*******************************************/

#include "iec_std_lib.h"

// RESOURCE RESOURCE1

extern unsigned long long common_ticktime__;

#include "accessor.h"
#include "POUS.h"

#include "config.h"
__DECLARE_GLOBAL_LOCATION(BOOL,__IX0_1_0_1)
__DECLARE_GLOBAL_LOCATED(BOOL,RESOURCE1,OCUP1)
__DECLARE_GLOBAL_LOCATION(BOOL,__IX0_1_0_2)
__DECLARE_GLOBAL_LOCATED(BOOL,RESOURCE1,OCUP2)
__DECLARE_GLOBAL_LOCATION(BOOL,__IX0_1_0_3)
__DECLARE_GLOBAL_LOCATED(BOOL,RESOURCE1,OCUP3)
__DECLARE_GLOBAL_LOCATION(BOOL,__IX0_1_0_4)
__DECLARE_GLOBAL_LOCATED(BOOL,RESOURCE1,OCUP4)
__DECLARE_GLOBAL_LOCATION(BOOL,__IX0_1_0_5)
__DECLARE_GLOBAL_LOCATED(BOOL,RESOURCE1,OCUP5)
__DECLARE_GLOBAL_LOCATION(BOOL,__IX0_1_0_6)
__DECLARE_GLOBAL_LOCATED(BOOL,RESOURCE1,OCUP6)
__DECLARE_GLOBAL_LOCATION(BOOL,__QX0_2_0_0)
__DECLARE_GLOBAL_LOCATED(BOOL,RESOURCE1,SOCUP1)
__DECLARE_GLOBAL_LOCATION(BOOL,__QX0_2_0_1)
__DECLARE_GLOBAL_LOCATED(BOOL,RESOURCE1,SOCUP2)
__DECLARE_GLOBAL_LOCATION(BOOL,__QX0_2_0_2)
__DECLARE_GLOBAL_LOCATED(BOOL,RESOURCE1,SOCUP3)
__DECLARE_GLOBAL_LOCATION(BOOL,__QX0_2_0_3)
__DECLARE_GLOBAL_LOCATED(BOOL,RESOURCE1,SOCUP4)
__DECLARE_GLOBAL_LOCATION(BOOL,__QX0_2_0_4)
__DECLARE_GLOBAL_LOCATED(BOOL,RESOURCE1,SOCUP5)
__DECLARE_GLOBAL_LOCATION(BOOL,__QX0_2_0_5)
__DECLARE_GLOBAL_LOCATED(BOOL,RESOURCE1,SOCUP6)
__DECLARE_GLOBAL(BOOL,RESOURCE1,AUX1)
__DECLARE_GLOBAL(BOOL,RESOURCE1,AUX2)
__DECLARE_GLOBAL(BOOL,RESOURCE1,AUX3)
__DECLARE_GLOBAL(BOOL,RESOURCE1,AUX4)
__DECLARE_GLOBAL(BOOL,RESOURCE1,AUX5)
__DECLARE_GLOBAL(BOOL,RESOURCE1,AUX6)
__DECLARE_GLOBAL(BOOL,RESOURCE1,AUXR)
__DECLARE_GLOBAL_LOCATION(BOOL,__IX0_1_0_7)
__DECLARE_GLOBAL_LOCATED(BOOL,RESOURCE1,OCUPR)
__DECLARE_GLOBAL_LOCATION(BOOL,__QX0_2_0_16)
__DECLARE_GLOBAL_LOCATED(BOOL,RESOURCE1,SOCUPR)
__DECLARE_GLOBAL(BOOL,RESOURCE1,AUXP1)
__DECLARE_GLOBAL(BOOL,RESOURCE1,AUXP2)
__DECLARE_GLOBAL(BOOL,RESOURCE1,AUXP3)
__DECLARE_GLOBAL_LOCATION(BOOL,__QX0_2_0_18)
__DECLARE_GLOBAL_LOCATED(BOOL,RESOURCE1,SOCUPP1)
__DECLARE_GLOBAL_LOCATION(BOOL,__QX0_2_0_19)
__DECLARE_GLOBAL_LOCATED(BOOL,RESOURCE1,SOCUPP2)
__DECLARE_GLOBAL_LOCATION(BOOL,__QX0_2_0_20)
__DECLARE_GLOBAL_LOCATED(BOOL,RESOURCE1,SOCUPP3)
__DECLARE_GLOBAL_LOCATION(BOOL,__IX0_1_0_9)
__DECLARE_GLOBAL_LOCATED(BOOL,RESOURCE1,OCUPP1)
__DECLARE_GLOBAL_LOCATION(BOOL,__IX0_1_0_10)
__DECLARE_GLOBAL_LOCATED(BOOL,RESOURCE1,OCUPP2)
__DECLARE_GLOBAL_LOCATION(BOOL,__IX0_1_0_11)
__DECLARE_GLOBAL_LOCATED(BOOL,RESOURCE1,OCUPP3)

#include "POUS.c"

BOOL X;
BOOL Y;
PROGRAM1 RESOURCE1__PROG1;
#define PROG1 RESOURCE1__PROG1
CONTROL RESOURCE1__CL;
#define CL RESOURCE1__CL

void RESOURCE1_init__(void) {
  BOOL retain;
  retain = 0;
  __INIT_GLOBAL_LOCATED(RESOURCE1,OCUP1,__IX0_1_0_1,retain)
  __INIT_GLOBAL(BOOL,OCUP1,__INITIAL_VALUE(__BOOL_LITERAL(FALSE)),retain)
  __INIT_GLOBAL_LOCATED(RESOURCE1,OCUP2,__IX0_1_0_2,retain)
  __INIT_GLOBAL(BOOL,OCUP2,__INITIAL_VALUE(__BOOL_LITERAL(FALSE)),retain)
  __INIT_GLOBAL_LOCATED(RESOURCE1,OCUP3,__IX0_1_0_3,retain)
  __INIT_GLOBAL(BOOL,OCUP3,__INITIAL_VALUE(__BOOL_LITERAL(FALSE)),retain)
  __INIT_GLOBAL_LOCATED(RESOURCE1,OCUP4,__IX0_1_0_4,retain)
  __INIT_GLOBAL(BOOL,OCUP4,__INITIAL_VALUE(__BOOL_LITERAL(FALSE)),retain)
  __INIT_GLOBAL_LOCATED(RESOURCE1,OCUP5,__IX0_1_0_5,retain)
  __INIT_GLOBAL(BOOL,OCUP5,__INITIAL_VALUE(__BOOL_LITERAL(FALSE)),retain)
  __INIT_GLOBAL_LOCATED(RESOURCE1,OCUP6,__IX0_1_0_6,retain)
  __INIT_GLOBAL(BOOL,OCUP6,__INITIAL_VALUE(__BOOL_LITERAL(FALSE)),retain)
  __INIT_GLOBAL_LOCATED(RESOURCE1,SOCUP1,__QX0_2_0_0,retain)
  __INIT_GLOBAL(BOOL,SOCUP1,__INITIAL_VALUE(__BOOL_LITERAL(FALSE)),retain)
  __INIT_GLOBAL_LOCATED(RESOURCE1,SOCUP2,__QX0_2_0_1,retain)
  __INIT_GLOBAL(BOOL,SOCUP2,__INITIAL_VALUE(__BOOL_LITERAL(FALSE)),retain)
  __INIT_GLOBAL_LOCATED(RESOURCE1,SOCUP3,__QX0_2_0_2,retain)
  __INIT_GLOBAL(BOOL,SOCUP3,__INITIAL_VALUE(__BOOL_LITERAL(FALSE)),retain)
  __INIT_GLOBAL_LOCATED(RESOURCE1,SOCUP4,__QX0_2_0_3,retain)
  __INIT_GLOBAL(BOOL,SOCUP4,__INITIAL_VALUE(__BOOL_LITERAL(FALSE)),retain)
  __INIT_GLOBAL_LOCATED(RESOURCE1,SOCUP5,__QX0_2_0_4,retain)
  __INIT_GLOBAL(BOOL,SOCUP5,__INITIAL_VALUE(__BOOL_LITERAL(FALSE)),retain)
  __INIT_GLOBAL_LOCATED(RESOURCE1,SOCUP6,__QX0_2_0_5,retain)
  __INIT_GLOBAL(BOOL,SOCUP6,__INITIAL_VALUE(__BOOL_LITERAL(FALSE)),retain)
  __INIT_GLOBAL(BOOL,AUX1,__INITIAL_VALUE(__BOOL_LITERAL(FALSE)),retain)
  __INIT_GLOBAL(BOOL,AUX2,__INITIAL_VALUE(__BOOL_LITERAL(FALSE)),retain)
  __INIT_GLOBAL(BOOL,AUX3,__INITIAL_VALUE(__BOOL_LITERAL(FALSE)),retain)
  __INIT_GLOBAL(BOOL,AUX4,__INITIAL_VALUE(__BOOL_LITERAL(FALSE)),retain)
  __INIT_GLOBAL(BOOL,AUX5,__INITIAL_VALUE(__BOOL_LITERAL(FALSE)),retain)
  __INIT_GLOBAL(BOOL,AUX6,__INITIAL_VALUE(__BOOL_LITERAL(FALSE)),retain)
  __INIT_GLOBAL(BOOL,AUXR,__INITIAL_VALUE(__BOOL_LITERAL(FALSE)),retain)
  __INIT_GLOBAL_LOCATED(RESOURCE1,OCUPR,__IX0_1_0_7,retain)
  __INIT_GLOBAL(BOOL,OCUPR,__INITIAL_VALUE(__BOOL_LITERAL(FALSE)),retain)
  __INIT_GLOBAL_LOCATED(RESOURCE1,SOCUPR,__QX0_2_0_16,retain)
  __INIT_GLOBAL(BOOL,SOCUPR,__INITIAL_VALUE(__BOOL_LITERAL(FALSE)),retain)
  __INIT_GLOBAL(BOOL,AUXP1,__INITIAL_VALUE(__BOOL_LITERAL(FALSE)),retain)
  __INIT_GLOBAL(BOOL,AUXP2,__INITIAL_VALUE(__BOOL_LITERAL(FALSE)),retain)
  __INIT_GLOBAL(BOOL,AUXP3,__INITIAL_VALUE(__BOOL_LITERAL(FALSE)),retain)
  __INIT_GLOBAL_LOCATED(RESOURCE1,SOCUPP1,__QX0_2_0_18,retain)
  __INIT_GLOBAL(BOOL,SOCUPP1,__INITIAL_VALUE(__BOOL_LITERAL(FALSE)),retain)
  __INIT_GLOBAL_LOCATED(RESOURCE1,SOCUPP2,__QX0_2_0_19,retain)
  __INIT_GLOBAL(BOOL,SOCUPP2,__INITIAL_VALUE(__BOOL_LITERAL(FALSE)),retain)
  __INIT_GLOBAL_LOCATED(RESOURCE1,SOCUPP3,__QX0_2_0_20,retain)
  __INIT_GLOBAL(BOOL,SOCUPP3,__INITIAL_VALUE(__BOOL_LITERAL(FALSE)),retain)
  __INIT_GLOBAL_LOCATED(RESOURCE1,OCUPP1,__IX0_1_0_9,retain)
  __INIT_GLOBAL(BOOL,OCUPP1,__INITIAL_VALUE(__BOOL_LITERAL(FALSE)),retain)
  __INIT_GLOBAL_LOCATED(RESOURCE1,OCUPP2,__IX0_1_0_10,retain)
  __INIT_GLOBAL(BOOL,OCUPP2,__INITIAL_VALUE(__BOOL_LITERAL(FALSE)),retain)
  __INIT_GLOBAL_LOCATED(RESOURCE1,OCUPP3,__IX0_1_0_11,retain)
  __INIT_GLOBAL(BOOL,OCUPP3,__INITIAL_VALUE(__BOOL_LITERAL(FALSE)),retain)
  X = __BOOL_LITERAL(FALSE);
  Y = __BOOL_LITERAL(FALSE);
  PROGRAM1_init__(&PROG1,retain);
  CONTROL_init__(&CL,retain);
}

void RESOURCE1_run__(unsigned long tick) {
  X = !(tick % 1);
  Y = !(tick % 1);
  if (X) {
    PROGRAM1_body__(&PROG1);
  }
  if (Y) {
    CONTROL_body__(&CL);
  }
}
