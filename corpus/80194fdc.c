#include "tc_rt.h"

static u64 px_f2b(f64 x){union{f64 d;u64 b;}v;v.d=x;return v.b;}

static f64 px_b2f(u64 x){union{f64 d;u64 b;}v;v.b=x;return v.d;}

static f32 px_w2f(u32 x){union{f32 f;u32 w;}v;v.w=x;return v.f;}

static f64 px_lo(f64 x){return(f64)px_w2f((u32)px_f2b(x));}

static f64 px_pq(f64 x){u64 b=px_f2b(x);if((b&0x7ff0000000000000ull)==0x7ff0000000000000ull&&(b&0x000fffffffffffffull)!=0)
return px_b2f(b|0x0008000000000000ull);return x;}

static f64 px_padd(f64 a,f64 b){f64 r=a+b;if(r!=r){if(a!=a)return px_pq(a);if(b!=b)return px_pq(b);return px_b2f(0x7ff8000000000000ull);}return r;}

static f64 px_psub(f64 a,f64 b){f64 r=a-b;if(r!=r){if(a!=a)return px_pq(a);if(b!=b)return px_pq(b);return px_b2f(0x7ff8000000000000ull);}return r;}

static f64 px_pmul(f64 a,f64 c){f64 r=a*c;if(r!=r){if(a!=a)return px_pq(a);if(c!=c)return px_pq(c);return px_b2f(0x7ff8000000000000ull);}return r;}

static f64 px_pfnm(f64 x){return x!=x?x:-x;}

static f64 px_sfms(f64 a,f64 c,f64 b){f64 s=a*c-b;if(s!=s){if(a!=a)return px_pq(a);if(b!=b)return px_pq(b);if(c!=c)return px_pq(c);
return px_b2f(0x7ff8000000000000ull);}return s;}

