/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSData;

@interface CKDPPackageManifestHeader : PBCodable <NSCopying> {
    struct { 
        unsigned int version : 1; 
    } _has;
    NSData *_signature;
    int _version;
}

@property(readonly) bool hasSignature;
@property bool hasVersion;
@property(retain) NSData * signature;
@property int version;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSignature;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setSignature:(id)arg1;
- (void)setVersion:(int)arg1;
- (id)signature;
- (int)version;
- (void)writeTo:(id)arg1;

@end
