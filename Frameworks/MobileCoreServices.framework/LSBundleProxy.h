/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@class NSArray, NSDictionary, NSString, NSURL, NSUUID;

@interface LSBundleProxy : LSResourceProxy {
    NSURL *_appStoreReceiptURL;
    NSString *_bundleExecutable;
    unsigned long long _bundleFlags;
    NSString *_bundleType;
    NSURL *_bundleURL;
    NSString *_bundleVersion;
    NSUUID *_cacheGUID;
    NSDictionary *_entitlements;
    NSDictionary *_environmentVariables;
    NSDictionary *_groupContainerURLs;
    NSString *_localizedShortName;
    NSArray *_machOUUIDs;
    unsigned long long _plistContentFlags;
    unsigned long long _sequenceNumber;
    NSString *_signerIdentity;
    bool_foundBackingBundle;
}

@property(readonly) NSURL * appStoreReceiptURL;
@property(readonly) NSURL * bundleContainerURL;
@property(readonly) NSString * bundleExecutable;
@property(readonly) NSString * bundleIdentifier;
@property(readonly) NSString * bundleType;
@property(readonly) NSURL * bundleURL;
@property(readonly) NSString * bundleVersion;
@property(readonly) NSUUID * cacheGUID;
@property(readonly) NSURL * containerURL;
@property(readonly) NSURL * dataContainerURL;
@property(readonly) NSDictionary * entitlements;
@property(readonly) NSDictionary * environmentVariables;
@property(readonly) bool foundBackingBundle;
@property(readonly) NSDictionary * groupContainerURLs;
@property(readonly) NSString * localizedShortName;
@property(readonly) NSArray * machOUUIDs;
@property(readonly) unsigned long long sequenceNumber;
@property(readonly) NSString * signerIdentity;

+ (id)bundleProxyForIdentifier:(id)arg1;
+ (id)bundleProxyForURL:(id)arg1;

- (unsigned char)_createContext:(struct LSContext { struct LSDatabase {} *x1; }*)arg1 andGetBundle:(unsigned int*)arg2 withData:(const struct LSBundleData {}**)arg3;
- (id)_initWithBundleUnit:(unsigned int)arg1 bundleType:(unsigned long long)arg2 BundleID:(id)arg3 localizedName:(id)arg4 bundleContainerURL:(id)arg5 dataContainerURL:(id)arg6 resourcesDirectoryURL:(id)arg7 iconsDictionary:(id)arg8 iconFileNames:(id)arg9 version:(id)arg10;
- (id)_plistValueForKey:(id)arg1;
- (id)appStoreReceiptURL;
- (id)bundleContainerURL;
- (id)bundleExecutable;
- (id)bundleIdentifier;
- (id)bundleType;
- (id)bundleURL;
- (id)bundleVersion;
- (id)cacheGUID;
- (id)containerURL;
- (id)dataContainerURL;
- (void)dealloc;
- (id)entitlements;
- (id)environmentVariables;
- (bool)foundBackingBundle;
- (id)groupContainerURLs;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)localizedShortName;
- (id)machOUUIDs;
- (unsigned long long)sequenceNumber;
- (void)setLocalizedShortName:(id)arg1;
- (id)signerIdentity;

@end
