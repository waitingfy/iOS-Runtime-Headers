/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSData, NSDictionary, NSMutableSet, NSSet, NSString;

@interface CoreDAVBulkChangeTask : CoreDAVTask {
    NSString *_appSpecificDataProp;
    NSString *_appSpecificNamespace;
    NSMutableSet *_bulkChangeResponses;
    NSString *_checkCTag;
    NSDictionary *_hrefsToModDeleteActions;
    NSString *_nextCTag;
    NSData *_pushedData;
    NSString *_requestDataContentType;
    NSDictionary *_uuidsToAddActions;
    bool_returnChangedData;
    bool_simple;
    bool_validCTag;
}

@property(readonly) NSSet * bulkChangeResponses;
@property(readonly) NSDictionary * hrefsToModDeleteActions;
@property(readonly) NSString * nextCTag;
@property(readonly) NSDictionary * uuidsToAddActions;

- (id)additionalHeaderValues;
- (id)bulkChangeResponses;
- (id)copyDefaultParserForContentType:(id)arg1;
- (void)dealloc;
- (void)fillOutDataWithUUIDsToAddActions:(id)arg1 hrefsToModDeleteActions:(id)arg2;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)hrefsToModDeleteActions;
- (id)httpMethod;
- (id)initWithURL:(id)arg1 checkCTag:(id)arg2 simple:(bool)arg3 returnChangedData:(bool)arg4 uuidsToAddActions:(id)arg5 hrefsToModDeleteActions:(id)arg6;
- (id)nextCTag;
- (id)requestBody;
- (id)uuidsToAddActions;

@end
