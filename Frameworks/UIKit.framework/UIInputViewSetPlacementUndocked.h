/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputViewSetPlacementUndocked : UIInputViewSetPlacement {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _chromeBuffer;
    double _normalizedOffset;
}

@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } chromeBuffer;
@property double normalizedOffset;

+ (id)placementWithUndockedOffset:(double)arg1 chromeBuffer:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })chromeBuffer;
- (bool)inputViewWillAppear;
- (bool)isEqual:(id)arg1;
- (bool)isUndocked;
- (double)normalizedOffset;
- (void)setChromeBuffer:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setNormalizedOffset:(double)arg1;
- (id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;

@end
