/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableIndexSet;

@interface TSTConcurrentMutableIndexSet : NSObject {
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    NSMutableIndexSet *mMutableIndexSet;
    } mRWLock;
}

- (void)addIndex:(unsigned long long)arg1;
- (void)dealloc;
- (void)enumerateIndexesUsingBlock:(id)arg1;
- (id)init;
- (void)removeAllIndexes;

@end
