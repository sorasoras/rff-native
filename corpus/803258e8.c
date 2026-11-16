#include "tc_rt.h"

u32 fn_803258e8(u32 param_1, u32 param_2)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    r4 = param_2;
    if ((u32)(s8)rd8(0x80571e30u) == 0u) {
        a.r[0] = 0x8056ffa0u;
        (void)tc_call(0x80327e1cu, &a);
        a.r[0] = 0x8056ffa0u;
        a.r[1] = 0x80325accu;
        a.r[2] = 0x8056ff90u;
        f1 = tc_callf(0x802551b8u, &a);
        r4 = tc_lastr4();
        wr8(0x80571e30u, 1u);
    }
    if ((u32)(s8)rd8(0x80571e31u) == 0u) {
        a.r[0] = 0x80570080u;
        (void)tc_call(0x80329eb8u, &a);
        a.r[0] = 0x80570080u;
        a.r[1] = 0x80325b0cu;
        a.r[2] = 0x80570070u;
        f1 = tc_callf(0x802551b8u, &a);
        r4 = tc_lastr4();
        wr8(0x80571e31u, 1u);
    }
    if ((u32)(s8)rd8(0x80571e32u) == 0u) {
        a.r[0] = 0x80570160u;
        (void)tc_call(0x8032c1ecu, &a);
        a.r[0] = 0x80570160u;
        a.r[1] = 0x80325b4cu;
        a.r[2] = 0x80570150u;
        f1 = tc_callf(0x802551b8u, &a);
        r4 = tc_lastr4();
        wr8(0x80571e32u, 1u);
    }
    if ((u32)(s8)rd8(0x80571e33u) == 0u) {
        a.r[0] = 0x80570240u;
        (void)tc_call(0x8032cbccu, &a);
        a.r[0] = 0x80570240u;
        a.r[1] = 0x80325b8cu;
        a.r[2] = 0x80570230u;
        f1 = tc_callf(0x802551b8u, &a);
        r4 = tc_lastr4();
        wr8(0x80571e33u, 1u);
    }
    if ((u32)(s8)rd8(0x80571e34u) == 0u) {
        a.r[0] = 0x80570320u;
        (void)tc_call(0x8032d1acu, &a);
        a.r[0] = 0x80570320u;
        a.r[1] = 0x80325bccu;
        a.r[2] = 0x80570310u;
        f1 = tc_callf(0x802551b8u, &a);
        r4 = tc_lastr4();
        wr8(0x80571e34u, 1u);
    }
    if ((u32)(s8)rd8(0x80571e35u) == 0u) {
        a.r[0] = 0x80570400u;
        (void)tc_call(0x8032d5fcu, &a);
        a.r[0] = 0x80570400u;
        a.r[1] = 0x80325c0cu;
        a.r[2] = 0x805703f0u;
        f1 = tc_callf(0x802551b8u, &a);
        r4 = tc_lastr4();
        wr8(0x80571e35u, 1u);
    }
    if ((u32)(s8)rd8(0x80571e36u) == 0u) {
        a.r[0] = 0x805704e0u;
        (void)tc_call(0x80330bb0u, &a);
        a.r[0] = 0x805704e0u;
        a.r[1] = 0x80325c4cu;
        a.r[2] = 0x805704d0u;
        f1 = tc_callf(0x802551b8u, &a);
        r4 = tc_lastr4();
        wr8(0x80571e36u, 1u);
    }
    if (param_2 > 6u) {
        r3 = 0x8056ffa0u;
    } else {
        r3 = rd32(((param_2 << 2u) & 0xfffffffcu) - 0x7fc62490u);
        sw_ = r3;
        switch (sw_) {
        case 0x80325a98u:
            r3 = 0x80570320u;
            break;
        case 0x80325a90u:
            r3 = 0x80570240u;
            break;
        case 0x80325a88u:
            r3 = 0x80570160u;
            break;
        case 0x80325a78u:
            r3 = 0x8056ffa0u;
            break;
        case 0x80325a80u:
            r3 = 0x80570080u;
            break;
        case 0x80325aa0u:
            r3 = 0x80570400u;
            break;
        case 0x80325aa8u:
            r3 = 0x805704e0u;
            break;
        default:
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
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
    return r3;
}
