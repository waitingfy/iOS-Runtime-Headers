/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface CAContextImpl : CAContext {
    struct Context { unsigned int x1; struct Context {} *x2; struct Mutex { struct _opaque_pthread_mutex_t { long long x_1_2_1; BOOL x_1_2_2[56]; } x_3_1_1; } x3; id x4; unsigned int x5; unsigned int x6; unsigned int x7; id x8; struct Context {} *x9; struct CGColorSpace {} *x10; struct __CFDictionary {} *x11; unsigned int x12; unsigned int x13; unsigned int x14; struct ObjectCache {} *x15; id x16; unsigned int x17; float x18; struct Commit {} *x19; struct Generic { int (**x_20_1_1)(); struct Context {} *x_20_1_2; } x20; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; } *_impl;
}

- (struct CGColorSpace { }*)colorSpace;
- (unsigned int)contextId;
- (unsigned int)createFencePort;
- (unsigned int)createImageSlot:(struct CGSize { double x1; double x2; })arg1 hasAlpha:(bool)arg2;
- (unsigned int)createSlot;
- (void)dealloc;
- (void)deleteSlot:(unsigned int)arg1;
- (id)initRemoteWithOptions:(id)arg1;
- (id)initWithOptions:(id)arg1 localContext:(bool)arg2;
- (void)invalidate;
- (bool)isSecure;
- (id)layer;
- (float)level;
- (id)options;
- (void)orderAbove:(unsigned int)arg1;
- (void)orderBelow:(unsigned int)arg1;
- (struct Context { }*)renderContext;
- (void)setColorSpace:(struct CGColorSpace { }*)arg1;
- (void)setFence:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)setFencePort:(unsigned int)arg1 commitHandler:(id)arg2;
- (void)setFencePort:(unsigned int)arg1;
- (void)setLayer:(id)arg1;
- (void)setLevel:(float)arg1;
- (void)setObject:(id)arg1 forSlot:(unsigned int)arg2;
- (void)setSecure:(bool)arg1;
- (bool)valid;

@end
