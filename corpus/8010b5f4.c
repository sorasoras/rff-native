#include "tc_rt.h"

s32 fn_8010b5f4(u32 param_1, s32 param_2)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    if (param_2 < 0) {
        return param_2;
    }
    r0 = ppc_mulhw(274877907, param_2);
    r3 = (u32)((s32)r0 >> 6);
    r0 = (u32)((s32)r0 >> 6);
    r0 = r0 + ((r0 >> 0x1fu) & 1u);
    r5 = (r3 + ((r3 >> 0x1fu) & 1u)) * 0x3e8u;
    r3 = (u32)param_2 - r5;
    if (r0 > 0x20u) {
        return -1;
    }
    r0 = (r0 << 2u) & 0xfffffffcu;
    r4 = rd32(r0 - 0x7fc9e99cu);
    sw_ = r4;
    switch (sw_) {
    case 0x8010b650u:
        r3 = r3 + 0x56u;
        return (s32)r3;
    case 0x8010b658u:
        r3 = r3 + 0x11au;
        return (s32)r3;
    case 0x8010b660u:
        r3 = r3 + 0x1edu;
        return (s32)r3;
    case 0x8010b668u:
        r3 = r3 + 0x2b8u;
        return (s32)r3;
    case 0x8010b670u:
        r3 = r3 + 0x384u;
        return (s32)r3;
    case 0x8010b678u:
        r3 = r3 + 0x449u;
        return (s32)r3;
    case 0x8010b680u:
        r3 = r3 + 0x508u;
        return (s32)r3;
    case 0x8010b688u:
        r3 = r3 + 0x5cdu;
        return (s32)r3;
    case 0x8010b690u:
        r3 = r3 + 0x687u;
        return (s32)r3;
    case 0x8010b698u:
        r3 = r3 + 0x74fu;
        return (s32)r3;
    case 0x8010b6a0u:
        r3 = r3 + 0x82bu;
        return (s32)r3;
    case 0x8010b6a8u:
        r3 = r3 + 0x8e6u;
        return (s32)r3;
    case 0x8010b6b0u:
        r3 = r3 + 0x98fu;
        return (s32)r3;
    case 0x8010b6b8u:
        r3 = r3 + 0xa41u;
        return (s32)r3;
    case 0x8010b6c0u:
        r3 = r3 + 0xb4eu;
        return (s32)r3;
    case 0x8010b6c8u:
        r3 = r3 + 0xb67u;
        return (s32)r3;
    case 0x8010b6d0u:
        r3 = r3 + 0xb92u;
        return (s32)r3;
    case 0x8010b6d8u:
        r3 = r3 + 0xba7u;
        return (s32)r3;
    case 0x8010b6e0u:
        r3 = r3 + 0xbbeu;
        return (s32)r3;
    case 0x8010b6e8u:
        r3 = r3 + 0xbefu;
        return (s32)r3;
    case 0x8010b6f0u:
        r3 = r3 + 0xc0eu;
        return (s32)r3;
    case 0x8010b6f8u:
        r3 = r3 + 0xc21u;
        return (s32)r3;
    case 0x8010b700u:
        r3 = r3 + 0xc3du;
        return (s32)r3;
    case 0x8010b708u:
        r3 = r3 + 0xc51u;
        return (s32)r3;
    case 0x8010b710u:
        r3 = r3 + 0xc64u;
        return (s32)r3;
    case 0x8010b718u:
        r3 = r3 + 0xc76u;
        return (s32)r3;
    case 0x8010b720u:
        r3 = r3 + 0xc94u;
        return (s32)r3;
    case 0x8010b728u:
        r3 = r3 + 0xcadu;
        return (s32)r3;
    case 0x8010b730u:
        r3 = r3 + 0xcbfu;
        return (s32)r3;
    case 0x8010b738u:
        r3 = r3 + 0xcd7u;
        return (s32)r3;
    case 0x8010b740u:
        r3 = r3 + 0xcedu;
        return (s32)r3;
    case 0x8010b748u:
        r3 = r3 + 0xcedu;
        return (s32)r3;
    case 0x8010b750u:
        r3 = r3 + 0xd19u;
        return (s32)r3;
    default:
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = r5;
        a.f[0] = 0.0;
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
        return (s32)r3;
    }
}
