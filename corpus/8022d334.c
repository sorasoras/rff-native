#include "tc_rt.h"

void fn_8022d334(void)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32(0x80003104u);
    if (r31 < rd32(0x80003100u) && (r31 - 0x1800000u) == 0u) {
        a.r[0] = 0x81800000u;
        a.r[1] = 0x1800000u;
        (void)tc_call(0x8022770cu, &a);
        wr16(0xcc004028u, 2u);
    }
    if (r31 <= 0x1800000u) {
        a.r[0] = 0x8022cdd4u;
        (void)tc_call(0x8022d31cu, &a);
    } else {
        if (r31 <= 0x3000000u) {
            a.r[0] = 0x8022ce54u;
            (void)tc_call(0x8022d31cu, &a);
        }
    }
    r4 = rd32(0x8000311cu);
    r3 = rd32(0x80003120u);
    if (r4 <= 0x4000000u) {
        if (r3 <= 0x93400000u) {
            a.r[0] = 0x8022ced4u;
            (void)tc_call(0x8022d31cu, &a);
            return;
        }
        if (r3 <= 0x93800000u) {
            a.r[0] = 0x8022cfb4u;
            (void)tc_call(0x8022d31cu, &a);
            return;
        }
        a.r[0] = 0x8022d094u;
        (void)tc_call(0x8022d31cu, &a);
    } else {
        if (r4 <= 0x8000000u) {
            if (r3 <= 0x97000000u) {
                a.r[0] = 0x8022d140u;
                (void)tc_call(0x8022d31cu, &a);
            } else {
                a.r[0] = 0x8022d220u;
                (void)tc_call(0x8022d31cu, &a);
            }
        }
    }
    return;
}
