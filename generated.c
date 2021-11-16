static uint16_t for_test_continue_20in_20for_20loop(void) {
 #line 2
 int32_t t0[5];
 int32_t * * const t1 = (int32_t * *)&t0;
 int32_t * const t2 = t1[0];
 *t2 = 1;
 int32_t * const t3 = t1[1];
 *t3 = 2;
 int32_t * const t4 = t1[2];
 *t4 = 3;
 int32_t * const t5 = t1[3];
 *t5 = 4;
 int32_t * const t6 = t1[4];
 *t6 = 5;
 #line 3
 int32_t t7;
 t7 = 0;
 #line 4
 int32_t const t8[5] = t0;
 uintptr_t t9;
 t9 = 0;
 {
  while (true) {
   {
    uintptr_t const t10 = t9;
    uint64_t const t11 = (uint64_t)t10;
    bool const t12 = t11 < 5;
    if (t12) {
     int32_t const t13 = t8[t10];
     #line 5
     int32_t const t14 = t7;
     int32_t const t15 = t14 + t13;
     t7 = t15;
     #line 6
     {
      bool const t16 = t13 < 3;
      if (t16) {
       #line 7
       goto zig_block_1;
      } else {
       goto zig_block_2;
      }
     }
     zig_block_2:;
     #line 9
     goto zig_block_0;
    } else {
     goto zig_block_0;
    }
   }
   zig_block_1:;
   uintptr_t const t17 = t9;
   uintptr_t const t18 = t17 + 1;
   t9 = t18;
  }
 }
 zig_block_0:;
 #line 11
 {
  int32_t const t19 = t7;
  bool const t20 = t19 != 6;
  if (t20) {
   builtin_default_panic((zig_L_u8){(uint8_t const *)&for_test_continue_20in_20for_20loop__anon_3, 24}, NULL);
  } else {
   goto zig_block_3;
  }
 }
 zig_block_3:;
 return 0;
}
