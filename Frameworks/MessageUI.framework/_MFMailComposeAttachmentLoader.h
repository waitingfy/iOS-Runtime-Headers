/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class MFMailMessage;

@interface _MFMailComposeAttachmentLoader : NSObject {
    id _completionBlock;
    id _content;
    MFMailMessage *_message;
    bool_isDraft;
}

- (void)dealloc;
- (id)initWithMessage:(id)arg1 content:(id)arg2 isDraft:(bool)arg3 completion:(id)arg4;
- (void)loadAttachments;

@end
