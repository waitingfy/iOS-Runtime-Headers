/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuetDaemonProtocol.framework/CoreDuetDaemonProtocol
 */

@class CDDebug;

@interface CDDPluginResponder : NSObject {
    CDDebug *_debug;
}

@property(readonly) CDDebug * debug;

- (void).cxx_destruct;
- (id)debug;
- (id)init;
- (id)makeStashWithId:(unsigned long long)arg1;
- (bool)respondToAdmissionCheckAndStartedOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 status:(bool)arg4 reasons:(id)arg5 error:(id*)arg6;
- (bool)respondToAdmissionSignoffOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 status:(bool)arg4 reasons:(id)arg5 error:(id*)arg6;
- (bool)respondToInitOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 info:(id)arg4 error:(id*)arg5;
- (bool)respondToTriggerOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 info:(id)arg4 error:(id*)arg5;
- (bool)sendMessageOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 type:(long long)arg4 error:(id*)arg5;

@end
