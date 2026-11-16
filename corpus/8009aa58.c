#include "tc_rt.h"

u32 fn_8009aa58(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 c0lt = 0, r3 = 0;
    TcArgs a = {0};
    (void)param_2;
    (void)param_3;
    c0lt = (s32)param_1 < 3;
    if (param_1 == 3u) {
        r3 = tc_call(0x800a7460u, &a);
        a.r[0] = 3u;
        a.r[1] = r3;
        a.r[2] = param_4;
        (void)tc_call(0x800a4914u, &a);
    } else {
        if (!c0lt) {
            if ((s32)param_1 < 5) {
                r3 = tc_call(0x800a7460u, &a);
                a.r[0] = 4u;
                a.r[1] = r3;
                a.r[2] = param_4;
                (void)tc_call(0x800a4914u, &a);
                return 1u;
            }
        } else {
            c0lt = (s32)param_1 < 1;
            if (param_1 == 1u) {
                r3 = tc_call(0x800a7460u, &a);
                a.r[0] = 1u;
                a.r[1] = r3;
                a.r[2] = param_4;
                (void)tc_call(0x800a4914u, &a);
                return 1u;
            }
            if (!c0lt) {
                r3 = tc_call(0x800a7460u, &a);
                a.r[0] = 2u;
                a.r[1] = r3;
                a.r[2] = param_4;
                (void)tc_call(0x800a4914u, &a);
                return 1u;
            }
        }
        if (param_1 <= 0x8cu || param_1 >= 0x219u) {
            a.r[0] = param_1;
            a.r[1] = param_4;
            a.r[2] = 0xffffffffu;
            (void)tc_call(0x800a4914u, &a);
        } else {
            a.r[0] = param_1;
            a.r[1] = param_4;
            (void)tc_call(0x8009a788u, &a);
        }
    }
    return 1u;
}
