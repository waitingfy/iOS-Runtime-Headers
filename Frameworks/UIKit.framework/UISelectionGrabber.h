/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UISelectionGrabberDot, UITextRangeView;

@interface UISelectionGrabber : UIView {
    int _applicationDeactivationReason;
    boolm_activeFlattened;
    boolm_alertFlattened;
    boolm_animating;
    boolm_isDotted;
    boolm_navigationTransitionFlattened;
    UISelectionGrabberDot *m_dotView;
    int m_orientation;
}

@property bool activeFlattened;
@property bool alertFlattened;
@property bool animating;
@property(readonly) UITextRangeView * hostView;
@property bool isDotted;
@property bool navigationTransitionFlattened;
@property int orientation;

+ (id)_grabberDot;

- (id)_dotView;
- (bool)activeFlattened;
- (bool)alertFlattened;
- (bool)animating;
- (bool)autoscrolled;
- (void)canExpandAfterAlert:(id)arg1;
- (void)canExpandAfterBecomeActive:(id)arg1;
- (void)canExpandAfterNavigationTransition:(id)arg1;
- (bool)clipDot:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)didMoveToSuperview;
- (bool)dotIsVisbleInDocument:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)hostView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)inputViewIsChanging;
- (bool)isDotted;
- (bool)isPointedDown;
- (bool)isPointedLeft;
- (bool)isPointedRight;
- (bool)isPointedUp;
- (bool)isRotating;
- (bool)isScaling;
- (bool)isScrolling;
- (bool)isVertical;
- (void)mustFlattenForAlert:(id)arg1;
- (void)mustFlattenForNavigationTransition:(id)arg1;
- (void)mustFlattenForResignActive:(id)arg1;
- (bool)navigationTransitionFlattened;
- (int)orientation;
- (void)removeFromSuperview;
- (void)saveDeactivationReason:(id)arg1;
- (bool)scroller:(id)arg1 fullyContainSelectionRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setActiveFlattened:(bool)arg1;
- (void)setAlertFlattened:(bool)arg1;
- (void)setAnimating:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHidden:(bool)arg1;
- (void)setIsDotted:(bool)arg1;
- (void)setNavigationTransitionFlattened:(bool)arg1;
- (void)setOrientation:(int)arg1;
- (void)updateDot;

@end