void fn_80194fdc(u32 param_r3,u32 param_r4){
u32 fl_=0,lr=0,r0=0,r1=0,r3=0,r4=0,r5=tc_argr(2u),r6=tc_argr(3u),r7=tc_argr(4u),r8=tc_argr(5u),r9=tc_argr(6u),r10=tc_argr(7u);
u32 r11=0,r12=0,r24=0,r25=0,r26=0,r27=0,r28=0,r29=0,r30=0,r31=0,t23=0,t26=0;u32 t29=0,t32=0,t35=0;
f64 f0=0.0,f1=tc_argf(0u),f2=tc_argf(1u),f3=tc_argf(2u),f4=tc_argf(3u),f5=tc_argf(4u),f6=tc_argf(5u),f7=tc_argf(6u),f8=tc_argf(7u),f9=0.0,f10=0.0,f11=0.0;
f64 f12=0.0,f13=0.0,f27=0.0,f28=0.0,f29=0.0,f30=0.0,f31=0.0,t24=0.0,t25=0.0,t27=0.0,t28=0.0,t30=0.0;f64 t31=0.0,t33=0.0,t34=0.0,t36=0.0,t37=0.0;TcArgs a={0};
TcArgs za={0};r1=0x817fe000u;lr=0x817ff000u;r3=param_r3;r4=param_r4;for(;;){wr32(r1-0x90u,r1);r1=r1-0x90u;wr32(r1+0x94u,lr);wrf64(r1+0x80u,f31);
wrf32d(r1+0x88u,px_lo(f31));wrf64(r1+0x70u,f30);wrf32d(r1+0x78u,px_lo(f30));wrf64(r1+0x60u,f29);wrf32d(r1+0x68u,px_lo(f29));wrf64(r1+0x50u,f28);
wrf32d(r1+0x58u,px_lo(f28));wrf64(r1+0x40u,f27);wrf32d(r1+0x48u,px_lo(f27));r11=r1+0x40u;wr32(r11-0x20u,r24);wr32(r11-0x1cu,r25);wr32(r11-0x18u,r26);
wr32(r11-0x14u,r27);wr32(r11-0x10u,r28);wr32(r11-0xcu,r29);wr32(r11-8u,r30);wr32(r11-4u,r31);r30=r3;r31=r4;a=za;r3=tc_call(0x800545e4u,&a);f1=tc_lastf();a=za;
a.f[0]=f1;a.r[0]=r3;a.r[1]=0x566u;a.r[2]=1u;a.r[4]=0xffffffffu;r3=tc_call(0x80050dd4u,&a);f1=tc_lastf();r25=r3;a=za;a.r[0]=r3;r3=tc_call(0x80045be0u,&a);
f1=tc_lastf();f5=(f64)rdf32(0x80575410u);f4=(f64)rdf32(0x80575418u);f6=(f64)rdf32(0x8057540cu);f1=rdf64(0x80575420u);f0=(f64)rdf32(0x80575428u);
f3=(f64)rdf32(0x80575414u);f1=px_psub(f1,(f64)(f32)px_pmul(f5,f4));wrf32d(r30+0x84u,f6);wrf32d(r30+0x88u,f5);f1=(f64)(f32)f1;
wrf32d(r30+0x78u,px_pfnm((f64)(f32)px_sfms(f6,f4,f3)));wrf32d(r30+0x7cu,f1);wrf32d(r30+0x80u,f0);a=za;a.r[0]=r3;r3=tc_call(0x8004bf2cu,&a);f1=tc_lastf();
r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);wr32(r30+0x74u,r3);r3=r30;r12=rd32(r30);
r12=rd32(r12+0xcu);lr=0x8019509cu;if(r12!=0x80194fdcu){a=za;a.r[0]=r30;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;
r3=tc_call(r12,&a);f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);
r12=rd32(r30);r3=r30;f1=(f64)rdf32(r30+0x78u);r12=rd32(r12+0x1cu);f2=(f64)rdf32(r30+0x7cu);f3=(f64)rdf32(r30+0x84u);f4=(f64)rdf32(r30+0x88u);lr=0x801950c0u;
if(r12!=0x80194fdcu){a=za;a.r[0]=r30;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;a.f[3]=f4;
r3=tc_call(r12,&a);f1=tc_lastf();r3=rd32(r30+0x74u);wr8(r30+0x2cu,0u);wr32(r30+0x18u,r3);a=za;r3=tc_call(0x800545e4u,&a);f1=tc_lastf();r6=r3;
if(rd32(r3+0x10u)==0u){if(rd32(r3+0x20u)==0u){r5=rd32(r3+0xcu);r3=rd32(r3);r6=r6+0x18u;a=za;a.r[0]=r3;a.r[1]=r25;a.r[2]=r5;a.r[3]=r6;r3=tc_call(0x80040e98u,&a);
f1=tc_lastf();}else{r3=r3+0x24u;a=za;a.r[0]=r3;a.r[1]=r25;r3=tc_call(0x80094ec0u,&a);f1=tc_lastf();}}else{r5=rd32(r3+0xcu);r3=rd32(r3);r6=r6+0x18u;a=za;
a.r[0]=r3;a.r[1]=r25;a.r[2]=r5;a.r[3]=r6;r3=tc_call(0x80040e98u,&a);f1=tc_lastf();}a=za;r3=tc_call(0x800545e4u,&a);f1=tc_lastf();a=za;a.f[0]=f1;a.r[0]=r3;
a.r[1]=0x565u;a.r[2]=1u;a.r[4]=0xffffffffu;r3=tc_call(0x80050dd4u,&a);f1=tc_lastf();wr32(r30+0x784u,r3);a=za;a.r[0]=r25;r3=tc_call(0x80045be0u,&a);
f1=tc_lastf();f5=(f64)rdf32(0x8057540cu);f4=(f64)rdf32(0x80575410u);f3=(f64)rdf32(0x80575418u);f0=(f64)rdf32(0x80575414u);f1=(f64)rdf32(0x8057542cu);
f2=px_pfnm((f64)(f32)px_sfms(f5,f3,f0));f0=(f64)rdf32(0x80575428u);f1=px_pfnm((f64)(f32)px_sfms(f4,f3,f1));wr32(r30+0x788u,r3);wrf32d(r30+0x118u,f5);
wrf32d(r30+0x11cu,f4);wrf32d(r30+0x10cu,f2);wrf32d(r30+0x110u,f1);wrf32d(r30+0x114u,f0);a=za;a.r[0]=r3;r3=tc_call(0x8004bf2cu,&a);f1=tc_lastf();r4=tc_lastr4();
r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);wr32(r30+0x108u,r3);r3=r30+0x94u;r12=rd32(r30+0x94u);
r12=rd32(r12+0xcu);lr=0x801951a8u;if(r12!=0x80194fdcu){a=za;a.r[0]=r3;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;
r3=tc_call(r12,&a);f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);
r12=rd32(r30+0x94u);r3=r30+0x94u;f1=(f64)rdf32(r30+0x10cu);r12=rd32(r12+0x1cu);f2=(f64)rdf32(r30+0x110u);f3=(f64)rdf32(r30+0x118u);f4=(f64)rdf32(r30+0x11cu);
lr=0x801951ccu;if(r12!=0x80194fdcu){a=za;a.r[0]=r3;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;
a.f[3]=f4;r3=tc_call(r12,&a);f1=tc_lastf();r3=rd32(r30+0x108u);wr8(r30+0xc0u,0x80u);wr32(r30+0xacu,r3);a=za;r3=tc_call(0x800545e4u,&a);f1=tc_lastf();a=za;
a.f[0]=f1;a.r[0]=r3;a.r[1]=0x564u;a.r[2]=1u;a.r[4]=0xffffffffu;r3=tc_call(0x80050dd4u,&a);f1=tc_lastf();r27=r3;a=za;a.r[0]=r3;r3=tc_call(0x80045be0u,&a);
f1=tc_lastf();a=za;a.r[0]=r3;r3=tc_call(0x8004bf2cu,&a);f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);
r9=tc_junkr(9u);r10=tc_junkr(0xau);f12=(f64)rdf32(0x80575440u);r25=r30;f31=(f64)rdf32(0x80575430u);r26=r30+0x128u;f13=(f64)rdf32(0x8057543cu);r29=0u;
f11=(f64)rdf32(0x8057542cu);r28=0u;f30=(f64)rdf32(0x80575434u);f29=(f64)rdf32(0x80575438u);f28=(f64)rdf32(0x80575414u);f10=(f64)rdf32(0x80575444u);
f9=(f64)rdf32(0x80575448u);f8=(f64)rdf32(0x8057544cu);f7=(f64)rdf32(0x80575450u);f6=(f64)rdf32(0x80575454u);f5=(f64)rdf32(0x80575458u);
f4=(f64)rdf32(0x8057545cu);f3=(f64)rdf32(0x80575460u);f2=(f64)rdf32(0x80575464u);f1=(f64)rdf32(0x80575468u);f0=(f64)rdf32(0x8057546cu);wr32(r30+0x19cu,r3);
f27=(f64)rdf32(0x80575428u);wrf32d(r30+0x1acu,f31);wrf32d(r30+0x1b0u,f30);wrf32d(r30+0x1a0u,f29);wrf32d(r30+0x1a4u,f28);wrf32d(r30+0x240u,f13);
wrf32d(r30+0x244u,f12);wrf32d(r30+0x234u,f11);wrf32d(r30+0x238u,f11);wrf32d(r30+0x2d4u,f10);wrf32d(r30+0x2d8u,f9);wrf32d(r30+0x2c8u,f8);wrf32d(r30+0x2ccu,f7);
wrf32d(r30+0x368u,f13);wrf32d(r30+0x36cu,f12);wrf32d(r30+0x35cu,f6);wrf32d(r30+0x360u,f5);wrf32d(r30+0x3fcu,f4);wrf32d(r30+0x400u,f31);wrf32d(r30+0x3f0u,f3);
wrf32d(r30+0x3f4u,f2);wrf32d(r30+0x490u,f12);wrf32d(r30+0x494u,f12);wrf32d(r30+0x484u,f1);wrf32d(r30+0x488u,f0);for(;;){wrf32d(r25+0x1a8u,f27);r3=r26;
r12=rd32(r26);r12=rd32(r12+0xcu);lr=0x801952dcu;if(r12==0x80194fdcu){fl_=1u;break;}a=za;a.r[0]=r26;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;
a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;a.f[3]=f4;a.f[4]=f5;a.f[5]=f6;a.f[6]=f7;a.f[7]=f8;r3=tc_call(r12,&a);f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);
r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);r12=rd32(r26);r3=r26;f1=(f64)rdf32(r25+0x1a0u);r12=rd32(r12+0x1cu);
f2=(f64)rdf32(r25+0x1a4u);f3=(f64)rdf32(r25+0x1acu);f4=(f64)rdf32(r25+0x1b0u);lr=0x80195300u;if(r12==0x80194fdcu){fl_=2u;break;}a=za;a.r[0]=r26;a.r[1]=r4;
a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;a.f[3]=f4;f1=tc_callf(r12,&a);r3=tc_lastr();r4=tc_lastr4();
r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);f2=0.0;f3=0.0;f4=0.0;f5=0.0;f6=0.0;f7=0.0;f8=0.0;
r3=rd32(r30+0x19cu);wr32(r25+0x140u,r3);if(r3!=0u){a=za;a.r[0]=r3;r3=tc_call(0x8004c630u,&a);f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);
r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);f2=0.0;f3=0.0;f4=0.0;f5=0.0;f6=0.0;f7=0.0;f8=0.0;r0=6u;if(r29!=5u){r0=r29;}
if((s32)r3>(s32)r0){r0=6u;if(r29!=5u){r0=r29;}wr32(r25+0x144u,r0);}}r29=r29+1u;wr8(r25+0x154u,0u);r25=r25+0x94u;r26=r26+0x94u;if((s32)r29>=6){fl_=3u;break;}}
if(fl_!=3u){if(fl_==2u){fl_=0u;}else if(fl_==1u){fl_=0u;continue;}continue;}fl_=0u;a=za;r3=tc_call(0x800545e4u,&a);f1=tc_lastf();r6=r3;if(rd32(r3+0x10u)==0u){
if(rd32(r3+0x20u)==0u){r5=rd32(r3+0xcu);r3=rd32(r3);r6=r6+0x18u;a=za;a.r[0]=r3;a.r[1]=r27;a.r[2]=r5;a.r[3]=r6;r3=tc_call(0x80040e98u,&a);f1=tc_lastf();}else{
r3=r3+0x24u;a=za;a.r[0]=r3;a.r[1]=r27;r3=tc_call(0x80094ec0u,&a);f1=tc_lastf();}}else{r5=rd32(r3+0xcu);r3=rd32(r3);r6=r6+0x18u;a=za;a.r[0]=r3;a.r[1]=r27;
a.r[2]=r5;a.r[3]=r6;r3=tc_call(0x80040e98u,&a);f1=tc_lastf();}a=za;r3=tc_call(0x800545e4u,&a);f1=tc_lastf();a=za;a.f[0]=f1;a.r[0]=r3;a.r[1]=0x567u;a.r[2]=1u;
a.r[4]=0xffffffffu;r3=tc_call(0x80050dd4u,&a);f1=tc_lastf();r25=r3;a=za;a.r[0]=r3;r3=tc_call(0x80045be0u,&a);f1=tc_lastf();f0=(f64)rdf32(0x80575440u);r26=r3;
wrf32d(r30+0x524u,f0);wrf32d(r30+0x528u,f0);a=za;a.r[0]=r30;a.r[1]=r30+0x518u;a.r[2]=(u32)(s8)rd32(0x805706e8u);a.r[3]=r31;r3=tc_call(0x801966e4u,&a);
f1=tc_lastf();f3=(f64)rdf32(r30+0x518u);f2=(f64)rdf32(0x80575470u);f1=(f64)rdf32(r30+0x51cu);f2=(f64)(f32)px_psub(f3,f2);
f0=(f64)(f32)px_padd(f1,(f64)rdf32(0x80575474u));wrf32d(r30+0x518u,f2);wrf32d(r30+0x51cu,f0);a=za;a.r[0]=r26;r3=tc_call(0x8004bf2cu,&a);f1=tc_lastf();
r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);wr32(r30+0x514u,r3);r3=r30+0x4a0u;
r12=rd32(r30+0x4a0u);r12=rd32(r12+0xcu);lr=0x80195440u;if(r12!=0x80194fdcu){a=za;a.r[0]=r3;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;
a.r[7]=r10;a.f[0]=f1;r3=tc_call(r12,&a);f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);
r10=tc_junkr(0xau);r12=rd32(r30+0x4a0u);r3=r30+0x4a0u;f3=(f64)rdf32(r30+0x524u);f4=(f64)rdf32(r30+0x528u);f2=(f64)rdf32(0x80575418u);f1=(f64)rdf32(r30+0x518u);
f0=(f64)rdf32(r30+0x51cu);f1=px_pfnm((f64)(f32)px_sfms(f3,f2,f1));r12=rd32(r12+0x1cu);f2=px_pfnm((f64)(f32)px_sfms(f4,f2,f0));lr=0x80195470u;
if(r12!=0x80194fdcu){a=za;a.r[0]=r3;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;a.f[3]=f4;
r3=tc_call(r12,&a);f1=tc_lastf();r3=rd32(r30+0x514u);wr32(r30+0x4b8u,r3);if(r3!=0u){a=za;a.r[0]=r3;r3=tc_call(0x8004c630u,&a);f1=tc_lastf();if((s32)r3>0){
wr32(r30+0x4bcu,0u);}}wr8(r30+0x4ccu,0u);a=za;r3=tc_call(0x800545e4u,&a);f1=tc_lastf();r6=r3;if(rd32(r3+0x10u)==0u){if(rd32(r3+0x20u)==0u){r5=rd32(r3+0xcu);
r3=rd32(r3);r6=r6+0x18u;a=za;a.r[0]=r3;a.r[1]=r25;a.r[2]=r5;a.r[3]=r6;r3=tc_call(0x80040e98u,&a);f1=tc_lastf();}else{r3=r3+0x24u;a=za;a.r[0]=r3;a.r[1]=r25;
r3=tc_call(0x80094ec0u,&a);f1=tc_lastf();}}else{r5=rd32(r3+0xcu);r3=rd32(r3);r6=r6+0x18u;a=za;a.r[0]=r3;a.r[1]=r25;a.r[2]=r5;a.r[3]=r6;
r3=tc_call(0x80040e98u,&a);f1=tc_lastf();}a=za;r3=tc_call(0x800545e4u,&a);f1=tc_lastf();a=za;a.f[0]=f1;a.r[0]=r3;a.r[1]=0x564u;a.r[2]=1u;a.r[4]=0xffffffffu;
r3=tc_call(0x80050dd4u,&a);f1=tc_lastf();r25=r3;a=za;a.r[0]=r3;r3=tc_call(0x80045be0u,&a);f1=tc_lastf();f0=(f64)rdf32(0x80575440u);r26=r3;wrf32d(r30+0x5b8u,f0);
wrf32d(r30+0x5bcu,f0);a=za;a.r[0]=r30;a.r[1]=r30+0x5acu;a.r[2]=(u32)(s8)rd32(0x805706e8u);a.r[3]=r31;r3=tc_call(0x801966e4u,&a);f1=tc_lastf();
f1=(f64)rdf32(r30+0x5b0u);wrf32d(r30+0x5b0u,(f64)(f32)px_psub(f1,(f64)rdf32(0x80575470u)));a=za;a.r[0]=r26;r3=tc_call(0x8004bf2cu,&a);f1=tc_lastf();
r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);wr32(r30+0x5a8u,r3);r3=r30+0x534u;
r12=rd32(r30+0x534u);r12=rd32(r12+0xcu);lr=0x80195574u;if(r12!=0x80194fdcu){a=za;a.r[0]=r3;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;
a.r[7]=r10;a.f[0]=f1;r3=tc_call(r12,&a);f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);
r10=tc_junkr(0xau);r12=rd32(r30+0x534u);r3=r30+0x534u;f3=(f64)rdf32(r30+0x5b8u);f4=(f64)rdf32(r30+0x5bcu);f2=(f64)rdf32(0x80575418u);f1=(f64)rdf32(r30+0x5acu);
f0=(f64)rdf32(r30+0x5b0u);f1=px_pfnm((f64)(f32)px_sfms(f3,f2,f1));r12=rd32(r12+0x1cu);f2=px_pfnm((f64)(f32)px_sfms(f4,f2,f0));lr=0x801955a4u;
if(r12!=0x80194fdcu){a=za;a.r[0]=r3;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;a.f[3]=f4;
r3=tc_call(r12,&a);f1=tc_lastf();r3=rd32(r30+0x5a8u);wr32(r30+0x54cu,r3);if(r3!=0u){a=za;a.r[0]=r3;r3=tc_call(0x8004c630u,&a);f1=tc_lastf();if((s32)r3>5){
wr32(r30+0x550u,5u);}}wr8(r30+0x560u,0u);a=za;r3=tc_call(0x800545e4u,&a);f1=tc_lastf();r6=r3;if(rd32(r3+0x10u)==0u){if(rd32(r3+0x20u)==0u){r5=rd32(r3+0xcu);
r3=rd32(r3);r6=r6+0x18u;a=za;a.r[0]=r3;a.r[1]=r25;a.r[2]=r5;a.r[3]=r6;r3=tc_call(0x80040e98u,&a);f1=tc_lastf();r8=tc_junkr(8u);r9=tc_junkr(9u);
r10=tc_junkr(0xau);}else{r3=r3+0x24u;a=za;a.r[0]=r3;a.r[1]=r25;r3=tc_call(0x80094ec0u,&a);f1=tc_lastf();r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);}
}else{r5=rd32(r3+0xcu);r3=rd32(r3);r6=r6+0x18u;a=za;a.r[0]=r3;a.r[1]=r25;a.r[2]=r5;a.r[3]=r6;r3=tc_call(0x80040e98u,&a);f1=tc_lastf();r8=tc_junkr(8u);
r9=tc_junkr(9u);r10=tc_junkr(0xau);}f4=(f64)rdf32(0x80575478u);f3=(f64)rdf32(0x80575448u);r4=0xa0u;f2=(f64)rdf32(0x80575408u);f1=(f64)rdf32(0x8057547cu);
r3=r30+0x5c8u;f0=(f64)rdf32(0x80575428u);wr8(r30+0x794u,0x58u);wr8(r30+0x795u,0x28u);wr8(r30+0x796u,0xcu);wr8(r30+0x798u,0x58u);wr8(r30+0x799u,0x28u);
wr8(r30+0x79au,0xcu);wr8(r30+0x797u,0xa0u);wr8(r30+0x79bu,0xc0u);wrf32d(r30+0x64cu,f4);wrf32d(r30+0x650u,f3);wrf32d(r30+0x640u,f2);wrf32d(r30+0x644u,f1);
wrf32d(r30+0x648u,f0);r12=rd32(r30+0x5c8u);r12=rd32(r12+0xcu);lr=0x8019569cu;if(r12!=0x80194fdcu){a=za;a.r[0]=r3;a.r[1]=0xa0u;a.r[2]=0xcu;a.r[3]=0x28u;
a.r[4]=0x58u;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;a.f[3]=f4;r3=tc_call(r12,&a);f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);
r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);r28=1u;r3=r30+0x5c8u;wr32(r30+0x624u,1u);f1=(f64)rdf32(r30+0x640u);
r12=rd32(r30+0x5c8u);f2=(f64)rdf32(r30+0x644u);r12=rd32(r12+0x1cu);f3=(f64)rdf32(r30+0x64cu);f4=(f64)rdf32(r30+0x650u);lr=0x801956c8u;if(r12!=0x80194fdcu){a=za;
a.r[0]=r3;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;a.f[3]=f4;r3=tc_call(r12,&a);f1=tc_lastf();
f2=(f64)rdf32(r30+0x640u);r5=0u;f1=(f64)rdf32(r30+0x6e0u);r6=0xffffffffu;f0=(f64)rdf32(r30+0x64cu);r25=r30+0x94u;r10=(u32)rd8(r30+0x794u);
f1=(f64)(f32)px_psub(f2,f1);r9=(u32)rd8(r30+0x795u);f0=(f64)(f32)px_padd(f2,f0);r8=(u32)rd8(r30+0x796u);r26=r30+0x65cu;r7=(u32)rd8(r30+0x797u);
r4=(u32)rd8(r30+0x794u);r27=1u;r3=(u32)rd8(r30+0x795u);r0=(u32)rd8(r30+0x796u);wr8(r30+0x614u,(u8)r10);f28=(f64)rdf32(0x80575480u);wr8(r30+0x615u,(u8)r9);
f27=(f64)rdf32(0x80575428u);wr8(r30+0x616u,(u8)r8);wr8(r30+0x617u,(u8)r7);wr8(r30+0x618u,(u8)r10);wr8(r30+0x619u,(u8)r9);wr8(r30+0x61au,(u8)r8);
wr8(r30+0x61bu,(u8)r7);wr8(r30+0x61cu,(u8)r10);wr8(r30+0x61du,(u8)r9);wr8(r30+0x61eu,(u8)r8);wr8(r30+0x61fu,(u8)r7);wr8(r30+0x620u,(u8)r10);
wr8(r30+0x621u,(u8)r9);wr8(r30+0x622u,(u8)r8);wr8(r30+0x623u,(u8)r7);wr32(r30+0x5e0u,0xffffffffu);wr8(r30+0x5f4u,0u);wr8(r1+8u,(u8)r4);wr8(r1+9u,(u8)r3);
wr8(r1+0xau,(u8)r0);wr8(r1+0xbu,0u);wrf32d(r30+0x6d4u,f1);wrf32d(r30+0x768u,f0);for(;;){wrf32d(r25+0x64cu,f28);r3=r26;wrf32d(r25+0x650u,(f64)rdf32(r30+0x650u));
wrf32d(r25+0x644u,(f64)rdf32(r30+0x644u));wrf32d(r25+0x648u,f27);r12=rd32(r26);r12=rd32(r12+0xcu);lr=0x801957a0u;if(r12==0x80194fdcu){fl_=4u;break;}a=za;
a.r[0]=r26;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;r3=tc_call(r12,&a);f1=tc_lastf();r4=tc_lastr4();
r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);wr32(r25+0x624u,1u);r3=r26;r12=rd32(r26);
f1=(f64)rdf32(r25+0x640u);r12=rd32(r12+0x1cu);f2=(f64)rdf32(r25+0x644u);f3=(f64)rdf32(r25+0x64cu);f4=(f64)rdf32(r25+0x650u);lr=0x801957c8u;if(r12==0x80194fdcu){
fl_=5u;break;}a=za;a.r[0]=r26;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;a.f[3]=f4;
f1=tc_callf(r12,&a);r3=tc_lastr();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);f2=0.0;
r27=r27+1u;r26=r26+0x94u;r25=r25+0x94u;if((s32)r27>=3){fl_=6u;break;}}if(fl_!=6u){if(fl_==5u){fl_=0u;}else if(fl_==4u){fl_=0u;continue;}continue;}fl_=0u;
r7=(u32)rd8(r1+8u);r31=1u;r8=(u32)rd8(r1+9u);r29=0u;r9=(u32)rd8(r1+0xau);r28=0xffffffffu;r10=(u32)rd8(r1+0xbu);r6=(u32)rd8(r30+0x794u);r5=(u32)rd8(r30+0x795u);
r4=(u32)rd8(r30+0x796u);r0=(u32)rd8(r30+0x797u);wr8(r30+0x6a8u,(u8)r7);wr8(r30+0x6a9u,(u8)r8);wr8(r30+0x6aau,(u8)r9);wr8(r30+0x6abu,(u8)r10);
wr8(r30+0x6acu,(u8)r6);wr8(r30+0x6adu,(u8)r5);wr8(r30+0x6aeu,(u8)r4);wr8(r30+0x6afu,(u8)r0);wr8(r30+0x6b0u,(u8)r7);wr8(r30+0x6b1u,(u8)r8);
wr8(r30+0x6b2u,(u8)r9);wr8(r30+0x6b3u,(u8)r10);wr8(r30+0x6b4u,(u8)r6);wr8(r30+0x6b5u,(u8)r5);wr8(r30+0x6b6u,(u8)r4);wr8(r30+0x6b7u,(u8)r0);
wr8(r30+0x73cu,(u8)r6);wr8(r30+0x73du,(u8)r5);wr8(r30+0x73eu,(u8)r4);wr8(r30+0x73fu,(u8)r0);wr8(r30+0x740u,(u8)r7);wr8(r30+0x741u,(u8)r8);
wr8(r30+0x742u,(u8)r9);wr8(r30+0x743u,(u8)r10);wr8(r30+0x744u,(u8)r6);wr8(r30+0x745u,(u8)r5);wr8(r30+0x746u,(u8)r4);wr8(r30+0x747u,(u8)r0);
wr8(r30+0x748u,(u8)r7);wr8(r30+0x749u,(u8)r8);wr8(r30+0x74au,(u8)r9);wr8(r30+0x74bu,(u8)r10);wr8(r30+0x790u,1u);wr32(r30+0x78cu,0u);wr8(r30+0x792u,0u);
wr8(r30+0x791u,1u);wr8(r30+0x793u,0xffu);a=za;a.r[0]=0x15u;r3=tc_call(0x80141170u,&a);f1=tc_lastf();r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);
r10=tc_junkr(0xau);f0=(f64)rdf32(0x80575408u);f1=(f64)rdf32(0x80575464u);wr8(r30+0x1b44u,0u);r4=0xcu;r3=r30+0x79cu;wrf32d(r30+0x820u,f1);wrf32d(r30+0x824u,f0);
wrf32d(r30+0x814u,f0);wrf32d(r30+0x818u,f0);r12=rd32(r30+0x79cu);wr8(r1+8u,0x58u);r12=rd32(r12+0xcu);wr8(r1+9u,0x28u);wr8(r1+0xau,0xcu);wr8(r1+0xbu,0xc0u);
lr=0x801958f4u;if(r12!=0x80194fdcu){a=za;a.r[0]=r3;a.r[1]=0xcu;a.r[2]=0x28u;a.r[3]=0x58u;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;r3=tc_call(r12,&a);
f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);wr32(r30+0x7f8u,1u);
r3=r30+0x79cu;f1=(f64)rdf32(r30+0x814u);r12=rd32(r30+0x79cu);f2=(f64)rdf32(r30+0x818u);r12=rd32(r12+0x1cu);f3=(f64)rdf32(r30+0x820u);f4=(f64)rdf32(r30+0x824u);
lr=0x8019591cu;if(r12!=0x80194fdcu){a=za;a.r[0]=r3;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;
a.f[3]=f4;r3=tc_call(r12,&a);f1=tc_lastf();r0=(u32)rd8(r1+8u);r3=(u32)rd8(r1+9u);r4=(u32)rd8(r1+0xau);r5=(u32)rd8(r1+0xbu);wr8(r30+0x7e8u,(u8)r0);
wr8(r30+0x7e9u,(u8)r3);wr8(r30+0x7eau,(u8)r4);wr8(r30+0x7ebu,(u8)r5);wr8(r30+0x7ecu,(u8)r0);wr8(r30+0x7edu,(u8)r3);wr8(r30+0x7eeu,(u8)r4);
wr8(r30+0x7efu,(u8)r5);wr8(r30+0x7f0u,(u8)r0);wr8(r30+0x7f1u,(u8)r3);wr8(r30+0x7f2u,(u8)r4);wr8(r30+0x7f3u,(u8)r5);wr8(r30+0x7f4u,(u8)r0);
wr8(r30+0x7f5u,(u8)r3);wr8(r30+0x7f6u,(u8)r4);wr8(r30+0x7f7u,(u8)r5);wr32(r30+0x7b4u,0xffffffffu);a=za;r3=tc_call(0x800545e4u,&a);f1=tc_lastf();a=za;a.f[0]=f1;
a.r[0]=r3;a.r[1]=0x574u;a.r[2]=1u;a.r[4]=0xffffffffu;r3=tc_call(0x80050dd4u,&a);f1=tc_lastf();r25=r3;a=za;a.r[0]=r3;r3=tc_call(0x80045be0u,&a);f1=tc_lastf();
a=za;a.r[0]=r3;r3=tc_call(0x8004bf2cu,&a);f1=tc_lastf();wr32(r30+0x8a4u,r3);a=za;r3=tc_call(0x800545e4u,&a);f1=tc_lastf();r6=r3;if(rd32(r3+0x10u)==0u){
if(rd32(r3+0x20u)==0u){r5=rd32(r3+0xcu);r3=rd32(r3);r6=r6+0x18u;a=za;a.r[0]=r3;a.r[1]=r25;a.r[2]=r5;a.r[3]=r6;r3=tc_call(0x80040e98u,&a);f1=tc_lastf();
r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);}else{r3=r3+0x24u;a=za;a.r[0]=r3;a.r[1]=r25;
r3=tc_call(0x80094ec0u,&a);f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);}
}else{r5=rd32(r3+0xcu);r3=rd32(r3);r6=r6+0x18u;a=za;a.r[0]=r3;a.r[1]=r25;a.r[2]=r5;a.r[3]=r6;r3=tc_call(0x80040e98u,&a);f1=tc_lastf();r4=tc_lastr4();
r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);}f27=(f64)rdf32(0x80575464u);r27=r30;
f1=(f64)rdf32(0x80575418u);r25=r30+0x830u;f0=(f64)rdf32(0x80575484u);r24=0u;f28=(f64)rdf32(0x80575478u);r26=0u;f29=px_pfnm((f64)(f32)px_sfms(f27,f1,f0));
f30=rdf64(0x80575498u);f31=(f64)rdf32(0x80575488u);r28=0x43300000u;r29=1u;r31=2u;for(;;){wrf32d(r27+0x8b4u,f27);r3=r25;wr32(r1+0x14u,r26^0x80000000u);
wr32(r1+0x10u,0x43300000u);f0=rdf64(r1+0x10u);wrf32d(r27+0x8b8u,f28);f0=(f64)(f32)px_psub(f0,f30);wrf32d(r27+0x8a8u,f29);f0=(f64)(f32)px_padd(f27,f0);
f0=(f64)(f32)px_psub(f0,f31);wrf32d(r27+0x8acu,f0);r12=rd32(r25);r12=rd32(r12+0xcu);lr=0x80195a70u;if(r12==0x80194fdcu){fl_=7u;break;}a=za;a.r[0]=r25;a.r[1]=r4;
a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;r3=tc_call(r12,&a);f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);
r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);wr32(r27+0x88cu,1u);r3=r25;r12=rd32(r25);f1=(f64)rdf32(r27+0x8a8u);r12=rd32(r12+0x1cu);
f2=(f64)rdf32(r27+0x8acu);f3=(f64)rdf32(r27+0x8b4u);f4=(f64)rdf32(r27+0x8b8u);lr=0x80195a98u;if(r12==0x80194fdcu){fl_=8u;break;}a=za;a.r[0]=r25;a.r[1]=r4;
a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;a.f[3]=f4;f1=tc_callf(r12,&a);r3=tc_lastr();r4=tc_lastr4();
r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);r3=rd32(r30+0x8a4u);wr32(r27+0x848u,r3);if(r3!=0u){a=za;
a.r[0]=r3;r3=tc_call(0x8004c630u,&a);f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);
r10=tc_junkr(0xau);if((s32)r3>2){wr32(r27+0x84cu,2u);}}r24=r24+1u;r26=r26+0x16u;r25=r25+0x94u;r27=r27+0x94u;if((s32)r24>=33){if(rd32(0x80571100u)!=0u){
f0=(f64)rdf32(0x80575490u);}else{f0=(f64)rdf32(0x8057548cu);}wrf32d(r30+0x1b48u,f0);t23=r1+0x88u;t24=(f64)rdf32(t23);t25=(f64)rdf32(t23);f31=rdf64(r1+0x80u);
t26=r1+0x78u;t27=(f64)rdf32(t26);t28=(f64)rdf32(t26);f30=rdf64(r1+0x70u);t29=r1+0x68u;t30=(f64)rdf32(t29);t31=(f64)rdf32(t29);f29=rdf64(r1+0x60u);t32=r1+0x58u;
t33=(f64)rdf32(t32);t34=(f64)rdf32(t32);f28=rdf64(r1+0x50u);t35=r1+0x48u;t36=(f64)rdf32(t35);t37=(f64)rdf32(t35);f27=rdf64(r1+0x40u);r11=r1+0x40u;
r24=rd32(r11-0x20u);r25=rd32(r11-0x1cu);r26=rd32(r11-0x18u);r27=rd32(r11-0x14u);r28=rd32(r11-0x10u);r29=rd32(r11-0xcu);r30=rd32(r11-8u);r31=rd32(r11-4u);
r0=rd32(r1+0x94u);return;}}if(fl_==8u){fl_=0u;}else if(fl_==7u){fl_=0u;}}}}}}}}}}}}}}}
