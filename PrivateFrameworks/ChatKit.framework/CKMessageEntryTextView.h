/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSAttributedString, NSString, UILabel;

@interface CKMessageEntryTextView : UITextView {
    NSString *_autocorrectionContext;
    UILabel *_placeholderLabel;
    NSString *_responseContext;
    bool_showingDictationPlaceholder;
}

@property(copy) NSString * autocorrectionContext;
@property(copy) NSAttributedString * compositionText;
@property(retain) UILabel * placeholderLabel;
@property(copy) NSString * placeholderText;
@property(copy) NSString * responseContext;
@property(getter=isShowingDictationPlaceholder) bool showingDictationPlaceholder;
@property(getter=isSingleLine,readonly) bool singleLine;

- (id)autocorrectionContext;
- (id)compositionText;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (id)insertDictationResultPlaceholder;
- (bool)isShowingDictationPlaceholder;
- (bool)isSingleLine;
- (void)layoutSubviews;
- (id)placeholderLabel;
- (id)placeholderText;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(bool)arg2;
- (id)responseContext;
- (void)setAttributedText:(id)arg1;
- (void)setAutocorrectionContext:(id)arg1;
- (void)setCompositionText:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setPlaceholderLabel:(id)arg1;
- (void)setPlaceholderText:(id)arg1;
- (void)setResponseContext:(id)arg1;
- (void)setShowingDictationPlaceholder:(bool)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)updateTextView;

@end
