/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class ADInterstitialAd, NSString;

@interface ADInterstitialView : UIView <ADDimmerViewDelegate> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _dismissButtonRect;
    ADInterstitialAd *_interstitialAd;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } dismissButtonRect;
@property(readonly) unsigned long long hash;
@property(readonly) ADInterstitialAd * interstitialAd;
@property(readonly) Class superclass;

+ (bool)requiresConstraintBasedLayout;

- (void)dealloc;
- (void)didMoveToWindow;
- (void)dimmerView:(id)arg1 didReceiveTouchUpAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })dismissButtonRect;
- (bool)enableDimmerView:(id)arg1;
- (id)initForInterstitialAd:(id)arg1;
- (id)interstitialAd;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)removeFromSuperview;
- (void)setAlpha:(double)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDismissButtonRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHidden:(bool)arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;

@end
