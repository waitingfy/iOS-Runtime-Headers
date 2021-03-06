/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class AVPlayerItem, NSURL, RCAVWaveformViewController, RCFileInputWaveformDataSource, RCPreviewController, RCUIConfiguration, UIButton, UILabel, UIView;

@interface RCAudioTrimmingModalItemViewController : UIViewController <RCAVWaveformViewControllerDelegate> {
    NSURL *_audioURL;
    RCUIConfiguration *_defaultUIConfiguration;
    RCUIConfiguration *_disabledUIConfiguration;
    double _maximumDuration;
    UIView *_nonWaveformContentView;
    UIButton *_playPauseButton;
    AVPlayerItem *_playerItem;
    RCPreviewController *_previewController;
    float _progress;
    RCUIConfiguration *_progressUIConfiguration;
    UILabel *_timeDisplayLabel;
    RCFileInputWaveformDataSource *_waveformDataSource;
    RCAVWaveformViewController *_waveformViewController;
    bool_enabled;
    bool_showsProgress;
}

@property(copy,readonly) NSURL * audioURL;
@property(getter=isEnabled) bool enabled;
@property(readonly) double maximumDuration;
@property(readonly) RCPreviewController * previewController;
@property float progress;
@property(readonly) struct { double x1; double x2; } selectedTimeRange;
@property bool showsProgress;

- (void).cxx_destruct;
- (void)_beginOrResumePreviewing;
- (struct CGSize { double x1; double x2; })_calculatedPreferredContentSize;
- (id)_currentUIConfiguration;
- (void)_pausePreviewing;
- (void)_playPauseAction;
- (id)_playStateImageForAVPreviewState:(long long)arg1;
- (void)_updateAudioStateInterface;
- (void)_updateProgressView;
- (id)audioURL;
- (void)audioWaveformControllerDidChangeAVState:(id)arg1;
- (void)audioWaveformControllerDidChangeAVTimes:(id)arg1;
- (void)audioWaveformControllerDidChangeWaveformDataSource:(id)arg1;
- (id)initWithAudioURL:(id)arg1 maximumDuration:(double)arg2;
- (bool)isEnabled;
- (void)loadView;
- (double)maximumDuration;
- (id)previewController;
- (float)progress;
- (struct { double x1; double x2; })selectedTimeRange;
- (void)setEnabled:(bool)arg1;
- (void)setProgress:(float)arg1;
- (void)setShowsProgress:(bool)arg1;
- (bool)showsProgress;
- (void)updateViewConstraints;
- (void)viewDidLoad;

@end
