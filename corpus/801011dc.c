#include "tc_rt.h"

u32 fn_801011dc(s32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r30 = 0, r31 = 0, sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    r31 = (u32)param_1 + 0xbcu;
    a.r[0] = r31;
    r3 = tc_call(0x800ff808u, &a);
    r30 = r3;
    a.r[0] = r31;
    r3 = tc_call(0x800ff920u, &a);
    f1 = tc_lastf();
    if (r30 != 0xffffu) {
        if (r3 > 0xcu) {
            r3 = 0u;
        } else {
            r4 = rd32(((r3 << 2u) & 0xfffffffcu) - 0x7fc9f888u);
            sw_ = r4;
            switch (sw_) {
            case 0x80101244u:
                a.r[0] = r30;
                a.r[1] = (u32)param_1;
                r3 = tc_call(0x8010376cu, &a);
                break;
            case 0x80101254u:
                a.r[0] = r30;
                a.r[1] = (u32)param_1;
                r3 = tc_call(0x80101450u, &a);
                break;
            case 0x80101264u:
                a.r[0] = r30;
                a.r[1] = (u32)param_1;
                r3 = tc_call(0x801ed3c0u, &a);
                break;
            case 0x80101274u:
                a.r[0] = r30;
                a.r[1] = (u32)param_1;
                r3 = tc_call(0x801f0958u, &a);
                break;
            case 0x80101284u:
                a.r[0] = r30;
                a.r[1] = (u32)param_1;
                r3 = tc_call(0x8020a8a0u, &a);
                break;
            case 0x80101294u:
                a.r[0] = r30;
                a.r[1] = (u32)param_1;
                r3 = tc_call(0x8020f418u, &a);
                break;
            case 0x801012a4u:
                a.r[0] = r30;
                a.r[1] = (u32)param_1;
                r3 = tc_call(0x80196fe8u, &a);
                break;
            case 0x801012b4u:
                a.r[0] = r30;
                a.r[1] = (u32)param_1;
                r3 = tc_call(0x801eb588u, &a);
                break;
            case 0x801012c4u:
                a.r[0] = r30;
                a.r[1] = (u32)param_1;
                r3 = tc_call(0x801f06b4u, &a);
                break;
            case 0x801012d4u:
                a.r[0] = r30;
                a.r[1] = (u32)param_1;
                r3 = tc_call(0x801f9ab8u, &a);
                break;
            case 0x801012e4u:
                a.r[0] = r30;
                a.r[1] = (u32)param_1;
                r3 = tc_call(0x802091a4u, &a);
                break;
            case 0x801012f4u:
                a.r[0] = r30;
                a.r[1] = (u32)param_1;
                r3 = tc_call(0x8020ee14u, &a);
                break;
            case 0x80101304u:
                a.r[0] = r30;
                a.r[1] = (u32)param_1;
                r3 = tc_call(0x8021d6f0u, &a);
                break;
            default:
                a.r[0] = r3;
                a.r[1] = r4;
                a.f[0] = f1;
                r3 = tc_call(sw_, &a);
                r0 = 0u;
                r4 = tc_lastr4();
                r5 = 0u;
                r6 = 0u;
                r7 = 0u;
                r8 = 0u;
                r9 = 0u;
                r10 = 0u;
                r11 = 0u;
                r12 = 0u;
                f0 = 0.0;
                f2 = 0.0;
                f3 = 0.0;
                f4 = 0.0;
                f5 = 0.0;
                f6 = 0.0;
                f7 = 0.0;
                f8 = 0.0;
                f9 = 0.0;
                f10 = 0.0;
                f11 = 0.0;
                f12 = 0.0;
                f13 = 0.0;
                ctr = 0u;
                return r3;
            }
        }
    } else {
        r3 = 0u;
    }
    return r3;
}
