/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MCMediaControlClientRemote, NSString, NSNetService, MPAVItem, NSData, NSDictionary;

@interface MPAirPlayVideoService : NSObject <NSNetServiceDelegate> {
    int _resolutionState;
    NSNetService *_netService;
    struct _DNSServiceRef_t { } *_dnsService;
    NSString *_ipAddress;
    MCMediaControlClientRemote *_mediaControlClient;
    MPAVItem *_item;
    void *_context;
    NSData *_playInfoData;
    NSDictionary *_cachedPlaybackInfo;
    double _lastFetchedPlaybackInfoTimeInterval;
    double _cachedCurrentPlaybackTime;
    float _cachedVolume;
    unsigned int _capabilities;
    BOOL _didResolveOrFailToResolve;
    BOOL _hasVolumeControl;
    BOOL _isPlaying;
    BOOL _playbackTimeIsValid;
    BOOL _preparingToPlay;
    BOOL _waitingForPlaybackToBegin;
    BOOL _waitingForPasswordEntry;
    unsigned int _bufferingState;
    unsigned int _playbackState;
}

@property(readonly) BOOL isAvailable;
@property(readonly) NSNetService * netService;
@property(readonly) BOOL _didResolveOrFailToResolve;
@property void* context;

+ (void)_beginBackgroundNetworkAssertion;
+ (void)_endBackgroundNetworkAssertion;

- (void)setContext:(void*)arg1;
- (id)item;
- (unsigned int)hash;
- (void*)context;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (void)dealloc;
- (BOOL)_didResolveOrFailToResolve;
- (BOOL)canDisplayItem:(id)arg1;
- (BOOL)prepareToDisplayItem:(id)arg1 completionHandler:(id)arg2;
- (id)currentPlaybackDate;
- (BOOL)hasVolumeControl;
- (void)sendPICRequestData:(id)arg1 responseHandler:(id)arg2;
- (void)sendPlayInfoData:(id)arg1;
- (id)_currentPlaybackInfo;
- (void)_playWithLocalFilePath:(id)arg1 password:(id)arg2 startPosition:(float)arg3 playInfo:(id)arg4 completionHandler:(id)arg5;
- (void)_playRemoteWithParams:(id)arg1 password:(id)arg2 completionHandler:(id)arg3;
- (void)_sendPICRequestData:(id)arg1 password:(id)arg2 responseHandler:(id)arg3;
- (void)_setPlaybackState:(unsigned int)arg1;
- (void)_updateForPlaybackEnding;
- (void)_updateForPlaybackStarting;
- (BOOL)playWithCompletionHandler:(id)arg1;
- (id)currentEstimatedPlaybackDate;
- (int)resolutionState;
- (unsigned int)capabilities;
- (id)_initWithNSNetService:(id)arg1;
- (double)timeOfPlayableStart;
- (double)timeOfPlayableEnd;
- (double)timeOfSeekableStart;
- (double)timeOfSeekableEnd;
- (double)durationIfAvailable;
- (double)playableDuration;
- (unsigned int)bufferingState;
- (void)setCurrentPlaybackTime:(double)arg1;
- (float)volume;
- (void)setVolume:(float)arg1;
- (id)netService;
- (void)_cancelResolve;
- (void)_resolveWithTimeout:(double)arg1;
- (id)ipAddress;
- (BOOL)isAvailable;
- (void)stop;
- (BOOL)setRate:(float)arg1;
- (unsigned int)playbackState;
- (double)currentPlaybackTime;
- (void)setItem:(id)arg1;

@end