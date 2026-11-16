#include "tc_rt.h"

void fn_800c05f0(u32 param_1, u32 param_2)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    if (param_2 <= 8u) {
        r3 = rd32(((param_2 << 2u) & 0xfffffffcu) - 0x7fcaab80u);
        sw_ = r3;
        switch (sw_) {
        case 0x800c0624u:
            a.r[0] = 0x2015u;
            r3 = tc_call(0x8014d9a4u, &a);
            a.r[0] = param_1;
            a.r[1] = r3 + 0x60u;
            a.r[2] = 1u;
            a.r[3] = 0u;
            a.f[0] = (f64)rdf32(0x80572e78u);
            (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
            break;
        case 0x800c0658u:
            a.r[0] = 0x2017u;
            r3 = tc_call(0x8014d9a4u, &a);
            a.r[0] = param_1;
            a.r[1] = r3 + 0x63u;
            a.r[2] = 1u;
            a.r[3] = 0u;
            a.f[0] = (f64)rdf32(0x80572e78u);
            (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
            break;
        case 0x800c068cu:
            a.r[0] = 0x201bu;
            r3 = tc_call(0x8014d9a4u, &a);
            a.r[0] = param_1;
            a.r[1] = r3 + 0x66u;
            a.r[2] = 1u;
            a.r[3] = 0u;
            a.f[0] = (f64)rdf32(0x80572e78u);
            (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
            break;
        case 0x800c06c0u:
            a.r[0] = 0x2011u;
            r3 = tc_call(0x8014d9a4u, &a);
            a.r[0] = param_1;
            a.r[1] = r3 + 0x69u;
            a.r[2] = 1u;
            a.r[3] = 0u;
            a.f[0] = (f64)rdf32(0x80572e78u);
            (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
            break;
        case 0x800c06f4u:
            a.r[0] = 0x2019u;
            r3 = tc_call(0x8014d9a4u, &a);
            a.r[0] = param_1;
            a.r[1] = r3 + 0x6cu;
            a.r[2] = 1u;
            a.r[3] = 0u;
            a.f[0] = (f64)rdf32(0x80572e78u);
            (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
            break;
        case 0x800c0728u:
            a.r[0] = 0x2024u;
            r3 = tc_call(0x8014d9a4u, &a);
            a.r[0] = param_1;
            a.r[1] = r3 + 0x6fu;
            a.r[2] = 1u;
            a.r[3] = 0u;
            a.f[0] = (f64)rdf32(0x80572e78u);
            (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
            break;
        case 0x800c075cu:
            a.r[0] = 0x2028u;
            r3 = tc_call(0x8014d9a4u, &a);
            a.r[0] = param_1;
            a.r[1] = r3 + 0x72u;
            a.r[2] = 1u;
            a.r[3] = 0u;
            a.f[0] = (f64)rdf32(0x80572e78u);
            (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
            break;
        case 0x800c0790u:
            a.r[0] = 0x2028u;
            r3 = tc_call(0x8014d9a4u, &a);
            a.r[0] = param_1;
            a.r[1] = r3 + 0x75u;
            a.r[2] = 1u;
            a.r[3] = 0u;
            a.f[0] = (f64)rdf32(0x80572e78u);
            (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
            break;
        case 0x800c07c4u:
            a.r[0] = 0x2026u;
            r3 = tc_call(0x8014d9a4u, &a);
            a.r[0] = param_1;
            a.r[1] = r3 + 0x78u;
            a.r[2] = 1u;
            a.r[3] = 0u;
            a.f[0] = (f64)rdf32(0x80572e78u);
            (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
            break;
        default:
            a.r[0] = r3;
            a.r[1] = param_2;
            a.r[2] = 0u;
            a.r[3] = 0u;
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
            return;
        }
    }
    return;
}
