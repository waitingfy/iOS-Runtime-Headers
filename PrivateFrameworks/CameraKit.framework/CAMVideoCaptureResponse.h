/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class NSString, UIImage;

@interface CAMVideoCaptureResponse : CAMCaptureResponse {
    short _assetSubtype;
    double _duration;
    int _recordingStoppedReason;
    NSString *_videoCapturePath;
    UIImage *_videoPreviewImage;
    bool_didCompleteUnexpectedly;
    bool_unplayable;
}

@property short assetSubtype;
@property bool didCompleteUnexpectedly;
@property double duration;
@property int recordingStoppedReason;
@property(getter=isSuccessful,readonly) bool successful;
@property(getter=isUnplayable) bool unplayable;
@property(copy) NSString * videoCapturePath;
@property(retain) UIImage * videoPreviewImage;

+ (double)minimumVideoCaptureDuration;

- (void).cxx_destruct;
- (short)assetSubtype;
- (bool)didCompleteUnexpectedly;
- (double)duration;
- (id)init;
- (bool)isSuccessful;
- (bool)isUnplayable;
- (int)recordingStoppedReason;
- (void)setAssetSubtype:(short)arg1;
- (void)setDidCompleteUnexpectedly:(bool)arg1;
- (void)setDuration:(double)arg1;
- (void)setRecordingStoppedReason:(int)arg1;
- (void)setUnplayable:(bool)arg1;
- (void)setVideoCapturePath:(id)arg1;
- (void)setVideoPreviewImage:(id)arg1;
- (id)videoCapturePath;
- (id)videoPreviewImage;

@end
