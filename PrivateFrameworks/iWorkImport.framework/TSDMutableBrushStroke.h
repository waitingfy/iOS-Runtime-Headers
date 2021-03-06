/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString, TSDStrokePattern, TSUColor;

@interface TSDMutableBrushStroke : TSDBrushStroke {
}

@property double actualWidth;
@property int cap;
@property(copy) TSUColor * color;
@property int join;
@property double miterLimit;
@property(copy) TSDStrokePattern * pattern;
@property(copy) NSString * strokeName;
@property double width;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setPatternPropertiesFromStroke:(id)arg1;
- (void)setPropertiesFromStroke:(id)arg1;

@end
