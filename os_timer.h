 #pragma once
 
 #include "ets_sys.h"
 
 #ifdef __cplusplus
 extern "C" {
 #endif
 
 typedef ETSTimerFunc os_timer_func_t;
 typedef ETSTimer os_timer_t;
 
 #define os_timer_arm(ptimer, ms, repeat_flag) ets_timer_arm(ptimer, ms, repeat_flag)
 #define os_timer_arm_us(ptimer, us, repeat_flag) ets_timer_arm_us(ptimer, us, repeat_flag)
 #define os_timer_disarm(ptimer) ets_timer_disarm(ptimer)
 #define os_timer_setfn(ptimer, pfunction, parg) ets_timer_setfn(ptimer, pfunction, parg)
 
 void os_timer_arm_ticks(os_timer_t* ptimer, uint32_t ticks, bool repeat_flag);
 
 #ifdef __cplusplus
 }
 #endif
