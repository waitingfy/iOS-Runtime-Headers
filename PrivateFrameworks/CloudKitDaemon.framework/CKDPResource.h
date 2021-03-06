/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPRecordIdentifier, CKDPRecordZoneIdentifier;

@interface CKDPResource : PBCodable <NSCopying> {
    struct { 
        unsigned int customClientResourceType : 1; 
        unsigned int targetDatabase : 1; 
    long long _customClientResourceType;
    } _has;
    CKDPRecordIdentifier *_recordId;
    int _targetDatabase;
    CKDPRecordZoneIdentifier *_zoneId;
}

@property long long customClientResourceType;
@property bool hasCustomClientResourceType;
@property(readonly) bool hasRecordId;
@property bool hasTargetDatabase;
@property(readonly) bool hasZoneId;
@property(retain) CKDPRecordIdentifier * recordId;
@property int targetDatabase;
@property(retain) CKDPRecordZoneIdentifier * zoneId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)customClientResourceType;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCustomClientResourceType;
- (bool)hasRecordId;
- (bool)hasTargetDatabase;
- (bool)hasZoneId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)recordId;
- (void)setCustomClientResourceType:(long long)arg1;
- (void)setHasCustomClientResourceType:(bool)arg1;
- (void)setHasTargetDatabase:(bool)arg1;
- (void)setRecordId:(id)arg1;
- (void)setTargetDatabase:(int)arg1;
- (void)setZoneId:(id)arg1;
- (int)targetDatabase;
- (void)writeTo:(id)arg1;
- (id)zoneId;

@end
