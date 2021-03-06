/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CKDModifyRecordZonesOperation : CKDDatabaseOperation {
    id _deleteCompletionBlock;
    int _numZoneSaveAttempts;
    NSMutableDictionary *_pcsOplockFailureCountByZoneID;
    NSArray *_recordZoneIDsToDelete;
    NSMutableDictionary *_recordZonesByZoneID;
    NSMutableArray *_recordZonesToSave;
    id _saveCompletionBlock;
    bool_allowDefaultZoneSave;
    bool_markZonesAsUserPurged;
}

@property bool allowDefaultZoneSave;
@property(copy) id deleteCompletionBlock;
@property bool markZonesAsUserPurged;
@property int numZoneSaveAttempts;
@property(retain) NSMutableDictionary * pcsOplockFailureCountByZoneID;
@property(retain) NSArray * recordZoneIDsToDelete;
@property(retain) NSMutableDictionary * recordZonesByZoneID;
@property(retain) NSMutableArray * recordZonesToSave;
@property(copy) id saveCompletionBlock;

- (void).cxx_destruct;
- (void)_checkAndPrepareZones;
- (void)_fetchPCSDataForZone:(id)arg1 fromServer:(bool)arg2;
- (void)_fetchPCSDataForZonesFromServer:(bool)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleRecordZoneDeleted:(id)arg1 responseCode:(id)arg2;
- (void)_handleRecordZoneSaved:(id)arg1 responseCode:(id)arg2;
- (bool)_saveZonesToServer;
- (bool)allowDefaultZoneSave;
- (id)deleteCompletionBlock;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (bool)makeStateTransition;
- (bool)markZonesAsUserPurged;
- (id)nameForState:(unsigned long long)arg1;
- (int)numZoneSaveAttempts;
- (id)pcsOplockFailureCountByZoneID;
- (id)recordZoneIDsToDelete;
- (id)recordZonesByZoneID;
- (id)recordZonesToSave;
- (id)saveCompletionBlock;
- (void)setAllowDefaultZoneSave:(bool)arg1;
- (void)setDeleteCompletionBlock:(id)arg1;
- (void)setMarkZonesAsUserPurged:(bool)arg1;
- (void)setNumZoneSaveAttempts:(int)arg1;
- (void)setPcsOplockFailureCountByZoneID:(id)arg1;
- (void)setRecordZoneIDsToDelete:(id)arg1;
- (void)setRecordZonesByZoneID:(id)arg1;
- (void)setRecordZonesToSave:(id)arg1;
- (void)setSaveCompletionBlock:(id)arg1;

@end
