/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray, IMTimer;

@interface IDSAppleRegistrationKeychainReader : NSObject  {
    NSMutableArray *_registrationData;
    IMTimer *_purgeTimer;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _purgeCancelBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _purgeEnqueueBlock;

}

+ (id)keychainAccessGroupForVersion:(unsigned int)arg1;
+ (id)keychainAccountForVersion:(unsigned int)arg1;
+ (id)keychainServiceForVersion:(unsigned int)arg1;
+ (id)sharedInstance;

- (id)registrationWithServiceType:(id)arg1 accountType:(int)arg2 value:(id)arg3;
- (id)registrationData;
- (void)_reloadFromDictionaryLocked:(id)arg1;
- (void)_setPurgeTimer;
- (void)_reloadFromKeychainLocked;
- (void)_flush;
- (id)init;
- (void)dealloc;

@end