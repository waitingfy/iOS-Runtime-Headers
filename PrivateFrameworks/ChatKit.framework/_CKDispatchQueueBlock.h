/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString;

@interface _CKDispatchQueueBlock : NSObject {
    id _block;
    unsigned long long _fifo;
    NSString *_key;
    long long _priority;
}

@property(copy) id block;
@property unsigned long long fifo;
@property(copy) NSString * key;
@property long long priority;

- (id)block;
- (void)cancel;
- (long long)compare:(id)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)fifo;
- (id)initWithBlock:(id)arg1 key:(id)arg2 priority:(long long)arg3 fifo:(unsigned long long)arg4;
- (id)key;
- (long long)priority;
- (void)setBlock:(id)arg1;
- (void)setFIFO:(unsigned long long)arg1;
- (void)setKey:(id)arg1;
- (void)setPriority:(long long)arg1;

@end
