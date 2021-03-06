/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSArray, NSString;

@interface AAFamilyEligibilityResponse : AAResponse {
    NSArray *_familyFeaturePrimaryDescriptions;
    NSArray *_familyFeatureSecondaryDescriptions;
    NSString *_familyFeatureSecondaryTitle;
    NSString *_underageEligibilityAlertMessage;
    NSString *_underageEligibilityAlertTitle;
    bool_hasPendingInvites;
}

@property(readonly) long long eligibilityStatus;
@property(readonly) bool eligible;
@property(readonly) NSArray * familyFeaturePrimaryDescriptions;
@property(readonly) NSArray * familyFeatureSecondaryDescriptions;
@property(readonly) NSString * familyFeatureSecondaryTitle;
@property(readonly) bool hasPendingInvites;
@property(readonly) NSString * underageEligibilityAlertMessage;
@property(readonly) NSString * underageEligibilityAlertTitle;

- (void).cxx_destruct;
- (long long)eligibilityStatus;
- (bool)eligible;
- (id)familyFeaturePrimaryDescriptions;
- (id)familyFeatureSecondaryDescriptions;
- (id)familyFeatureSecondaryTitle;
- (bool)hasPendingInvites;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (id)underageEligibilityAlertMessage;
- (id)underageEligibilityAlertTitle;

@end
