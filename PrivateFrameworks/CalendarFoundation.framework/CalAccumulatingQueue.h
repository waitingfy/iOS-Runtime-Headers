/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>;

@interface CalAccumulatingQueue : NSObject {
    id _block;
    NSMutableDictionary *_context;
    float _delay;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_tags;
}

- (void).cxx_destruct;
- (bool)_hasQueuedUpBlock;
- (id)initWithQueue:(id)arg1 andBlock:(id)arg2 delay:(float)arg3;
- (id)initWithQueue:(id)arg1 andBlock:(id)arg2;
- (void)updateTagsAndExecuteBlock:(id)arg1 withContext:(id)arg2;
- (void)updateTagsAndExecuteBlock:(id)arg1;

@end
