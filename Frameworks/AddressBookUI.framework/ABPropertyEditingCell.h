/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABRepeatingGradientSeparatorView, NSString, UIButton;

@interface ABPropertyEditingCell : ABPropertyCell <ABPickerControllerDelegate> {
    UIButton *_labelButton;
    double _labelWidth;
    ABRepeatingGradientSeparatorView *_vseparator;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) UIButton * labelButton;
@property(readonly) double leftValueMargin;
@property(readonly) Class superclass;
@property(retain) ABRepeatingGradientSeparatorView * vseparator;

+ (id)keyPathsForValuesAffectingEffectiveLabelWidth;
+ (bool)wantsChevron;
+ (bool)wantsStandardConstraints;

- (id)constantConstraints;
- (void)dealloc;
- (double)effectiveLabelWidth;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)labelButton;
- (void)labelButtonClicked:(id)arg1;
- (id)labelView;
- (double)leftValueMargin;
- (double)minCellHeight;
- (void)picker:(id)arg1 didPickItem:(id)arg2;
- (void)pickerDidCancel:(id)arg1;
- (void)setValueTextAttributes:(id)arg1;
- (void)setVseparator:(id)arg1;
- (void)updateWithPropertyItem:(id)arg1;
- (id)valueString;
- (id)vseparator;

@end
