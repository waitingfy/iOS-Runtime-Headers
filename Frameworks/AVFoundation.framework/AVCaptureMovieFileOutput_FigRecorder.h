/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureMovieFileOutputInternal_FigRecorder, NSArray;

@interface AVCaptureMovieFileOutput_FigRecorder : AVCaptureFileOutput_FigRecorder {
    AVCaptureMovieFileOutputInternal_FigRecorder *_internal;
}

@property(copy) NSArray * metadata;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } movieFragmentInterval;

+ (bool)consolidateMovieFragmentsInFile:(id)arg1 error:(id*)arg2;
+ (void)initialize;
+ (id)recorderCommonMetadataForAVMetadataItemArray:(id)arg1;
+ (bool)updateMovieMetadataInFile:(id)arg1 withMetadata:(id)arg2 error:(id*)arg3;

- (void)_applyOverridesToCaptureOptions:(id)arg1;
- (id)_avErrorUserInfoDictionaryForError:(int)arg1 wrapper:(id)arg2;
- (void)_handleStartRecordingError:(int)arg1 info:(id)arg2;
- (int)_startRecording:(id)arg1;
- (int)_stopRecording;
- (id)connectionMediaTypes;
- (void)dealloc;
- (void)didStopForSession:(id)arg1 error:(id)arg2;
- (bool)getRecorderBoolForKey:(id)arg1 withDefault:(bool)arg2;
- (void)handleEnabledChangedForConnection:(id)arg1;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (id)init;
- (bool)isKindOfClass:(Class)arg1;
- (bool)isRecording;
- (bool)isRecordingPaused;
- (id)metadata;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })movieFragmentInterval;
- (id)outputFileURL;
- (id)outputSettingsForConnection:(id)arg1;
- (void)pauseRecording;
- (void)resumeRecording;
- (bool)sendsLastVideoPreviewFrame;
- (void)setMetadata:(id)arg1;
- (void)setMovieFragmentInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setSendsLastVideoPreviewFrame:(bool)arg1;
- (void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2;
- (void)stopRecording;

@end
