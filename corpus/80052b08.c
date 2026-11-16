#include "tc_rt.h"

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

void fn_80052b08(void)
{
    u32 r0 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r28 = 0, r29 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0;
    TcArgs a = {0};
    a.r[0] = 0x803ca858u;
    (void)tc_call(0x800cb808u, &a);
    r28 = 0u;
    r29 = 0x803c91d0u;
    while ((s32)r28 < (s32)rd32(0x805710ccu)) {
        r11 = rd32(r29);
        r10 = rd32(r29 + 4u);
        r9 = rd32(r29 + 8u);
        r0 = (rd32(r29 + 0x90u) << 2u) & 0xfffffffcu;
        f6 = (f64)rdf32(r29 + 0x98u);
        r8 = r0 - 0x7fcc9ad0u;
        r7 = (u32)rd8(r0 - 0x7fcc9ad0u);
        r6 = (u32)rd8(r8 + 1u);
        r5 = (u32)rd8(r8 + 2u);
        r0 = (u32)rd8(r8 + 3u);
        f5 = (f64)px_w2f(r11);
        f4 = (f64)px_w2f(r10);
        f3 = (f64)px_w2f(r9);
        f2 = (f64)px_w2f(r11);
        f1 = (f64)px_w2f(r10);
        wrf32d(0x803ca888u, f6);
        wrf32d(0x803ca870u, f5);
        wrf32d(0x803ca874u, f4);
        wrf32d(0x803ca878u, f3);
        wrf32d(0x803ca864u, f2);
        wrf32d(0x803ca868u, f1);
        wrf32d(0x803ca86cu, (f64)px_w2f(r9));
        wr8(0x803ca87cu, (u8)r7);
        wr8(0x803ca87du, (u8)r6);
        wr8(0x803ca87eu, (u8)r5);
        wr8(0x803ca87fu, (u8)r0);
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = f3;
        a.f[3] = f4;
        a.f[4] = f5;
        a.f[5] = f6;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x803ca858u;
        a.r[1] = r29 + 0xcu;
        a.r[2] = r5;
        a.r[3] = r6;
        a.r[4] = r7;
        a.r[5] = r8;
        a.r[6] = r9;
        a.r[7] = r10;
        (void)tc_call(0x800cbc94u, &a);
        r29 = r29 + 0x9cu;
        r28 = r28 + 1u;
    }
    wr32(0x805710ccu, 0u);
    return;
}
