/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, NSString, TSDGLDataBuffer, TSDGLMotionBlurEffect, TSDGLShader;

@interface KNTransitionFlop : KNAnimationEffect <KNFrameAnimator, KNAnimationPluginArchiving> {
    NSArray *_colorBufferAttributes;
    unsigned long long _colorNormalAttributeIndex;
    unsigned long long _colorPositionAttributeIndex;
    unsigned long long _colorPrevPositionAttributeIndex;
    unsigned long long _colorTexCoordAttributeIndex;
    TSDGLDataBuffer *_dataBuffer;
    TSDGLShader *_flopShader;
    TSDGLMotionBlurEffect *_motionBlurEffect;
    TSDGLDataBuffer *_nextQuadDataBuffer;
    long long _numPoints;
    TSDGLDataBuffer *_quadDataBuffer;
    TSDGLShader *_quadShader;
    unsigned long long _shadowAlphaAttributeIndex;
    NSArray *_shadowBufferAttributes;
    TSDGLDataBuffer *_shadowDataBuffer;
    unsigned long long _shadowPositionAttributeIndex;
    TSDGLShader *_shadowShader;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (int)animationCategory;
+ (id)animationFilter;
+ (id)animationName;
+ (id)defaultAttributes;
+ (unsigned long long)directionType;
+ (void)downgradeAttributes:(id*)arg1 animationName:(id*)arg2 warning:(id*)arg3 type:(int)arg4 isToClassic:(bool)arg5 version:(unsigned long long)arg6;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+ (id)localizedMenuString:(int)arg1;
+ (id)supportedTypes;
+ (id)thumbnailImageNameForType:(int)arg1;
+ (void)upgradeAttributes:(id*)arg1 animationName:(id)arg2 warning:(id*)arg3 type:(int)arg4 isFromClassic:(bool)arg5 version:(unsigned long long)arg6;

- (void)animationDidEndWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (void)createArrays:(id)arg1 context:(id)arg2;
- (void)dealloc;
- (id)initWithAnimationContext:(id)arg1;
- (void)p_drawFlopVertical:(bool)arg1 texture:(id)arg2 oldTexture:(id)arg3;
- (void)p_teardown;
- (void)renderFrameWithContext:(id)arg1;
- (void)updateFlop:(id)arg1 withContext:(id)arg2;
- (void)updateShadowWithTexture:(id)arg1 percent:(double)arg2 direction:(unsigned long long)arg3;

@end
