/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameController.framework/GameController
 */

@class _GCACHomeButton;

@interface _GCRemoteControllerProfile : _GCGamepad <_GCACHomeButtonDelegate> {
    _GCACHomeButton *_acHome;
}


- (void)handleReport:(unsigned int)arg1 data:(id)arg2;
- (void)startWithController:(id)arg1;
- (void)startHandlerThread:(id)arg1;
- (void)toggleSuspendResume;
- (void)setPlayerIndex:(int)arg1;
- (id)inputForElement:(struct __IOHIDElement { }*)arg1;
- (id)initWithController:(id)arg1;
- (id)name;
- (void).cxx_destruct;

@end