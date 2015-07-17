/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBUFormAutoFillFrame : NSObject <WBSFormAutoFillFrame> {
    WebFrame *_webFrame;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WebFrame *webFrame;

+ (id)autoFillFrameWithWebFrame:(id)arg1;

- (void).cxx_destruct;
- (id)committedURL;
- (BOOL)containsAnyFormElements;
- (void)enumerateChildFramesUsingBlock:(id /* block */)arg1;
- (struct OpaqueFormAutoFillFrame { }*)frameRef;
- (id)initWithWebFrame:(id)arg1;
- (struct OpaqueJSContext { }*)jsContextForMetadataControllerScriptWorld;
- (struct OpaqueJSValue { }*)jsWrapperInMetadataControllerScriptWorldForNode:(id)arg1;
- (id)webFrame;

@end