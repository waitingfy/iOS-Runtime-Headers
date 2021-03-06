/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSNumber, NSString, NSURL;

@interface SAAlarmSearch : SADomainCommand {
}

@property(copy) NSNumber * enabled;
@property(copy) NSArray * frequency;
@property(copy) NSNumber * hour;
@property(copy) NSURL * identifier;
@property(copy) NSString * label;
@property(copy) NSNumber * minute;

+ (id)search;
+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;

- (id)enabled;
- (id)encodedClassName;
- (id)frequency;
- (id)groupIdentifier;
- (id)hour;
- (id)identifier;
- (id)label;
- (id)minute;
- (bool)requiresResponse;
- (void)setEnabled:(id)arg1;
- (void)setFrequency:(id)arg1;
- (void)setHour:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setMinute:(id)arg1;

@end
