/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, NSMutableArray, TSUNoCopyDictionary;

@interface TSULRUCache : NSObject {
    SEL mCallback;
    id mCallbackTarget;
    TSUNoCopyDictionary *mData;
    unsigned long long mMax;
    NSMutableArray *mOrderedKeys;
}

@property(readonly) NSArray * allKeys;
@property(readonly) NSArray * allValues;
@property(readonly) unsigned long long maxSize;

- (id)allKeys;
- (id)allValues;
- (void)clearEvictionCallbackTarget;
- (void)dealloc;
- (id)initWithMaxSize:(unsigned long long)arg1;
- (unsigned long long)maxSize;
- (id)objectForKey:(id)arg1;
- (void)p_removeOldestObject;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setEvictionCallbackTarget:(id)arg1 selector:(SEL)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
