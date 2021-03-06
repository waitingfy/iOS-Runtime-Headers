/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class <RUITableFooterDelegate>, NSString, NSURL, RUIWebContainerView;

@interface RUIHTMLFooterView : UIView <RUIWebContainerViewDelegate, RemoteUITableFooter> {
    NSURL *_baseURL;
    <RUITableFooterDelegate> *_delegate;
    RUIWebContainerView *_webContainerView;
}

@property(retain) NSURL * baseURL;
@property(copy,readonly) NSString * debugDescription;
@property <RUITableFooterDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)baseURL;
- (id)delegate;
- (double)footerHeightForWidth:(double)arg1 inTableView:(id)arg2;
- (id)initWithAttributes:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setText:(id)arg1 attributes:(id)arg2;
- (void)webContainerView:(id)arg1 didClickLinkWithURL:(id)arg2;

@end
