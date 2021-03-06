/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@class NSArray;

@interface _BKSCombinedTouchDeliveryPolicy : BKSTouchDeliveryPolicy {
    NSArray *_policies;
}

@property(readonly) NSArray * policies;

+ (bool)supportsSecureCoding;

- (id)assertionEndpoint;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPolicies:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)matchSharingTouchesPolicy:(id)arg1 orCancelTouchesPolicy:(id)arg2 orCombinedPolicy:(id)arg3;
- (id)policies;
- (void)setAssertionEndpoint:(id)arg1;

@end
